#include <iostream>

int main(){
    int int_Floor = 0;
    std::cin>> int_Floor;
    for(int i=1;i<=int_Floor;i++){
        for(int j=1;j<i;j++){
            std::cout<< " ";
        }
        for(int j=i;j<=int_Floor;j++){
            std::cout<< "*";
        }
        std::cout<< "\n";
    }
    return 0;
}
