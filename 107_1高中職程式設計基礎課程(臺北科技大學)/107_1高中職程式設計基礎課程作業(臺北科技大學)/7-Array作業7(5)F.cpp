#include <iostream>

int main()
{
    int n;
    int Msg[n];
    int A[n];
    for(int b=1;b<=n;b++)
        {
            int x=0;
            x=x+b;
            A[n]=x;
        }
    std::cin>>n;
    for(int a=0;a<n-2;a++)
        {
            std::cin>>Msg[a];
        }
    std::cout<<A[n]<<std::endl;
    return 0;
}
