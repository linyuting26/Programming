#include <iostream>

int main()
{
    int N;
    std::cin>>N;
    int A[N];//A[N]��N���}�C�j�p
    for(int i=0;i<sizeof(A)/sizeof(int);i++)
    {
        std::cin>>A[i];
    }
    bool bolar = false;
    for(int a=0;a<N;a++)//N�ӼƦr
    {
        for(int b=1;b<sizeof(A)/sizeof(int)-a;b++)//�Ĥ@�ӼƦr��7���A�ĤG�ӼƦr��6��......
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
�}�C:
(1.)�r���}�C
(2.)�r��}�C
*/
