#include <iostream>
using namespace std;

int main(){
    int int_number=0;
    cin>>int_number;
    int int_array[int_number][int_number]={0};
    int int_reverse[int_number][int_number]={0};
    int counter=1;
    for(int cnt=0;cnt<int_number;cnt++){
        for(int cnt2=0;cnt2<int_number;cnt2++){
                int_array[cnt][cnt2]=counter;
                counter++;
            }
    }
    string str_msg="";
    cin>>str_msg;
    int length=str_msg.length();
    for(int cnt=0;cnt<length;cnt++){
        if(str_msg[cnt]=='H'){
            for(int cnt=0;cnt<int_number;cnt++){
                for(int cnt2=0;cnt2<int_number/2;cnt2++){
                    int temp=int_array[cnt][cnt2];
                    int_array[cnt][cnt2]=int_array[cnt][int_number-1-cnt2];
                    int_array[cnt][int_number-1-cnt2]=temp;
                }
            }
        }
        else if(str_msg[cnt]=='V'){
            for(int cnt=0;cnt<int_number;cnt++){
                for(int cnt2=0;cnt2<int_number/2;cnt2++){
                    int temp=int_array[cnt2][cnt];
                    int_array[cnt2][cnt]=int_array[int_number-1-cnt2][cnt];
                    int_array[int_number-1-cnt2][cnt]=temp;
                }
            }
        }
        else if(str_msg[cnt]=='D'){
            for(int cnt=0;cnt<int_number;cnt++){
                for(int cnt2=cnt+1;cnt2<int_number;cnt2++){
                    int temp=int_array[cnt][cnt2];
                    int_array[cnt][cnt2]=int_array[cnt2][cnt];
                    int_array[cnt2][cnt]=temp;
                }
            }
        }
    }
    for(int cnt=0;cnt<int_number;cnt++){
        for(int cnt2=0;cnt2<int_number;cnt2++){
            if(cnt2==(int_number-1)){
                cout<<int_array[cnt][cnt2]<<"\n";
            }
            else{
                cout<<int_array[cnt][cnt2]<<" ";
            }
        }
    }
    return 0;
}
