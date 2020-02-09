#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int number=-1;
    std::string str_Msg="";
    std::cin>>number;
    std::vector <std::string> score;
    for(int i=0;i<str_Msg.length();i++)
        {
            std::cin>>str_Msg;
            score.push_back(str_Msg);
        }
    for(int i=0;i<score.size();i++)
        {
            std::cout<<score.at(i)<<std::endl;
        }
    return 0;
}




