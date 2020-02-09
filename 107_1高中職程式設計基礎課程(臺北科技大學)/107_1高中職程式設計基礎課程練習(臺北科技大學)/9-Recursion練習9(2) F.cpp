#include <iostream>

int Getclass(int int_Num);

int main()
{
    int n;
    std::cin>>n;
    std::cout<<Getclass(n)<<std::endl;
    return 0;
}

int Getclass(int int_Num)
{
    if(int_Num==0||1)
        {
            return 1;
        }
    else
        {
            return Getclass(int_Num-1)*int_Num;
        }
}
