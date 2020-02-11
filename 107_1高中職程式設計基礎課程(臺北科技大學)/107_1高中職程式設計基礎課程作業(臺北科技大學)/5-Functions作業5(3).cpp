#include <iostream>

bool fn_GetDaffodil_number(int A);
     int h,t,u,i; //hundred(百位數),tens(十位數),units(個位數)
     int M,N,A=0;

int main(){
    std::cin>> M >> N;
    for(int i=M;i<=N;i++)
        {
        if(fn_GetDaffodil_number(i)==true)
            {
            std::cout<<i<<"\n";
            }
        }
    return 0;
}

bool  fn_GetDaffodil_number(int A)
{
      int total=0;
      for(A=1;A<=10000000;A++)
   {
      u = A%10;
      t = A/10%10;
      h = A/100%10;
      if(h*h*h+t*t*t+u*u*u==A)
        {
        return true;
        }
      else{
        return false;
      }
   }
   total+=A;
}
