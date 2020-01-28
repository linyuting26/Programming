#include <iostream>
#include <string>

int main()
{
    //value:1234567
    //index:0123456
    std::string str_Msg="";
    std::string str_temp="";
    std::cin>>str_Msg;
    for(int j=str_Msg.length()-1;j>=0;j--)//起始值為6，從最後面做翻轉
        {
            str_temp += str_Msg[j];
        }
    std::cout<<str_temp<<std::endl;
    return 0;
}
