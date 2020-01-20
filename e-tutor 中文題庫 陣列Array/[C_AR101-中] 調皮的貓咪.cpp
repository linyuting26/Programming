#include <iostream>
using namespace std;
void Fn_Get_Space(int int_Cat_x, int int_Cat_y, int* int_basic_array, int& int_Step, int length);

int main(){
    int int_T=0;
    cin>>int_T;
    for(int cnt=0;cnt<int_T;cnt++){
        int int_N=0;
        int int_K=0;
        cin>>int_N>>int_K;
        int int_basic_array[int_N][int_N]={0};
        int int_block_array[int_K][2]={0};
        for(int cnt2=0;cnt2<int_K;cnt2++){
            for(int cnt3=0;cnt3<2;cnt3++){
                cin>>int_block_array[cnt2][cnt3];
            }
        }
        int int_Cat_x=0;
        int int_Cat_y=0;
        cin>>int_Cat_x>>int_Cat_y;
        for(int cnt2=0;cnt2<int_N;cnt2++){
            for(int cnt3=0;cnt3<int_N;cnt3++){
                int_basic_array[cnt2][cnt3]=0;
            }
        }
        for(int cnt2=0;cnt2<int_K;cnt2++){
            int_basic_array[int_block_array[cnt2][0]-1][int_block_array[cnt2][1]-1]=1;
        }
        int int_Step=0;
        int_Cat_x--;
        int_Cat_y--;
        Fn_Get_Space(int_Cat_x, int_Cat_y,reinterpret_cast <int*> (int_basic_array), int_Step, int_N);
        cout<<int_Step<<"\n";
    }
    return 0;
}

void Fn_Get_Space(int int_Cat_x, int int_Cat_y, int* int_basic_array, int& int_Step, int length){
    if(!(int_Cat_x>=0 && int_Cat_x<length)){
        return;
    }
    if(!(int_Cat_y>=0 && int_Cat_y<length)){
        return;
    }
    if(*(int_basic_array+int_Cat_y*length+int_Cat_x)>=1){
        return;
    }
    *(int_basic_array+int_Cat_y*length+int_Cat_x)=2;
    int_Step++;
    Fn_Get_Space(int_Cat_x, int_Cat_y+1, int_basic_array, int_Step, length);
    Fn_Get_Space(int_Cat_x, int_Cat_y-1, int_basic_array, int_Step, length);
    Fn_Get_Space(int_Cat_x+1, int_Cat_y, int_basic_array, int_Step, length);
    Fn_Get_Space(int_Cat_x-1, int_Cat_y, int_basic_array, int_Step, length);
}
