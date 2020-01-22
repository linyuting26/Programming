#include <iostream>
#include <cmath>
#include <cctype>

int main(){
    char chr_Seten[255]={};
    int int_Len=0;
    std::fill(chr_Seten,chr_Seten+255,'\0');
    std::cin.getline(chr_Seten, 255);
    for(int int_Ct=0; int_Ct< 255 ; int_Ct++){
        if(isdigit(chr_Seten[int_Ct]))
        {
            return 0;
        }
        if(chr_Seten[int_Ct]=='\0'){
            int_Len= int_Ct;
            break;
        }
    }
    int int_Len2=static_cast<int>(std::ceil(
                               std::sqrt(
                                         static_cast<double>(int_Len)
                                         )
                               )
                            );
    char chr_2DC[int_Len2][int_Len2]={};
    //Add space char
    for(int int_Ct=0; int_Ct<int_Len2; int_Ct++){
        for(int int_Ct2=0; int_Ct2<int_Len2; int_Ct2++){
            chr_2DC[int_Ct][int_Ct2]=' ';
        }
    }
    char* chrptr_1DC=reinterpret_cast<char*>(chr_2DC);
    for(int int_Ct=0; int_Ct< int_Len; int_Ct++){
        *(chrptr_1DC+int_Ct)=chr_Seten[int_Ct];
    }

    for(int int_Ct=0; int_Ct<int_Len2; int_Ct++){
        for(int int_Ct2=0; int_Ct2<int_Len2; int_Ct2++){
            std::cout<< chr_2DC[int_Ct2][int_Ct];
        }
    }
	std::cout<<"\n";
    return 0;
}
