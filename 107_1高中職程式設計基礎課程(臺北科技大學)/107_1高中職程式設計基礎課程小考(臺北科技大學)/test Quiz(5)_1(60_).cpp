#include <iostream>
#include <string>

int main()
{
    std::string str_Msg="";//str_Temp����b�o�̰��w�q�A�]���`�@�n��JN�ӳ�r(N�Ӧr��)
    int N=-1;
    std::cin>>N;//str_Msg����b�o�̰���J�A�]���`�@�n��JN�ӳ�r(N�Ӧr��)
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
