#include <iostream>
#include <cmath>

int main()
{
    int arr[3];
    std::cin>>arr[0]>>arr[1]>>arr[2];
    for(int i=3;i>0;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    std::cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<std::endl;
    if(arr[0]+arr[1]<=arr[2])
    {
        std::cout<<"No"<<std::endl;
    }
    else if(pow(arr[0],2)+pow(arr[1],2)<pow(arr[2],2))
    {
        std::cout<<"Obtuse"<<std::endl;
    }
    else if(pow(arr[0],2)+pow(arr[1],2)==pow(arr[2],2))
    {
        std::cout<<"Right"<<std::endl;
    }
    else if(pow(arr[0],2)+pow(arr[1],2)>pow(arr[2],2))
    {
        std::cout<<"Acute"<<std::endl;
    }
    return 0;
}
