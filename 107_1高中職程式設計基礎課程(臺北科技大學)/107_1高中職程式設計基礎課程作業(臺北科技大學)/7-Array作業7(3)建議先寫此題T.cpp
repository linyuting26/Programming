#include <iostream>
#include <string>

void fn_Showrev(std::string str_Msg);

int main(){
    std::string str_Msg="";
    std::cin>>str_Msg;
    fn_Showrev(str_Msg);
    return 0;
}
void fn_Showrev(std::string str_Msg)
{
   for(int i=str_Msg.length()-1;i>=0;i--)
   {
       std::cout<<str_Msg[i];
   }
   std::cout<<std::endl;
}
