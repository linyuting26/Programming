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
        int_Total+=i;//int_Total�鿂�ͣ���Ҫݔ���Ďׂ���
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
int Sum = 0,Count = 0;//Count�A�ӣ�Sum����
int i = 2;//i�Д��|��
while(Count < N){
    if (fn_IsPrime(i)==true){
      Sum+=i;
      Count++;
    }
    i++;
}
return Sum;
}
