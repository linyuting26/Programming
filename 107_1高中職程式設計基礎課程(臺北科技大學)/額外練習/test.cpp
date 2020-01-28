#include <iostream>
#include <string>

int main(){
    int N;
    std::string str_Msg="";
    char temp;
    std::cin>>N;
    for(int i=0;N>i;i++)
    {
		std::cin>>str_Msg;
		std::string str_temp = "";
		for(int j=str_Msg.length()-1;j>=0;j--)
		{
			str_temp += str_Msg[j];
		}
		if(i!=N-1)
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
