#include <iostream>

int fn_Getlcm(int int_Var1,int int_Var2);

int main(){
    int a;
    int b;
    std::cin >> a>>b;
    std::cout<<a*b/fn_Getlcm(a,b) << std::endl;
    return 0;
}

int fn_Getlcm(int int_Var1,int int_Var2){
    int int_LargeNum=-1,int_SmallNum=-1;
    if(int_Var1>=int_Var2){
       int_LargeNum=int_Var1;
       int_SmallNum=int_Var2;
    }
    else{
       int_LargeNum=int_Var2;
       int_SmallNum=int_Var1;
    }
    if(int_LargeNum%int_SmallNum==0){
       return int_SmallNum;
    }
    else{
         return fn_Getlcm(int_SmallNum,(int_LargeNum%int_SmallNum));
    }
}


