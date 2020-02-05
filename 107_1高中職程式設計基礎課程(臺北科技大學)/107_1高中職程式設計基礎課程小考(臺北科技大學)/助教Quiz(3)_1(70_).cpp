#include <iostream>

int main()
{
    int number=0;
    std::cin>>number;
    for(int i=1;i<=number;i++)
        {
            int arr[3][3];
            for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                        {
                            std::cin>>arr[i][j];
                        }
                }
        }
    bool correct=false;
    if(arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2])
        {
            correct=true;
        }
    else if(arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2])
        {
            correct=true;
        }
    if(correct==true)
        {
            std::cout<<"True\n";
        }
    else
        {
            std::cout<<"False\n";
        }
    return 0;
}
