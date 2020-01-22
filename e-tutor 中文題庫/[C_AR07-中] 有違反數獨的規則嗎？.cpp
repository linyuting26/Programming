#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int fn_GetC2I(char chr_It);
void fn_CinVal(int* intarr_99In, int int_Size);
bool fn_ScRs(int* intarr_99In, int int_Size);
bool fn_ScCs(int* intarr_99In, int int_Size);
bool fn_ScBs(int* intarr_99In, int int_Size);

int main(){
    int intarr_99In[9][9]={};
    fn_CinVal(reinterpret_cast<int*>( intarr_99In),9);
    bool bool_TrueFlag= true;
    bool_TrueFlag=bool_TrueFlag&fn_ScRs(reinterpret_cast<int*>( intarr_99In),9);
    bool_TrueFlag=bool_TrueFlag&fn_ScCs(reinterpret_cast<int*>( intarr_99In),9);
    bool_TrueFlag=bool_TrueFlag&fn_ScBs(reinterpret_cast<int*>( intarr_99In),9);
    if(bool_TrueFlag== true){
        std::cout<< "true" << "\n";
    }
    return 0;
}

int fn_GetC2I(char chr_It){
    std::stringstream obj_Ss;
    obj_Ss << chr_It;
    int int_Val;
    obj_Ss >> int_Val;
    return int_Val;
}

void fn_CinVal(int* intarr_99In,int int_Size){
    std::string str_Val="";
    for(int int_Ct=0; int_Ct< int_Size; int_Ct++){
        str_Val="";
        std::cin>> str_Val;
        for(int int_Ct2=0; int_Ct2< int_Size && int_Ct2< str_Val.length(); int_Ct2++){
            *(intarr_99In+ (int_Ct* int_Size)+ int_Ct2)= fn_GetC2I(str_Val[int_Ct2]);
        }
    }
}

bool fn_ScRs(int* intarr_99In, int int_Size){
    bool bool_Flag= true;
    bool bool_IsMarked[9]={};
    for(int int_Ct=0; int_Ct< int_Size; int_Ct++){
        std::fill(bool_IsMarked, bool_IsMarked+9, false);
        for(int int_Ct2=0; int_Ct2< int_Size; int_Ct2++){
            int int_Index= *(intarr_99In+ (int_Ct* int_Size)+ int_Ct2)-1;
            if(int_Index>=0 && int_Index< int_Size){
                if(bool_IsMarked[int_Index]==false){
                    bool_IsMarked[int_Index]=true;
                }
                else{
                    std::cout<< "row" << (int_Ct+1) << " "<< "#" << (int_Index+1) << "\n";
                    bool_Flag= false;
                    break;
                }
            }
        }
    }
    return bool_Flag;
}

bool fn_ScCs(int* intarr_99In, int int_Size){
    bool bool_Flag= true;
    bool bool_IsMarked[9]={};
    for(int int_Ct=0; int_Ct< int_Size; int_Ct++){
        std::fill(bool_IsMarked, bool_IsMarked+9, false);
        for(int int_Ct2=0; int_Ct2< int_Size; int_Ct2++){
            int int_Index= *(intarr_99In+ (int_Ct)+ int_Size*int_Ct2)-1;
            if(int_Index>=0 && int_Index< int_Size){
                if(bool_IsMarked[int_Index]==false){
                    bool_IsMarked[int_Index]=true;
                }
                else{
                    std::cout<< "column" << (int_Ct+1) << " "<< "#" << (int_Index+1) << "\n";
                    bool_Flag= false;
                    break;
                }
            }
        }
    }
    return bool_Flag;
}

bool fn_ScBs(int* intarr_99In, int int_Size){
    bool bool_Flag= true;
    bool bool_IsMarked[9]={};
    for(int int_Ct=0; int_Ct< int_Size/3; int_Ct++){
        for(int int_Ct2=0; int_Ct2< int_Size/3; int_Ct2++){
            bool bool_Sec= true;
            std::fill(bool_IsMarked, bool_IsMarked+9, false);
            for(int int_Ct3=0; int_Ct3< int_Size/3; int_Ct3++){
                int int_RowSt= (int_Ct*int_Size/3)+int_Ct3;
                for(int int_Ct4=0; int_Ct4< int_Size/3; int_Ct4++){
                    int int_ColSt= (int_Ct2*int_Size/3)+int_Ct4;
                    int int_Index= *(intarr_99In+ (int_RowSt*int_Size)+ int_ColSt)-1;
                    if(int_Index>=0 && int_Index< int_Size){
                        if(bool_IsMarked[int_Index]==false){
                            bool_IsMarked[int_Index]=true;
                        }
                        else{
                            std::cout<< "block" << (int_Ct*(int_Size/3)+int_Ct2+1) << " "<< "#" << (int_Index+1) << "\n";
                            bool_Flag= false;
                            bool_Sec= false;
                            break;
                        }
                    }
                }
                if(bool_Sec==false){
                    break;
                }
            }
        }
    }
    return bool_Flag;
}
