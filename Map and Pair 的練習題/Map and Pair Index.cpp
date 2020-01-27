#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <map>

int main(){
    std::map<std::pair<std::string, int>, std::string>obj_Map;

    std::vector<std::pair<std::string, int>> obj_Vec;
    for(int int_Ct=0; int_Ct< 10; int_Ct++){
        std::pair<std::string, int> obj_Par("Hi",int_Ct);
        obj_Vec.push_back(obj_Par);
    }

    for(auto objptr_It=obj_Vec.begin();objptr_It!=obj_Vec.end();objptr_It++){
        std::cout<<(*objptr_It).first << "," <<(*objptr_It).second << "\n";
    }



    return 0;
}
