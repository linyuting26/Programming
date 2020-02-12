#include <iostream>
#include <string>
#include <vector>

bool alpha(char a);
bool Num(char a);
bool Num2(char a);
int alpha2(char a);

int main()
{
    std::string str_1="";
    bool bolar = true;
    int Count =0;
    int b,c;
    std::vector <int> arr;
    std::cin >> str_1;
    if (str_1.length()!=10)
    {
        std::cout << "The length of input is not equal to 10." << std::endl;
        bolar = false;
    }
    else
    {
        for (int i =1;str_1.length()-1>i;i++)
        {
           if (!alpha(str_1[0]))
            {
                std::cout << "The first term of string is not an alphabet." << std::endl;
                bolar = false;
                break;
            }
        }
        for (int i =1;str_1.length()>i;i++)
        {
            if (Num2(str_1[i])==false)
            {
                std::cout << "The second to 10th terms should be numeric terms." << std::endl;
                bolar = false;
                break;
            }
        }
        if (Num(str_1[1])==false)
        {
            std::cout << "The number of gender should be equal to 1 or 2." << std::endl;
            bolar = false;
        }
    }
    if (bolar == false)
    {
    return 0;
    }
    else
    {
        arr.push_back(alpha2(str_1[0])/10);
        arr.push_back(alpha2(str_1[0])%10);
        Count=arr[0]*1+arr[1]*9;
        for (int i =1;str_1.length()>i;i++)
        {
            if (9-i>1)
            {
            b=str_1[i]-'0';
            Count+=b*(9-i);
            }
            else
            {
            b=str_1[i]-'0';
            Count+=b*1;
            }
        }
        if (Count%10==0)
        {
            std::cout << "ID is legal." << std::endl;
            return 0;
        }
        else
        {
            std::cout << "ID is illegal." << std::endl;
            return 0;
        }
    }
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
    if (a>='0' && a<='9')
    {
    return true;
    }
    else
    {
    return false;
    }
}

int alpha2(char a)
{
        if (a=='A'||a=='a')
        {
        return 10;
        }
        if (a=='B'||a=='b')
        {
        return 11;
        }
        if (a=='C'||a=='c')
        {
        return 12;
        }
        if (a=='D'||a=='d')
        {
        return 13;
        }
        if (a=='E'||a=='e')
        {
        return 14;
        }
        if (a=='F'||a=='f')
        {
        return 15;
        }
        if (a=='G'||a=='g')
        {
        return 16;
        }
        if (a=='H'||a=='h')
        {
        return 17;
        }
        if (a=='I'||a=='i')
        {
        return 34;
        }
        if (a=='J'||a=='j')
        {
        return 18;
        }
        if (a=='K'||a=='k')
        {
        return 19;
        }
        if (a=='L'||a=='l')
        {
        return 20;
        }
        if (a=='M'||a=='m')
        {
        return 21;
        }
        if (a=='N'||a=='n')
        {
        return 22;
        }
        if (a=='o'||a=='O')
        {
        return 35;
        }
        if (a=='P'||a=='p')
        {
        return 23;
        }
        if (a=='Q'||a=='q')
        {
        return 24;
        }
        if (a=='R'||a=='r')
        {
        return 25;
        }
        if (a=='S'||a=='s')
        {
        return 26;
        }
        if (a=='T'||a=='t')
        {
        return 27;
        }
        if (a=='U'||a=='u')
        {
        return 28;
        }
        if (a=='V'||a=='v')
        {
        return 29;
        }
        if (a=='w'||a=='W')
        {
        return 32;
        }
        if (a=='X'||a=='x')
        {
        return 30;
        }
        if (a=='Y'||a=='y')
        {
        return 31;
        }
        if (a=='Z'||a=='z')
        {
        return 33;
        }
}
