#include <iostream>

int main(){
    int int_year=0;
    std::cout<<"Enter the year(year >0):";
    std::cin>>int_year;
    if(int_year<0){
        std::cout<< "The year you enter is less equal than 0." << std::endl;
    }
    else if((int_year%4==0)&&(int_year%100!=0)||(int_year%400==0)){
        std::cout<<int_year<< " is a leap year" << std::endl;
    }
    else
        std::cout<<int_year<<" is not a leap year" << std::endl;
    return 0;
}
