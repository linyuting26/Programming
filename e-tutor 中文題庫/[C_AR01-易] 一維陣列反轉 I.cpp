#include <iostream>

using namespace std;

int main()
{
    int ary[105];
    int number=0;
    int counter=0;
    while(cin>>number)
    {
        ary[counter]=number;
        counter++;
    }
    int answer[counter];
    for(int cnt=0;cnt<counter;cnt++)
    {
        answer[cnt]=ary[cnt];
    }
    for(int cnt=counter-1;cnt>=0;cnt--)
    {
        if(cnt==0)
        {
            cout<<answer[cnt]<<endl;
        }
        else
        {
            cout<<answer[cnt]<<" ";
        }
    }
    return 0;
}
