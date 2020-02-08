#include <iostream>

bool fn_IsPrime(int N);

int main(){
    int Number = 0;
    std::cout<< "Enter a number:";
    std::cin>> Number;
    std::cout<< Number << " is ";
    if(fn_IsPrime(Number)) std::cout<< "prime.\n";
    else std::cout<< "not prime.\n";

    return 0;
}

bool fn_IsPrime(int N){
     if(N<=1) return false;
     else if(N==2) return true;
     else if(N%2==0) return false;
     else{
         for(int i=3;i<N;i+=2){
             if(N%i==0) return false;
         }
         return true;
      }
}

