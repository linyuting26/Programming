#include <iostream>
using namespace std;

int Get_frequence(int step);

int main(){
    int stairs=0, answer=0;
    cin>>stairs;
    answer=Get_frequence(stairs);
    cout<<answer<<"\n";
    return 0;
}

int Get_frequence(int step){
    if(step==1){
        return 1;
    }
    else if(step==2){
        return 2;
    }
    else{
        return Get_frequence(step-1)+Get_frequence(step-2);
    }
}
