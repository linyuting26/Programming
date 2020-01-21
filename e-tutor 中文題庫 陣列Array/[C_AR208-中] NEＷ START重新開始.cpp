#include <iostream>
using namespace std;

int main(){
    int int_N=0;
    cin>>int_N;
    char char_array[int_N];
    for(int cnt=0;cnt<int_N;cnt++){
        cin>>char_array[cnt];
        if(char_array[cnt]=='N'){
            cout<<"N: Nutrition\n";
        }
        else if(char_array[cnt]=='E'){
            cout<<"E: Exercise\n";
        }
        else if(char_array[cnt]=='W'){
            cout<<"W: Water\n";
        }
        else if(char_array[cnt]=='S'){
            cout<<"S: Sun\n";
        }
        else if(char_array[cnt]=='T'){
            cout<<"T: Temper\n";
        }
        else if(char_array[cnt]=='A'){
            cout<<"A: Air\n";
        }
        else if(char_array[cnt]=='R'){
            cout<<"R: Rest\n";
        }
        else if(char_array[cnt]=='t'){
            cout<<"t: trust\n";
        }
    }
}
