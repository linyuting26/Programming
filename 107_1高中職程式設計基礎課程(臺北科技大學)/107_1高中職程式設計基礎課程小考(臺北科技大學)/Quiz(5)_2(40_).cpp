#include <iostream>

int main(){
    int int_MaxValue=-1;
    int int_WordSize=-1;
    int int_LeCount[26]={};
    std::cin>> int_WordSize;
    std::string strarr_Set[int_WordSize];
    for(int int_Ct=0; int_Ct< int_WordSize; int_Ct++){
        std::cin>>strarr_Set[int_Ct];
    }
    for(int int_Ct=0; int_Ct< int_WordSize; int_Ct++){
        for(int int_Ct2=0; int_Ct2< strarr_Set[int_Ct].length(); int_Ct2++){
            char chr_Letter= (strarr_Set[int_Ct])[int_Ct2];
            //a-z
            int int_Index= static_cast<int>(chr_Letter)-static_cast<int>('a');
            int_LeCount[int_Index]+=1;
            if(int_LeCount[int_Index]>int_MaxValue){
                int_MaxValue= int_LeCount[int_Index];
            }
        }
    }

    for(int int_Ct=0; int_Ct< int_WordSize; int_Ct++){
        for(int int_Ct2=strarr_Set[int_Ct].length()-1; int_Ct2>=0; int_Ct2--){
            char chr_Letter= (strarr_Set[int_Ct])[int_Ct2];
            int int_Index= static_cast<int>(chr_Letter)-static_cast<int>('a');
            if(int_LeCount[int_Index]==int_MaxValue){
                continue;
            }
            else{
                std::cout<< chr_Letter;
            }
        }
        if(int_Ct!=int_WordSize-1){
            std::cout<<" ";
        }
    }
    std::cout<< "\n";
    return 0;
}
