#include <iostream>

int main()
 {
     std::string str_Msg="";
     int A=0;
     int B=0;
     std::cin>>str_Msg;
     for(int i=0;i<str_Msg.length();i++)
        {
            if((i%2)==0)
                {
                    A=A+str_Msg[i]-'0';
                }
            else
                {
                    B=B+str_Msg[i]-'0';
                }
        }
    if(A>B)
        {
            std::cout<<A-B<<std::endl;
        }
    else
        {
            std::cout<<B-A<<std::endl;
        }
     return 0;
 }
