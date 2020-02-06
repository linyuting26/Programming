#include <iostream>

int main(){
    int int_NumberOfLanguages=-1;

    std::cout << "Hello reader.\n"
    <<"Welcome to C++.\n";

    std::cout<<"How many languages have you used?";

    std::cin>> int_NumberOfLanguages;

    if(int_NumberOfLanguages< 1){
        std::cout<< "You may prefer\n"
        <<"a more elementary book the same author.\n";
    }
    else{
        std::cout << "Enjoy the book.\n";
    }
    return 0;
}
