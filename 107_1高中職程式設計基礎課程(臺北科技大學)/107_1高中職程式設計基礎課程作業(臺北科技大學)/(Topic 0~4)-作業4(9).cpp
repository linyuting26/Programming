#include <iostream>

int main(){
    int int_Num;
    int int_enter;
    int int_Total=0;
    std::cin>>int_Num;
    for(int int_count=1;int_Num>=int_count;int_count++){
        std::cin>>int_enter;
        if(int_enter>=2&&int_enter%2==0){
            int_enter=int_enter/2;
        }
        else{
           int_enter*=-1;
        }
    int_Total=int_Total+int_enter;
    }
    std::cout<<int_Total<<std::endl;
    return 0;
}
