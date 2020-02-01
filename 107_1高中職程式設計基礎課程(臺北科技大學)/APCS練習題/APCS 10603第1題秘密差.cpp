#include <iostream>

int main()
{
    std::string str_Msg="";
    int A=0;
    int B=0;
    int result;
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
               result=A-B;
            }
        else
            {
                result=B-A;
            }
        std::cout<<result<<std::endl;
    return 0;
}
