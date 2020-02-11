#include <iostream>

int main(){
    int int_x;
    int int_y;
    std::cin>>int_x;
    for(int x=2;int_x>=2;++int_x){
        for(int_y=0;int_y<int_x;++int_y){
            if(int_x=2){
                std::cout<<"YES"<<std::endl;
            }
            else if(int_x==int_y+1){
                std::cout<<"YES"<<std::endl;
            }
            else if(int_x%int_y==0){
                std::cout<<"NO"<<std::endl;
            }
            else{
                std::cout<<"NO"<<std::endl;
            }
        }
    }
    return 0;
}
