#include <iostream>
#include <string>

int main()
{
    int N;
    std::string str_Msg="";
    std::cin>>N;
    for(int i=0;N>i;i++)//i為執行的次數
    {
        std::cin>>str_Msg;
        std::string str_temp = "";
        for(int j=str_Msg.length()-1;j>=0;j--)
        {
            str_temp += str_Msg[j];
        }
        if(i!=N-1)//當i不是最後一項
        {
            std::cout<<str_temp<<' ';
        }
        else if(i==N-1)
        {
            std::cout<<str_temp<<std::endl;
        }
    }
    return 0;
}
