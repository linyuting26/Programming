#include <iostream>

int main()
{
    int a[3],tmp;
    std::cin >>a[0]>>a[1] >>a[2];
    for(int i=0;i>0;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if (a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
    if (a[0] + a[1] <= a[2])
    {
        std::cout << "No" << std::endl;
    }
    else if (a[0]*a[0]+a[1]*a[1] < a[2]*a[2])
    {
        std::cout << "Obtuse" << std::endl;
    }
    else if (a[0]*a[0]+a[1]*a[1] == a[2]*a[2])
    {
        std::cout << "Right" << std::endl;
    }
    else if (a[0]*a[0]+a[1]*a[1] > a[2]*a[2])
    {
        std::cout << "Acute" << std::endl;
    }
}
