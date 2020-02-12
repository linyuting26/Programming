#include <iostream>
#include <string>

bool alpha(char a);
bool Num(char a);
bool Num2(char a);

int main()
{
    std::string str_1="";
    std::cin >> str_1;
    if (str_1.length()!=10)
    {
        std::cout << "The length of input is not equal to 10." << std::endl;
    }
    else
    {
            for (int i =1;str_1.length()-1>i;i++)
            {
                if (!alpha(str_1[0]))
                {
                    std::cout << "The first term of string is not an alphabet." << std::endl;
                    break;
                }
            }
            for (int i =1;str_1.length()>i;i++)
            {
                if (Num2(str_1[i])==false)
                {
                    std::cout << "The second to 10th terms should be numeric terms." << std::endl;
                    break;
                }
    }
    if (Num(str_1[1])==false)
    {
        std::cout << "The number of gender should be equal to 1 or 2." << std::endl;
    }
    }
    return 0;
}

bool alpha(char a)
{
    if ('a'<=a && a<='z')
    {
        return true;
    }
    else if ('A'<=a && a<='Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Num(char a)
{
    if (a=='1' || a=='2')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Num2(char a)
{
    if (a>='1' && a<='9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
