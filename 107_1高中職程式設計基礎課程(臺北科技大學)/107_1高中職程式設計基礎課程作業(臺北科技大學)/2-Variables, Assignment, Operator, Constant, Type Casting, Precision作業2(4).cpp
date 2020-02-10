#include <iostream>

int main(){
    int x =50;
    float y =3.0f;
    std::cin << x << std::endl;
    std::cin << y << std::endl;
    std::cout <<"Sum:"<< x+(int)y << std::endl;
    std::cout <<"Difference:"<< x-(int)y << std::endl;
    std::cout <<"Product:"<< x*(int)y << std::endl;
    std::cout <<"Quotient:"<<(float)x%y << "\n";
    return 0;
}
