#include <iostream>
using namespace std;

int main(){
    int int_m=0;
    cin>>int_m;
    int int_array[int_m]={0};
    long long int total=0;
    for(int cnt=0;cnt<int_m;cnt++){
        cin>>int_array[cnt];
        total+=int_array[cnt];
    }
    if(total%2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
