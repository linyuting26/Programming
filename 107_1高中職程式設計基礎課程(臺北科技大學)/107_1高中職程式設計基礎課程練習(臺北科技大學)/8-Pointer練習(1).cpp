#include <iostream>

int main(){
    int int_Num=-100;
    int* intptr_Num;
    intptr_Num=&int_Num;
    std::cout<<&int_Num<<"\n";
    std::cout<<intptr_Num<<"\n";
    std::cout<<&intptr_Num<<"\n";
    std::cout<<*intptr_Num<<"\n";

    std::cout<<"Pointer to int_Num2"<<"\n";

    int int_Num2=700;
    intptr_Num=&int_Num2;
    std::cout<<&int_Num2<<"\n";
    std::cout<<intptr_Num<<"\n";
    std::cout<<&intptr_Num<<"\n";
    std::cout<<*intptr_Num<<"\n";
    return 0;
}




