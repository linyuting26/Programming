#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double rounding(double total,int index);

int main(){
    int number_of_student=0;
    int number_of_exam=0;
    cin>>number_of_exam>>number_of_student;
    float rate[number_of_exam]={0.0f};
    int student[number_of_student][number_of_exam]={0};
    for(int cnt=0;cnt<number_of_exam;cnt++)
    {
        cin>>rate[cnt];
    }
    for(int cnt=0;cnt<number_of_student;cnt++)
    {
        for(int cnt2=0;cnt2<number_of_exam;cnt2++)
        {
            cin>>student[cnt][cnt2];
        }
    }
    double sum=0.0;
    for(int cnt=0;cnt<number_of_student;cnt++)
    {
        double total=0.0;
        for(int cnt2=0;cnt2<number_of_exam;cnt2++)
        {
            total+=rounding(student[cnt][cnt2]*rate[cnt2],2);
        }
        sum+=total;
    }
    cout<<fixed<<setprecision(2)<<sum/number_of_student<<"\n";
    return 0;
}

double rounding(double total,int index)
{
    bool isnegative=false;
    if(total<0)
    {
        isnegative=true;
        total=-total;
    }
    if(index>=0)
    {
        int multiplier=0;
        multiplier=pow(10,index);
        total=(int)(total*multiplier+0.5)/(multiplier*1.0);
    }
    if(isnegative)
    {
        total=-total;
    }
    return total;
}
