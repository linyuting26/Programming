#include <iostream>
using namespace std;

int main(){
    int number=0, answer=0;
    cin>>number;
    int weight_array[21474836]={};
    for(int cnt=0;cnt<number;cnt++){
        int weight=0, object=0;
        cin>>weight>>object;
        for(int cnt2=0;cnt2<weight;cnt2++){
            int element=0;
            cin>>element;
            weight_array[element]=element;
        }
        int object_array[object]={};
        for(int cnt3=0;cnt3<object;cnt3++){
            cin>>object_array[cnt3];
        }

    }
    return 0;
}
