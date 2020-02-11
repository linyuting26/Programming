#include <iostream>

bool fn_IsPerfect(int N);//N砆埃计

int main(){
    int Number = 0;//Numberㄏノ块俱计
    std::cout<< "Enter a number:";
    std::cin>> Number;
    std::cout<< Number << " is ";
    if(fn_IsPerfect(Number)) std::cout<< "perfect.\n";
    else std::cout<< "not perfect.\n";

    return 0;
}

bool fn_IsPerfect(int N){
     int int_Sum = 0;//Sum羆㎝
     if(N<1) return false;
     else{
         for(int i=2;i<=N;i++){//i埃计
            if(N%i==0){
                int_Sum=int_Sum+(N/i);
            }
         }
       if(N==int_Sum){
        return true;
       }
       else{
        return false;
       }
    }
}
//Ч计┮Τ计穦单赣计ㄢ
