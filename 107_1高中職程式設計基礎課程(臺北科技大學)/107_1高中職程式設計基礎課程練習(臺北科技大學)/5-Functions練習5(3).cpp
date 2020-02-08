#include <iostream>

int Prime(int c);

int main()
{
    int a =0;
    std::cin >> a;
    while (a!=1)
        {
            if (a/Prime(a)==1)
                {
                    std::cout << Prime(a) << std::endl;
                    a/=Prime(a);
                }
            else
                {
                    std::cout << Prime(a) << "*";
                    a/=Prime(a);
                }
        }
    return 0;
}

int Prime(int c)
{
    int b =2;
    while (c>1)
        {
            if (c%b==0)
                {
                    return b;
                    c/=b;
                }
            else
                {
                    b++;
                }
        }
}
