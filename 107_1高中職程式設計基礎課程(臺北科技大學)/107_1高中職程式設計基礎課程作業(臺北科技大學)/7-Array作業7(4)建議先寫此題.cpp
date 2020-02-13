#include <iostream>
#include <string>

int main()
{
    int int_Count=0;
    std::string str_Msg="";
    std::string str_Msg2="";
    std::cin>>str_Msg;
    std::cin>>str_Msg2;
    for(int i=0;i<=str_Msg2.length()-str_Msg.length();i++)
    {
        std::string str_Sub=str_Msg2.substr(i,str_Msg.length());
        if(str_Sub==str_Msg)
        {
            int_Count++;
        }
    }
    std::cout<<int_Count<<std::endl;
    return 0;
}
