#include <iostream>

bool fn_IsDaffodil_number(int N);

int main()
{
    int M=0;
    int N=0;
    std::cin>> M >> N;
    for(int i=M;i<=N;i++)
        {
        if(fn_IsDaffodil_number(i)==true)
            {
            std::cout<<i<<"\n";
            }
        }
    return 0;
}

bool  fn_IsDaffodil_number(int N)
{
      int Ans=0;
      int i=0;
      int Temp1=N;
      int Temp2=N;
      while(Temp1!=0)
      {
          i++;
          Temp1/=10;
      }
      while(N!=0)
      {
          int x=N%10;
          int Total=1;
          for(int j=1;j<=i;j++)
          {
              Total*=x;
          }
          Ans+=Total;
          N/=10;
      }
      if(Ans==Temp2)
      {
        return true;
      }
      else
      {
        return false;
      }
}
