#include <iostream>
#include <string>
#include <math.h>

int main(){
    std::string str_Mesg= "I can speak English.\n";
    std::string str_Mesg2= "我也會說中文。";
    std::cout<< str_Mesg<< str_Mesg2<< std::endl;
    std::cout<< std::endl;
    std::string str_Mesg3= str_Mesg+ str_Mesg2;
    std::cout<< str_Mesg3+"\n";
    std::cout<< "\n";

    double db_Pi= 3.14159265;
    double db_Angle=-1;
    double db_Result=-1;
    std::cout<< "請輸入角度：";
    std::cin >> db_Angle;
    db_Result=sin(db_Angle* db_Pi/ 180.0 );
    std::cout<< "sin輸出結果為：" << db_Result<< "\n";

    return 0;
}
