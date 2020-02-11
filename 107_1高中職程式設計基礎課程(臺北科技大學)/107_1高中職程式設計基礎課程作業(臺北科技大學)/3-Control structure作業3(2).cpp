#include <iostream>

int main(){
    int int_x=-0;
    std::cin>>int_x;
    if(int_x==1){
        std::cout<< "APPLE" << std::endl;
    }
    else if(int_x==2){
        std::cout<< "BANANA" << std::endl;
    }
    else
        std::cout<<"OTHERS" << std::endl;
    return 0;
}
