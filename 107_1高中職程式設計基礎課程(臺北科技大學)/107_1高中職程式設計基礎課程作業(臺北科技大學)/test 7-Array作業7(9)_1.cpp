#include <iostream>

int main()
{
    int N;
    std::cin>>N;
    int A[N];//A[N]的N為陣列大小
    for(int i=0;i<sizeof(A)/sizeof(int);i++)
    {
        std::cin>>A[i];
    }
    bool bolar = false;
    for(int a=0;a<N;a++)//N個數字
    {
        for(int b=1;b<sizeof(A)/sizeof(int)-a;b++)//第一個數字比7次，第二個數字比6次......
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
/*
陣列:
(1.)字元陣列
(2.)字串陣列
*/
