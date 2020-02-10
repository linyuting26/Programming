#include <iostream>

int main(){
    float flt_Result= 1000.0f;
    float Original_Value=3.1415926f;
    std::cout<< "Original Value=3.1415926"<<std::endl;
    (int) Original_Value*flt_Result/1000;
    std::cout<< "Result="<< (float)((int)(Original_Value*flt_Result))/flt_Result << std::endl;

    return 0;
}
