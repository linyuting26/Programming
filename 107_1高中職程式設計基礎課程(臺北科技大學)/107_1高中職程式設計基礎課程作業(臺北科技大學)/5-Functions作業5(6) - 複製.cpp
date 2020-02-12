#include <iostream>

int int_Fibonacci_number(int N);

int main()
{
   int Number=0;
   std::cin>>Number;//Number為輸入的一正整數
   for(int i=0;i<=Number;i++)//i為階層
    {
    std::cout<<int_Fibonacci_number(i)<<std::endl;
    }
}

int int_Fibonacci_number(int N)
{
if(N==0||N==1)//因為已知前兩項為0和1
    {
    return N;
    }
else
    {
    int F0=0;
    int F1=1;
    for(int i=2;i<=N;i++)
        {
        int temp=F1;//temp為儲存前兩數的總和
        F1=F0+F1;//F1為結果
        F0=temp;
        }
        return F1;
    }
}
