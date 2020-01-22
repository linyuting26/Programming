#include <iostream>
#include <cmath>
using namespace std;
long long int fn_GetTotal(long long int int_n);
long long int int_array[40]={0};
int main(){
    int int_n=0;
    cin>>int_n;
    long long int number=fn_GetTotal(int_n);
    cout<<"f("<<int_n<<")="<<number<<"\n";
    return 0;
}

long long int fn_GetTotal(long long int int_n)
{
    long long int sum=0;
    if(int_array[int_n] !=  0 )
        return int_array[int_n];
    if(int_n==0)
    {
        int_array[0]=1;
        return 1;
    }
    else if(int_n==1)
    {
        int_array[1]=fn_GetTotal(0)*fn_GetTotal(0);
        return fn_GetTotal(0)*fn_GetTotal(0);
    }
    else
    {
        for(int cnt=0;cnt<int_n;cnt++)
        {
            sum+=fn_GetTotal(cnt)*fn_GetTotal(int_n-cnt-1);
        }
        int_array[int_n]=sum;
        return sum;
    }
}
