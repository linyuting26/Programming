#include <iostream>
int main() {
int h,t,u,i; //hundred(�ʦ��),tens(�Q���),units(�Ӧ��)
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
