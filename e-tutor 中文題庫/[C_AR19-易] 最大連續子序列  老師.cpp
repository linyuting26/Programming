#include <iostream>
#include <cmath>
#include <algorithm>
#include <regex>
#include <string>

int main(){
    int int_Size=0;
    std::cin>> int_Size;
    char chararr_Serial[int_Size+1];
    std::fill(chararr_Serial, chararr_Serial+(int_Size+1),'\0');
    for(int int_Ct=0;int_Ct< int_Size; int_Ct++){
        std::cin>> chararr_Serial[int_Ct];
    }
    std::string str_Serial= std::string(chararr_Serial);
    int int_Floor= static_cast<int>(std::floor(static_cast<float>(int_Size)/2.0f));
    int int_MaxLength=1;

    for(int int_Ct=int_Floor; int_Ct>1; int_Ct--){
        bool bool_IsRpeat=false;
        for(int int_Ct2=0; (int_Ct2+int_Ct)<int_Size;int_Ct2++){
            std::string str_Sub=str_Serial.substr(int_Ct2,int_Ct);
            std::string str_RemdStr=str_Serial.substr(int_Ct2+int_Ct, int_Size-(int_Ct2+int_Ct));
            std::string str_Pattern= "[0-9]*"+str_Sub+"[0-9]*";
            std::regex obj_Reg(str_Pattern);
            if(std::regex_match(str_RemdStr, obj_Reg)==true){
               bool_IsRpeat=true;
               int_MaxLength= int_Ct;
               break;
            }
        }
        if(bool_IsRpeat==true){
            break;
        }
    }

    std::cout<< int_MaxLength;
    return 0;
}

