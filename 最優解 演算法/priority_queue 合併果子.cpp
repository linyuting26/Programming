#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int number=0, answer=0;
    cin>>number;
    priority_queue <int, vector<int>, greater<int>> obj_priority_queue;
    for(int cnt=0;cnt<number;cnt++){
        int element=0;
        cin>>element;
        obj_priority_queue.push(element);
    }
    if(obj_priority_queue.size()==0){
        cout<<obj_priority_queue.top()<<"\n";
    }
    else{
        while(obj_priority_queue.size()>1){
            int temp1=obj_priority_queue.top();
            obj_priority_queue.pop();
            int temp2=obj_priority_queue.top();;
            obj_priority_queue.pop();
            obj_priority_queue.push(temp1+temp2);
            answer+=temp1+temp2;
        }
        cout<<answer<<"\n";
    }
    return 0;
}
