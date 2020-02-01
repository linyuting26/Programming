#include <iostream>

int main()
{
    int a,b,c;
    bool bolar=false;
    std::cin>>a>>b>>c;
    if(a>0)
    {
        a=1;
    }
    if(b>0)
    {
        b=1;
    }
    if((a&b)==c)
        {
            std::cout<<"AND"<<std::endl;
            bolar=true;
        }
    if((a||b)==c)
        {
            std::cout<<"OR"<<std::endl;
            bolar=true;
        }
    if((a^b)==c)
        {
            std::cout<<"XOR"<<std::endl;
            bolar=true;
        }
    if(bolar==false)
        {
            std::cout<<"IMPOSSIBLE"<<std::endl;
        }
    return 0;
}
