#include <iostream>
#include "fn_GetSum.h"
extern  fn_GetSum();

int main(){
    int int_Var= 10,int_Var2= -5;
    fn_GetSum(10, -5);
    std::cout<<fn_GetSum()<<std::endl;
    return 0;
}
