#include <iostream>

int fn_GetRecurSum(int int_Num);

int main()
{
    int int_Val=10;
    std::cout<<"Results are"<<fn_GetRecurSum(int_Val);
    return 0;
}

int fn_GetRecurSum(int int_Num)
{
    if(int_Num<=0)
    {
        return 0;
    }
    else
    {
        return fn_GetRecurSum(int_Num-1)+int_Num;
    }
}
