#include <iostream>

int fn_Getlcm(int x,int y);
int fn_Getgcd(int x,int y);

int main()
{
int x=0;
int y ;
std::cin>>x;
std::cout << x <<","<< x <<std::endl;
y = x;
while(x!=1)
    {
    if(x%2==0)
        {
        x/=2;
        std::cout<<x<<","<<fn_Getlcm(x,y)<<std::endl;
        }
    else
        {
        x=x*3+1;
        std::cout<<x<<","<<fn_Getlcm(x,y)<<std::endl;
        }
    }
}

int fn_Getgcd(int x,int y)
{
int int_LargeNum=-1,int_SmallNum=-1;
    if(x>=y)
    {
       int_LargeNum=x;
       int_SmallNum=y;
    }
    else
    {
       int_LargeNum=y;
       int_SmallNum=x;
    }
    if(int_LargeNum%int_SmallNum==0)
    {
       return int_SmallNum;
    }
    else
    {
         return fn_Getgcd(int_SmallNum,(int_LargeNum%int_SmallNum));
    }
}

int fn_Getlcm(int x,int y)
{
    return (x*y/(fn_Getgcd(x,y)));
}
