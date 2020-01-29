#include "fn_GetSum.h"

void fn_GetSum(int int_x,int int_y){
     std::cout<< (int_x+int_y)<<std::endl;
     int int_Result=fn_GetSumR(int_x,int_y);
     std::cout<<"The sum from fn_GetSum calling fn_GetSumR "
     << int_Result<<std::endl;
}
