#include <iostream>

int main(){
    for(int A=1;A<=9;A++){
        for(int B=1;B<=9;B++){
            if(B%3>0){
                std::cout<<A<<"*"<<B<<"="<<A*B<<",\t";
            }
            else{
                std::cout<<A<<"*"<<B<<"="<<A*B<<std::endl;
}
         }
            std::cout<<std::endl;
         }
return 0;
}
