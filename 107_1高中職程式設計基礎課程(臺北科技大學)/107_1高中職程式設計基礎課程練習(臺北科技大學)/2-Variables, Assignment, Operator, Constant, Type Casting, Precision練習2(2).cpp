#include <iostream>

int main(){
    int int_Result= 1000;
    int int_Var= 3;
    int_Result-=int_Var;
    std::cout << "經過複合減法" << int_Result << std::endl;
    int_Result*=int_Var;
    std::cout << "再經過複合乘法" << int_Result << std::endl;
    int_Result/=int_Var;
    std::cout << "再經過複合除法" << int_Result << std::endl;
    int_Result%=int_Var;
    std::cout << "再經過複合取餘數" << int_Result << std::endl;
    return 0;
}
