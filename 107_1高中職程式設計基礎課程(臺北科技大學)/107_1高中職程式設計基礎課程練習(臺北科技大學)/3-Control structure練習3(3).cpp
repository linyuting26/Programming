#include <iostream>
#include <ctype.h>

int main()
{
    std::cout<<"Please enter a character:";
    char chr_IN =' ';
    std::cin>>  chr_IN;
    if(isalpha(chr_IN)) std::cout<< chr_IN << " is an alphabet." << std::endl;
    else std::cout<< chr_IN << " is not an alphabet." << std::endl;

    return 0;
}
