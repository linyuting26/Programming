#include <iostream>

int main(){
    int x=0;//int x為欲購買的票價
    std::cin>>x;
    std::cout<<"NT10="<<x/10<<std::endl;
    x=x%10;
    std::cout<<"NT5="<<x/5<<std::endl;
    x=x%5;
    std::cout<<"NT1="<<x/1<<std::endl;
    return 0;
}
