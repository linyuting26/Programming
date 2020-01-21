#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
double Fn_Rounding(long double number,int index);
using namespace std;

int main(){
    int int_array[10]={0};
    for(int cnt=0;cnt<10;cnt++)
    {
        cin>>int_array[cnt];
    }
    sort(int_array,int_array+10);
    for(int cnt=0;cnt<10;cnt++)
    {
        if(cnt==9)
        {
            cout<<int_array[cnt]<<"\n";
        }
        else
        {
            cout<<int_array[cnt]<<" ";
        }
    }
    long double temp=(int_array[4]+int_array[5]);
    long double answer=Fn_Rounding((temp/2),2);
    cout<<"Median:"<<fixed<<setprecision(2)<<answer<<"\n";
    return 0;
}

double Fn_Rounding(long double number,int index)
{
    bool IsNegative=false;
    if(number<0)
    {
        IsNegative=true;
        number=-number;
    }
    if(index>=0)
    {
        int sum=0;
        sum=pow(10,index);
        number=static_cast<int>((number*sum+0.5))/(sum*1.0);
    }
    if(IsNegative)
    {
        number=-number;
    }
    return number;
}
