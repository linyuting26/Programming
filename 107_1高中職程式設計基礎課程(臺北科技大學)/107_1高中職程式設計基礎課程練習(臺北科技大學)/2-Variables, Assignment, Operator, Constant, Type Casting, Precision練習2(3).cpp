#include <iostream>

int main(){
    int int_Var = 0;
    int_Var++;
    std::cout<< int_Var <<std::endl;

    ++int_Var;
    std::cout<< int_Var <<std::endl;

    int_Var=++(++int_Var);
    std::cout<< int_Var <<std::endl;

    return 0;
}
