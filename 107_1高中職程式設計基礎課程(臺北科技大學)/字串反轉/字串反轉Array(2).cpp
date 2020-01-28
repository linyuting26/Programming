#include <iostream>
#include <string>

int main()
{
    //value:1234567
    //index:0123456
    std::string str_Msg="";
    std::cin>>str_Msg;
    for(int i = 0 ; i < str_Msg.length() ; i ++)
    {
        int temp=str_Msg[i];
        str_Msg[i]=str_Msg[str_Msg.length() - 1 -i];
        str_Msg[str_Msg.length() - 1 - i]=temp;
        break;
    }
    std::cout<<str_Msg<<std::endl;
    return 0;
}
