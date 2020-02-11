#include <iostream>

int  fn_GetSum(int N);
bool fn_IsPrime(int N);

int main(){
bool Prime = true;
int Number=0;
int int_Total = 0;
int i=2;
std::cin>>Number;
while(Number>0){
    if(fn_IsPrime(i)){
        Number--;
        int_Total+=i;//int_Total為總和，算要輸出的幾個數
        std::cout<<i<<",";
    }
    i++;
}
std::cout<<"\n";
std::cout<<int_Total<<std::endl;
return 0;
}

bool fn_IsPrime(int N){
    for(int i=2; i< N; i++)
    {
        if(N% i==0)
        {
            return false;
        }
    }
    return true;
}
int  fn_GetSum(int N){
int Sum = 0,Count = 0;//Count階層，Sum總和
int i = 2;//i判斷質數
while(Count < N){
    if (fn_IsPrime(i)==true){
      Sum+=i;
      Count++;
    }
    i++;
}
return Sum;
}
