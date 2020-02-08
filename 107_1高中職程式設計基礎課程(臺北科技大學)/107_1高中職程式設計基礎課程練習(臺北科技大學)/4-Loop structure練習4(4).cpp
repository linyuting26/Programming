#include <iostream>

int main()
{
    int int_Num=0;
    std::cin>> int_Num;
    int int_Sum=0;
    for(int i=1;i<=int_Num;i++)
    {
        if(i%2==0 || i%3==0)  int_Sum+=i;
    }
    std::cout<< int_Sum << std::endl;
    return 0;
}
