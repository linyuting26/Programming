#include <iostream>

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
        {
            std::string str_Msg="";
            std::cin>>str_Msg;
            if(str_Msg[0]=='X')
                {
                    arr[i] =10;
                }
            else
                {
                    arr[i]=str_Msg[0]-'0';
                }
        }
    for(int i=1;i<10;i++)
        {
            arr[i]+=arr[i-1];
        }
    for(int i=1;i<10;i++)
        {
            arr[i]+=arr[i-1];
        }
    if(arr[9]%11==0)
        {
            std::cout<<"YES\n";
        }
    else
        {
            std::cout<<"NO\n";
        }
    return 0;
}
