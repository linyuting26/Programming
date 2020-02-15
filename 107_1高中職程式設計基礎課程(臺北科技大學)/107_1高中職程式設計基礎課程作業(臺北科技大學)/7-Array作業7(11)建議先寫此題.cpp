#include <iostream>
#include <vector>

int main()
{
    int Num=0;
    int count=0;
    std::cin >> Num;
    int arr[Num];
    std::vector <int> Var;
    for (int i =0;Num>i;i++)
    {
        std::cin >> arr[i];
    }
    for (int i =0;Num>i;i++)
    {
        for(int j =1;Num>=j;j++)
        {
            if (arr[count]!=arr[count+j])
            {
                Var.push_back(arr[count]);
                count+=j;
                break;
            }
            else if (count+j==Num)
            {
                Var.push_back(arr[count]);
                count+=j;
                break;
            }
        }
        if (count==Num)
        {
            break;
        }
    }
    for (int i =0;Var.size()>i;i+=2)
    {
        if (Var.size()-i>2)
        {
        std::cout << Var[i] << " ";
        }
        else
        {
        std::cout << Var[i] << std::endl;
        }
    }
    return 0;
}
