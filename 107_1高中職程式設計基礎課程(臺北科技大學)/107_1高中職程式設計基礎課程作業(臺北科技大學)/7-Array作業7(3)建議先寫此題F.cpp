#include <iostream>

int main()
{
    //value:1234321
    //index:0123456
    std::string str_Msg="";
    std::cin>>str_Msg;
    std::string str = str_Msg;
    for(int i = 0 ; i < str_Msg.length() ; i ++)
    {
        int temp=str_Msg[i];
        str_Msg[i]=str_Msg[str_Msg.length() - 1 -i];
        str_Msg[str_Msg.length() - 1 - i]=temp;
    }
    if(str == str_Msg)
        {
            std::cout<<str_Msg<<"\n";
        }
    else
        {
            std::cout<<str<<"\n";
        }
    return 0;
}
//////////////////////////////////////////////
for (int i =str_Msg.length();i>=0;i--){
    std::cout << str_Msg[i]
}
