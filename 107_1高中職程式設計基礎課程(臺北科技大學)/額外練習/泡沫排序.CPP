#include  <iostream>

int  main()
{
    int N=0;
    std::cin>>N;
    int arr[N-1];
    int temp;
    for(int i=0;i<N;i++)
        {
            std::cin>>arr[i];
        }
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N;j++)
        {
            if(arr[i]>arr[j+1])
            {
                temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        if(i==(N-1))
        {
            std::cout<<arr[i];
        }
        else
        {
           std::cout<<arr[i]<<" ";
        }
    }
    return  0;
}
