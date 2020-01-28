#include <iostream>
#include <string>

int main()
{
    std::string str_Msg="";
    std::cin>>str_Msg;
    for(int i=0;i<str_Msg.length();i++)
        {
            int Temp=str_Msg[i];
            str_Msg[i]=str_Msg[str_Msg.length()-1-i];
            str_Msg[str_Msg.length()-1-i]=Temp;
            break;
        }
    std::cout<<str_Msg<<std::endl;
    return 0;
}
