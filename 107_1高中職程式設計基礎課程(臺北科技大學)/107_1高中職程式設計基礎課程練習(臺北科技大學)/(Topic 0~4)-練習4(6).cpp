#include <iostream>

int main()
{
    int i = 0;
    std::cin>> i;
    if(i>30) std::cout<< "Out of range\n";
    else
    {
        int Ans = 1;
        for(int j=1;j<=i;j++)
        {
            Ans*=2;
        }
        std::cout<< Ans << std::endl;
    }

    return 0;
}
