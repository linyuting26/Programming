#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int int_i=0;
    int int_j=0;
    while(cin>>int_i>>int_j){
        int temp_i=int_i;
        int temp_j=int_j;
        if(int_i>int_j){
            swap(int_i,int_j);
        }
        int Max_number=0;
        int number=0;
        for(int cnt=int_i;cnt<int_j;cnt++){
            int total=1;
            number=cnt;
            while(number!=1){
                if(number%2==0){
                    number=number/2;
                    total++;
                }
                else if(number%2==1){
                    number=(3*number)+1;
                    total++;
                }
            }
            if(total>Max_number){
                Max_number=total;
            }
        }
        cout<<temp_i<<" "<<temp_j<<" "<<Max_number<<"\n";
    }
    return 0;
}
