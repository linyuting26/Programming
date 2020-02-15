#include <iostream>

int GetFibonacci_number(int N);

int main()
{
   int Number=-1;
   std::cin>>Number;//Number為輸入的一正整數
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
(1.)遞迴的原理:
*1.*將函式內的參數進行判斷，並且將所有的函式轉換為值，直到全部都為值時，return進int main
*2.*定義函示時可以回傳值(在int main內做輸出，型態不為void)或者輸出(在int main內呼叫函式，型態為void)

(2.)遞迴的原理(以上述為例STEP):
1.假設輸入的Number=N為3進入else
2.return GetFibonacci_number(3-1)+GetFibonacci_number(3-2)回定義的函式中
3.當GetFibonacci_number(3-1)進入else if並且return 1，+GetFibonacci_number(3-2)進入else if並且return 1
4.最後結果為1+1，因為都將所有的函示換為值，所以return 進int main 內，並且做cout
*/
