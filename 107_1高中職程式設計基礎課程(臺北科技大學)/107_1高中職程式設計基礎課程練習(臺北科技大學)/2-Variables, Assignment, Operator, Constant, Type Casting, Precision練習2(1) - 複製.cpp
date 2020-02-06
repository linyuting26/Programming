#include <iostream>

int main(){
    int int_Result= 1000;
    int int_Var= 3;
    std::cout<< "經過複合減法" << int_Result-=int_Var cout<< int_Result<< std::endl;
    int_Result*=int_Var;
    std::cout<< int_Result<< std::endl;
    int_Result/=int_Var;
    std::cout<< int_Result<< std::endl;
    int_Result%=int_Var;
    std::cout<< int_Result<< std::endl;
    return 0;
}
