#include <iostream>

int int_Fibonacci_number(int N);

int main()
{
   int Number=0;
   std::cin>>Number;//Number����J���@�����
   for(int i=0;i<=Number;i++)//i�����h
    {
    std::cout<<int_Fibonacci_number(i)<<std::endl;
    }
}

int int_Fibonacci_number(int N)
{
if(N==0||N==1)//�]���w���e�ⶵ��0�M1
    {
    return N;
    }
else
    {
    int F0=0;
    int F1=1;
    for(int i=2;i<=N;i++)
        {
        int temp=F1;//temp���x�s�e��ƪ��`�M
        F1=F0+F1;//F1�����G
        F0=temp;
        }
        return F1;
    }
}
