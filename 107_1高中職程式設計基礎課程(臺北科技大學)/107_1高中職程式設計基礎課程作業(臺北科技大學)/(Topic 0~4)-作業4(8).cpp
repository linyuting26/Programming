#include <iostream>
int main() {
int h,t,u,i; //hundred(百位數),tens(十位數),units(個位數)
std::cin>>i;
u = i%10;
t = i/10%10;
h = i/100%10;
if(h*h*h+t*t*t+u*u*u==i){
    std::cout <<"YES"<<std::endl;
    }
else{
    std::cout<<"NO"<<std::endl;
    }
return 0;
}
