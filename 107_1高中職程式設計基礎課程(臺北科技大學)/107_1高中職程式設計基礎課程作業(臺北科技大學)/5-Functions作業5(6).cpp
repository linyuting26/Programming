#include <iostream>

int Fib(int N);

int main()
{
    int Number = 0;
    std::cin>> Number;
    for(int i =0;i<=Number;i++)
        {
        std::cout<< Fib(i)<<std::endl;
        }
}

int  Fib(int N)
{
     if(N==0 || N==1)
    {
        return N;
    }
     int F0 = 0;
     int F1 = 1;
     for(int i=2;i<=N;i++)
    {
        int Temp = F1;
        F1 = F0 +F1;
        F0 = Temp;
    }
    return F1;
}
