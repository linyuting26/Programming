#include <iostream>
#include <string>

int main()
{
    std::string str_Msg="";//str_Temp不能在這裡做定義，因為總共要輸入N個單字(N個字串)
    int N=-1;
    std::cin>>N;//str_Msg不能在這裡做輸入，因為總共要輸入N個單字(N個字串)
    for(int i=0;i<N;i++)
        {
            std::cin>>str_Msg;
            std::string str_Temp="";
            for(int a=str_Msg.length()-1;a<=str_Msg.length();a--)
                {
                    str_Temp+=str_Msg[a];
                }
            if(i!=N-1)
                {
                    std::cout<<str_Temp<<' ';
                }
            else
                {
                    std::cout<<str_Temp<<std::endl;
                }
        }
    return 0;
}
