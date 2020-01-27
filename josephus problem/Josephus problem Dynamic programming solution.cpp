#include <iostream>
#include <vector>
using namespace std;

int Josephus(int int_N,int int_K);

int main()
{
    int int_N=0, int_K=0;
    cin>>int_N>>int_K;
    int number=Josephus(int_N, int_K);
    cout<<number<<"\n";
    return 0;
}

int Josephus(int int_N,int int_K)
{
    int result=0; //for int_N=1
    for(int cnt=2;cnt<=int_N;cnt++)
    {
        result=(int_K+result)%cnt;
    }
    return (result+1);  //adding 1 to change indexing;
}
