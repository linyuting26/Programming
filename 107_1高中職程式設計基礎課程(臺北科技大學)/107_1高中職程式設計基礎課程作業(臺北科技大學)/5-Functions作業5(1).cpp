#include <iostream>

bool fn_IsPerfect(int N);//N���Q����

int main(){
    int Number = 0;//Number���ϥΪ̿�J�����
    std::cout<< "Enter a number:";
    std::cin>> Number;
    std::cout<< Number << " is ";
    if(fn_IsPerfect(Number)) std::cout<< "perfect.\n";
    else std::cout<< "not perfect.\n";

    return 0;
}

bool fn_IsPerfect(int N){
     int int_Sum = 0;//Sum���`�M
     if(N<1) return false;
     else{
         for(int i=2;i<=N;i++){//i������
            if(N%i==0){
                int_Sum=int_Sum+(N/i);
            }
         }
       if(N==int_Sum){
        return true;
       }
       else{
        return false;
       }
    }
}
//�����ƩҦ����]�Ƭۥ[�|����Ӽƪ��⭿
