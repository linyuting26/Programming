#include <iostream>

int main()
{
    int N;
    std::cin>>N;
    int Max=0;
    int A[N-1];
    bool bolar = false;
    for(int i=0;N>i;i++)
    {
        std::cin>>A[i];
    }
    for(int a=0;N-1>a;a++)
    {
        int Count=0;//Count­p¼Æ
        for(int b=1;N>b;b++)
        {
            if(A[a]==A[a+b])
            {
                bolar=true;
                Count++;
            }
            if(a+b==N-1)
                {
                    break;
                }
        }
        if(bolar==true)
            {
                if(Count>=Max)
                    {
                        Max=Count+1;
                    }
            }
    }
    std::cout<<Max<<std::endl;
    return 0;
}
