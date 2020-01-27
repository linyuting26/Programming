#include <iostream>
#include <vector>
using namespace std;

int JosephusHelper(int int_N,int int_K);
int Josephus(int int_N,int int_K);

int main()
{
    int int_N=0, int_K=0;
    cin>>int_N>>int_K;
    int number=Josephus(int_N, int_K);
    cout<<number<<"\n";
    return 0;
}

int JosephusHelper(int int_N,int int_K)
{
	if(int_N==1){
        return 0;  // if there is only one person his index is 0
	}
	else{
        return ((JosephusHelper(int_N-1,int_K)+int_K)%int_N);
	}
}

int Josephus(int int_N,int int_K)
{
    return 1+JosephusHelper(int_N,int_K);  //adding 1 to change indexing
}
