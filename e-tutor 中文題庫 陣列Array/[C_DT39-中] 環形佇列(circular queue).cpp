#include <iostream>
using namespace std;

int main(){
    int queue_size=0, int_number=0, int_value=0;
    int front_index=0, rear_index=0;
    cin>>queue_size;
    int int_array[queue_size]={};
    while(cin>>int_number){
        if(int_number==1){
            cin>>int_value;
            if((rear_index+1)%queue_size==front_index){
                cout<<"FULL\n";
            }
            else{
                int_array[rear_index]=int_value;
                rear_index=(rear_index+1)%queue_size;
            }
        }
        else if(int_number==0){
            if(front_index==rear_index){
                cout<<"EMPTY\n";
            }
            else{
                cout<<int_array[front_index]<<"\n";
                int_array[front_index]=0;
                front_index=(front_index+1)%queue_size;
            }
        }
        else if(int_number==-1){
            break;
        }
    }
    return 0;
}
