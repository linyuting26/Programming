#include <iostream>

int fn_Getgcd(int a,int b);

int main(){
   int a,b;
   std::cin>>a>>b;
   std::cout<<a/fn_Getgcd(a,b)<<" "<< b/fn_Getgcd(a,b)<<std::endl;
   return 0;
}

int fn_Getgcd(int a,int b)
{
    int int_LargeNum=-1,int_SmallNum=-1;
    if(a>=b){
       int_LargeNum=a;
       int_SmallNum=b;
    }
    else{
       int_LargeNum=b;
       int_SmallNum=a;
    }
    if(int_LargeNum%int_SmallNum==0){
       return int_SmallNum;
    }
    else{
         return fn_Getgcd(int_SmallNum,(int_LargeNum%int_SmallNum));
    }
}
