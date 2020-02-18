#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str_msg="GEEKSFORGEEKS";
    sort(str_msg.begin(), str_msg.end());
    int number=0;
    cin>>number;
    long long int counter=1;
    while(next_permutation(str_msg.begin(), str_msg.end())){
        counter++;
        if(counter==number){
            break;
        }
    }
    cout<<str_msg<<"\n";
	return 0;
}
