#include <iostream>
using namespace std;

int main()
{
    int number=0;
    cin>>number;
    int int_array[number];
    int cnt=1;
    for(int int_ct=0;int_ct<number;int_ct++)
    {
        int_array[int_ct]=cnt;
        cnt++;
    }
    int int_count=0;
    int tempcount=0;
    for(int int_ct=0;int_ct<number;int_ct++)
    {
        if(int_array[int_ct]!=-1)
        {
            int_count++;
            if(int_count==5)
            {
                if(tempcount==(number-1))
                {
                    cout<<int_array[int_ct]<<endl;
                    return 0;
                }
                int_array[int_ct]=-1;
                tempcount++;
                int_count=0;
            }
            if(int_ct==(number-1))
            {
                int_ct=-1;
            }
        }
        if(int_array[int_ct]==-1&&int_ct==(number-1))
        {
            int_ct=-1;
        }
    }
    return 0;
}
