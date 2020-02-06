#include <iostream>

int main(){
    int int_X= 10;
    int int_Y= -1;
    if(int_X>10&&int_Y++){
        int_X= 10;
    }
    std::cout<< "使用&&且前面條件為false而int_Y="<<int_Y<< std::endl;

    if(int_X>0&&int_Y++){
        int_X= 10;
    }
    std::cout<< "使用&&且前面條件為true而int_Y="<<int_Y<< std::endl;

    int_X= 10;
    int_Y= -1;
    if(int_X>0||int_Y++){
        int_X= 10;
    }
    std::cout<< "使用||且前面條件為true而int_Y="<<int_Y<< std::endl;

    int_X= 10;
    int_Y= -1;
    if(int_X>10||int_Y++){
        int_X= 10;
    }
    std::cout<< "使用||且前面條件為false而int_Y="<<int_Y<< std::endl;
    return 0;
}
