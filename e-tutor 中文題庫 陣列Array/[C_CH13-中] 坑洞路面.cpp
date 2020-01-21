#include <iostream>
using namespace std;

int main(){
    int int_number=0;
    cin>>int_number;
    int int_subject[int_number]={0};
    int variable=0;
    for(int cnt=0;cnt<int_number;cnt++){
        cin>>int_subject[cnt];
        if(int_subject[cnt]>variable){
            variable=int_subject[cnt];
        }
    }
    int int_array[variable][int_number]={0};
    for(int cnt=0;cnt<variable;cnt++){
        for(int cnt2=0;cnt2<int_number;cnt2++){
            int_array[cnt][cnt2]=0;
        }
    }
    for(int cnt=0;cnt<int_number;cnt++){
        for(int cnt2=variable-1;cnt2>(variable-int_subject[cnt]-1);cnt2--){
            int_array[cnt2][cnt]=1;
        }
    }
    int max_number=int_subject[0];
    for(int cnt=0;cnt<int_number;cnt++){
        if(int_subject[cnt]>max_number){
            max_number=int_subject[cnt];
            for(int cnt2=cnt-1;cnt2>=0;cnt2--){
                int_array[variable-max_number][cnt2]=1;
            }
        }
    }
    int total=0;
    for(int cnt=0;cnt<variable;cnt++){
        for(int cnt2=0;cnt2<int_number;cnt2++){
            if(int_array[cnt][cnt2]==0){
                total++;
            }
        }
    }
    cout<<total<<"\n";
    return 0;
}
