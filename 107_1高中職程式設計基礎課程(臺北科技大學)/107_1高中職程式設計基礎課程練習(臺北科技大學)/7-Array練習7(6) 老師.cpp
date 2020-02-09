#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct StuInfo{
    public: std::string str_Name;
    public: int int_Score;
};

struct CompareAlg{
    public: bool operator() (StuInfo& obj_Prev,StuInfo& obj_Next){//
        bool bool_Return=false;
        if(obj_Prev.int_Score<obj_Next.int_Score){
            bool_Return=false;
        }
        else if(obj_Prev.int_Score>obj_Next.int_Score){
            bool_Return=true;
        }
        else{
            if((obj_Prev.str_Name).compare(obj_Next.str_Name)<=0){
                bool_Return= true;
            }
            else{
                bool_Return= false;
            }

        }
        return bool_Return;
    }
};

int main(){
    int int_Size=0;
    std::cin>> int_Size;
    std::vector<StuInfo> objarr_Stu;
    for(int int_Ct=0; int_Ct< int_Size; int_Ct++){
        StuInfo obj_Elem;
        std::cin>> obj_Elem.str_Name;
        std::cin>> obj_Elem.int_Score;
        objarr_Stu.push_back(obj_Elem);
    }
    CompareAlg obj_Compare;
    std::sort(objarr_Stu.begin(), objarr_Stu.end(), obj_Compare);//

    for(int int_Ct=0; int_Ct< int_Size; int_Ct++){
        std::cout<<  (int_Ct+1) << " "<< objarr_Stu[int_Ct].str_Name << " ";
        std::cout<< objarr_Stu[int_Ct].int_Score<< "\n";
    }
    std::vector<StuInfo>().swap(objarr_Stu);//Release the vector//
    return 0;
}
