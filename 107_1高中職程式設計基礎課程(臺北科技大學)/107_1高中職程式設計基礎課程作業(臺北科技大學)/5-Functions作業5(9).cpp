#include <iostream>

bool Isprime(int N);
bool IsSTYU(int N);

int main()
{
    int x,y=0;
    std::cin>>x>>y;
    for(int i=x;i<=y;i++)
        {
            if(IsSTYU(i)==true)
                {
                   std::cout<<i<<std::endl;
                }
        }
    return 0;
}

bool Isprime(int N)
{
    if(N<=1)
        {
            return false;
        }
    else if(N==2)
        {
            return true;
        }
    else if(N%2==0)
        {
            return false;
        }
    else
        {
            for(int i=3;i<N;i++)
                {
                    if((N%i)==0)
                        {
                            return false;
                        }
                }
            return true;
        }
}

bool IsSTYU(int N)
{
    bool bolar=true;
    for(int i=2;i<N;i++)
        {
            if(N%i==0)
                {
                    for(int j=2;j<i;j++)
                        {
                            if(i%j==0)
                                {
                                    if(Isprime(j)==false)
                                        {
                                            bolar=false;
                                            break;
                                        }
                                }
                        }
                        if(bolar==false)
                            {
                                break;
                            }
                }
        }
        return bolar;
}
