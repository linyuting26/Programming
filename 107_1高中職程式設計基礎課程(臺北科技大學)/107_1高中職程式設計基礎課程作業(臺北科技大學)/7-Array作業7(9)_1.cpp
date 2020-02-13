#include <iostream>

int main()
{
    int N;
    std::cin>>N;
    int A[N];
    for(int i=0;i<sizeof(A)/sizeof(int);i++)
    {
        std::cin>>A[i];
    }
    bool bolar = false;
    for(int a=0;a<N;a++)
    {
        for(int b=1;b<sizeof(A)/sizeof(int)-a;b++)
        {
            if(A[a]==A[a+b])
            {
               bolar=true;
               break;
            }
        }
    }
    if(bolar)
        {
            std::cout<<"1"<<std::endl;
        }
    else
        {
            std::cout<<"0"<<std::endl;
        }
    return 0;
}
