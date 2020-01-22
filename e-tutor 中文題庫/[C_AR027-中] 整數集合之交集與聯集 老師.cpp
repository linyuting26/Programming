#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

void fn_DelEle(int* intarr_2Set, int int_Start, int& int_Bound,  int int_Del);
std::string fn_GetString(int int_Val);
void fn_IsSub(int* intarr_2Set, int int_AbondSize, int int_BbondSize);
void fn_ShowInSecAUni(int* intarr_2Set, int int_AbondSize, int int_BbondSize);

int main(){
    int intarr_2Set[6]={};
    int int_DelA=-1, int_DelB=-1;
    int int_AbondSize=3, int_BbondSize=6;
    std::fill(intarr_2Set, intarr_2Set+6,-1);

    {//Cin Data
        for(int int_Ct=0, int_Index=0; int_Ct< 8; int_Ct++){
            if(int_Ct%4!= 3){
                std::cin>> intarr_2Set[int_Index++];
            }
            else{
                if(int_Ct/4== 0){
                    std::cin>>int_DelA;
                }
                else{
                    std::cin>>int_DelB;
                }
            }
        }
    }

    {// delete the element then sort
        fn_DelEle(intarr_2Set,0 , int_AbondSize, int_DelA);
        fn_DelEle(intarr_2Set,3 , int_BbondSize, int_DelB);
        std::sort(intarr_2Set, intarr_2Set+int_AbondSize);
        std::sort(intarr_2Set+3, intarr_2Set+int_BbondSize);

    }

    {
        std::string str_Cout="";
        for(int int_Ct=0; int_Ct< int_AbondSize; int_Ct++){
            str_Cout+=(fn_GetString(intarr_2Set[int_Ct])+",");
        }
        std::cout<< str_Cout.substr(0, str_Cout.length()-1);
        std::cout<< "\n";
        str_Cout="";
        for(int int_Ct=3; int_Ct< int_BbondSize; int_Ct++){
            str_Cout+=(fn_GetString(intarr_2Set[int_Ct])+",");
        }
        std::cout<< str_Cout.substr(0, str_Cout.length()-1);
        std::cout<< "\n";
        fn_IsSub(intarr_2Set, int_AbondSize, int_BbondSize);
        std::cout<< "\n";
        fn_ShowInSecAUni(intarr_2Set, int_AbondSize, int_BbondSize);
        std::cout<< "\n";
    }

    return 0;
}

void fn_DelEle(int* intarr_2Set, int int_Start, int& int_Bound, int int_Del){
    int int_BV= int_Bound;
    for(int int_Ct=int_Start; int_Ct< int_BV; int_Ct++){
        if(*(intarr_2Set+int_Ct)==int_Del){
            int int_Temp= *(intarr_2Set+int_Ct);
            *(intarr_2Set+int_Ct)= *(intarr_2Set+int_BV-1);
            *(intarr_2Set+int_BV-1)= int_Temp;
            int_Bound--;
            break;
        }
    }
}

std::string fn_GetString(int int_Val){
    std::stringstream obj_Ss;
    obj_Ss<< int_Val;
    return obj_Ss.str();
}

void fn_IsSub(int* intarr_2Set, int int_AbondSize, int int_BbondSize){
    bool bool_IsSub=true;
    for(int int_Ct=0; int_Ct< int_AbondSize; int_Ct++){
        bool bool_IsExist=false;
        for(int int_Ct2=3; int_Ct2< int_BbondSize; int_Ct2++){
            if(intarr_2Set[int_Ct]== intarr_2Set[int_Ct2]){
                bool_IsExist=true;
                break;
            }
        }
        if(bool_IsExist==false){
            bool_IsSub= bool_IsSub & bool_IsExist;
            break;
        }
    }
    std::cout<< (bool_IsSub==true?"T":"F");
}

void fn_ShowInSecAUni(int* intarr_2Set, int int_AbondSize, int int_BbondSize){
    std::vector<int> obj_Inter;
    std::string str_Cout="";
    for(int int_Ct=0; int_Ct< int_AbondSize; int_Ct++){
        for(int int_Ct2=3; int_Ct2< int_BbondSize; int_Ct2++){
            if(intarr_2Set[int_Ct]== intarr_2Set[int_Ct2]){
                obj_Inter.push_back(intarr_2Set[int_Ct]);
                str_Cout+= (fn_GetString(intarr_2Set[int_Ct])+",");
                break;
            }
            else if(intarr_2Set[int_Ct2]> intarr_2Set[int_Ct]){
                break;
            }
        }
    }
    std::cout<< str_Cout.substr(0, str_Cout.length()-1);
    std::cout<< "\n";

    int int_Size= (int_AbondSize-0)+ (int_BbondSize-3)-obj_Inter.size();
    int intarr_Union[int_Size]={};
    int int_Index=0;
    for(int int_Ct=0; int_Ct<int_AbondSize; int_Ct++){
        intarr_Union[int_Index++]=intarr_2Set[int_Ct];
    }
    for(int int_Ct=3; int_Ct<int_BbondSize; int_Ct++){
        bool bool_IsExist=false;
        for(int int_Ct2=0; int_Ct2< obj_Inter.size(); int_Ct2++){
            if(intarr_2Set[int_Ct]==obj_Inter[int_Ct2]){
                bool_IsExist=true;
                break;
            }
        }
        if(bool_IsExist==false){
            intarr_Union[int_Index++]=intarr_2Set[int_Ct];
        }
    }
    std::vector<int>().swap(obj_Inter);

    str_Cout="";
    std::sort(intarr_Union,intarr_Union+int_Size);
    for(int int_Ct=0; int_Ct<int_Size; int_Ct++){
        //std::cout<< intarr_Union[int_Ct];
        str_Cout+=(fn_GetString(intarr_Union[int_Ct])+",");
    }
    std::cout<< str_Cout.substr(0, str_Cout.length()-1);
}
