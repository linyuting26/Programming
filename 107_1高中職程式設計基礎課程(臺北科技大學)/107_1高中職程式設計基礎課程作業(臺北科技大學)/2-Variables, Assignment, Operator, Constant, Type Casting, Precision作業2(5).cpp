#include <iostream>

int main(){
    char chr_char =0;
    float x =0;
    float y =0;
    float z =0;
    std::cin >> chr_char ;
    std::cin >> x ;
    std::cin >> y ;
    std::cin >> z ;
    std::cout<<"Name:"<<chr_char<< std::endl;
    std::cout<<"Total:"<<x+y+z<< std::endl;
    std::cout<<"Average:"<<(x+y+z)/3<<std::endl;
    return 0;
}
