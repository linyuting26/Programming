#include <bits/stdc++.h>

int main()
{
    std::string str_Msg="";
    std::string str_Temp="";
    std::cin>>str_Msg;
    for(int i=str_Msg.length()-1;i>=0;i--)
        {
            str_Temp+=str_Msg[i];
        }
    int i=atoi(str_Temp.c_str());
    std::cout<<i/1<<std::endl;
    return 0;
}
