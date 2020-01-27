#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <map>

int main(){
    std::map<std::pair<std::string, int>, std::string>obj_Map;

    std::vector<std::pair<std::string, int>*>* obj_Vec =new std::vector<std::pair<std::string, int>*>;
    for(int int_Ct=0; int_Ct< 10; int_Ct++){
        std::pair<std::string, int>* obj_Par=new std::pair<std::string, int>;
        obj_Par->first="Hi", obj_Par->second=int_Ct;
        obj_Vec->push_back(obj_Par);
    }

    for(int int_Ct=0; int_Ct< 10; int_Ct++){
        std::cout<<obj_Vec->at(int_Ct)->first<<","<<obj_Vec->at(int_Ct)->second<<"\n";
    }

    delete obj_Vec;
    return 0;
}
