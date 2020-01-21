#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double double_array[7]={};
    double double_profit=-1.0;
    int min_index=0;
    int max_index=0;
    for(int cnt=0;cnt<7;cnt++){
        cin>>double_array[cnt];
    }
    for(int cnt=0;cnt<6;cnt++){
        for(int cnt2=cnt+1;cnt2<7;cnt2++){
            if(double_array[cnt2]-double_array[cnt]>=double_profit){
                double_profit=double_array[cnt2]-double_array[cnt];
                min_index=cnt;
                max_index=cnt2;
            }
        }
    }
    if(double_profit<=0){
        cout<<"No profit!\n";
    }
    else{
        cout<<"Best buy date:"<<(min_index+1)<<"\n"
            <<"Best sell date:"<<(max_index+1)<<"\n"
            <<"Profit:"<<fixed<<setprecision(2)<<double_profit<<"\n";
    }
    return 0;
}
