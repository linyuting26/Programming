#include <iostream>

int GetFibonacci_number(int N);

int main()
{
   int Number=-1;
   std::cin>>Number;//Number����J���@�����
   std::cout<<GetFibonacci_number(Number)<<std::endl;
   return 0;
}

int GetFibonacci_number(int N)
{
if(N==0)
    {
        return 0;
    }
else if(N==1||N==2)
    {
        return 1;
    }
else
    {
        return GetFibonacci_number(N-1)+GetFibonacci_number(N-2);
    }
}
/*
(1.)���j����z:
*1.*�N�禡�����Ѽƶi��P�_�A�åB�N�Ҧ����禡�ഫ���ȡA������������ȮɡAreturn�iint main
*2.*�w�q��ܮɥi�H�^�ǭ�(�bint main������X�A���A����void)�Ϊ̿�X(�bint main���I�s�禡�A���A��void)

(2.)���j����z(�H�W�z����STEP):
1.���]��J��Number=N��3�i�Jelse
2.return GetFibonacci_number(3-1)+GetFibonacci_number(3-2)�^�w�q���禡��
3.��GetFibonacci_number(3-1)�i�Jelse if�åBreturn 1�A+GetFibonacci_number(3-2)�i�Jelse if�åBreturn 1
4.�̫ᵲ�G��1+1�A�]�����N�Ҧ�����ܴ����ȡA�ҥHreturn �iint main ���A�åB��cout
*/
