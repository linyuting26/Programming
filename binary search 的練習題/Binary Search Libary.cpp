#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int int_n=0, value=1;
    cin>>int_n;
    int int_array[int_n]={};
    for(int cnt=0;cnt<int_n;cnt++){
        cin>>int_array[cnt];
    }
    sort(int_array, int_array+int_n);
    if(binary_search(int_array, int_array+int_n, value)){
        cout<<value<<" is found\n";
    }
    else{
        cout<<"not found\n";
    }
    return 0;
}
