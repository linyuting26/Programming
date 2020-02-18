#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str_msg="";
    cin.tie(0), ios_base::sync_with_stdio(false);
    while(cin>>str_msg){
        if(str_msg=="#"){
            break;
        }
        if(next_permutation(str_msg.begin(), str_msg.end())==true){
            cout<<str_msg<<"\n";
        }
        else{
            cout<<"No Successor\n";
        }
    }
	return 0;
}
