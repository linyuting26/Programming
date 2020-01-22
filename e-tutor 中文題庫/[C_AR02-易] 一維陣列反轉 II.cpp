#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int ary[6];
    for(int cnt=0;cnt<6;cnt++)
    {
        cin>>ary[cnt];
    }
    for(int cnt=5;cnt>=0;cnt--)
    {
        if(cnt==0)
        {
            cout<<ary[cnt]<<endl;
        }
        else
        {
            cout<<ary[cnt]<<" ";
        }
    }
    return 0;
}
