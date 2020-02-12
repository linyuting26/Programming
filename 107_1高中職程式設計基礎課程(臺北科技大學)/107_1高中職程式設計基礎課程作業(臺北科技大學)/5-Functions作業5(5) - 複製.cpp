#include <iostream>

int fn_GetZero(int N);

int main()
{
    int Number=0;
    std::cin>>Number;
    int Temp=fn_GetZero(Number);
    int Total=0;
    while(true)
    {
        if(Temp%10==0)
        {
               Total++;
               Temp/=10;
        }
        else
        {
               break;
        }
    }
        std::cout<<Total<<"\n";

    return 0;
}

int fn_GetZero(int N)
{
    if(N==0)
    {
        return 1;
    }
    else
    {
        int Ans=1;
        for(int i=2;i<=N;i++)
        {
            Ans*=i;
        }
        return Ans;
    }

}
