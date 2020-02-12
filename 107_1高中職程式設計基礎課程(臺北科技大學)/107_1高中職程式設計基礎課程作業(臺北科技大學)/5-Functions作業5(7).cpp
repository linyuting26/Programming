#include <iostream>

bool fn_IsPrime(int N);

int main()
{
    int Number=0;
    int Count=0;
    int i=2;
    int emirp;
    std::cin>>Number;
    while(Count<Number)
        {
           emirp=0;
           if(fn_IsPrime(i)==true)
            {
                int temp=i;
                while(temp!=0)
                    {
                        emirp=emirp*10+temp%10;
                        temp/=10;
                    }
                if(fn_IsPrime(emirp)==true)
                    {
                        std::cout<<i<<std::endl;
                        Count++;
                    }
            }
            i++;
        }
}

bool fn_IsPrime(int N)
{
    for(int i=2; i< N; i++)
    {
        if(N% i==0)
        {
            return false;
        }
    }
    return true;
}
