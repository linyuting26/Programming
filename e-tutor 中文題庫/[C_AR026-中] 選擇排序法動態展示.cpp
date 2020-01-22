#include<iostream>
using namespace std;

int main()
{
    int int_ary[100];
    int ary_clone[100];
    int counter=0;
    while(cin>>int_ary[counter])
    {
        counter++;
    }
    for(int cnt=0;cnt<counter;cnt++)
    {
        if(cnt==0)
        {
            cout<<int_ary[cnt];
        }
        else
        {
            cout<<","<<int_ary[cnt];
        }
        ary_clone[cnt]=int_ary[cnt];
    }
    cout<<"\n";
    for(int cnt=0;cnt<counter-1;cnt++)
    {
        int int_max=cnt;
        for(int cnt2=cnt+1;cnt2<counter;cnt2++)
        {
            if(int_ary[int_max]<int_ary[cnt2])
            {
                int_max=cnt2;
            }
        }
        int int_temp=int_ary[int_max];
        int_ary[int_max]=int_ary[cnt];
        int_ary[cnt]=int_temp;
        int number=0;
        int flag=0;
        for(int cnt=0;cnt<counter;cnt++)
        {
            if(ary_clone[cnt]==int_ary[cnt])
            {
                number++;
                if(number==counter)
                {
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            for(int cnt=0;cnt<counter;cnt++)
            {
                if(cnt==0)
                {
                    cout<<int_ary[cnt];
                }
                else
                {
                    cout<<","<<int_ary[cnt];
                }
                ary_clone[cnt]=int_ary[cnt];
            }
            cout <<"\n";
        }
    }
    return 0;
}
