#include <iostream>
using namespace std;

int main(){
    int int_n=0;
    cin>>int_n;
    string str_name;
    int clever;
    int diligent;
    for(int cnt=0;cnt<int_n;cnt++){
        cin>>str_name>>clever>>diligent;
        if(clever==1){
            if(diligent==3){
                cout<<str_name<<" Staff\n";
            }
            else if(diligent==4){
                cout<<str_name<<" General\n";
            }
        }
        else if(clever==2){
            if(diligent==3){
                cout<<str_name<<" execute by shooting\n";
            }
            else if(diligent==4){
                cout<<str_name<<" Soldier\n";
            }
        }
    }
    return 0;
}
