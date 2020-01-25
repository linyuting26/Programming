#include <iostream>
#include <algorithm>
using namespace std;
int cut_rod(int* intptr,int int_N);

int main(){
    int int_N=0;
    cin>>int_N;
    int price_array[int_N]={0};
    for(int cnt=0;cnt<int_N;cnt++)
    {
        cin>>price_array[cnt];
    }
    int* intptr=reinterpret_cast<int*>(price_array);
    int sum=cut_rod(intptr,int_N);
    cout<<sum<<"\n";
    return 0;
}

int cut_rod(int* intptr,int int_N)
{
    int int_result[int_N+1]={0};
    for(int cnt=1;cnt<=int_N;cnt++)
    {
        for(int cnt2=0;cnt2<cnt;cnt2++)
        {
            int_result[cnt]=max(int_result[cnt],*(intptr+cnt2)+int_result[cnt-(cnt2+1)]);
        }
    }
    return int_result[int_N];
}
