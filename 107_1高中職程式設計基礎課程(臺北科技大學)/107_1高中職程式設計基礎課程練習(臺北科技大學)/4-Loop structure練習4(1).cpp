#include <iostream>

int main(){
    int int_Count=0;
    while(int_Count<10 && (int_Count+3)< 8){
        std::cout<<"int_Count=" << int_Count << "\n";
        int_Count=int_Count+2;
    }
    return 0;
}
