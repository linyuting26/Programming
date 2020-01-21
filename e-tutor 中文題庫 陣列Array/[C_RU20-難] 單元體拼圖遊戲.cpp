#include <iostream>
using namespace std;

bool Fn_boundary(int x, int y);

int main(){
    int number=0;
    cin>>number;
    for(int cnt=0;cnt<number;cnt++){
        int counter=0, counter2=0, answer=0;
        int int_array[4][4]={}, int_position[4][2]={}, int_position2[4][2]={};
        for(int cnt2=0;cnt2<4;cnt2++){
            for(int cnt3=0;cnt3<4;cnt3++){
                cin>>int_array[cnt2][cnt3];
                if(int_array[cnt2][cnt3]==1){
                    bool consider=Fn_boundary(cnt2, cnt3);
                    if(consider==true){
                        int_position[counter][0]=cnt2;
                        int_position[counter][1]=cnt3;
                        counter++;
                    }
                    else{
                        int_position2[counter2][0]=cnt2;
                        int_position2[counter2][1]=cnt3;
                        counter2++;
                    }
                }
            }
        }
        if(counter+counter2>4){
            cout<<"No\n";
        }
        else{
            for(int cnt2=0;cnt2<counter2;cnt2++){
                int_position[counter][0]=int_position2[cnt2][0];
                int_position[counter][1]=int_position2[cnt2][1];
                counter++;
            }
            for(int cnt2=0;cnt2<4;cnt2++){
                int temp_array[3][2]={};
                int temp_counter=0;
                if(int_array[(int_position[cnt2][0]-1)][int_position[cnt2][1]]==0 && (int_position[cnt2][0]-1)>=0){
                    temp_array[temp_counter][0]=int_position[cnt2][0]-1;
                    temp_array[temp_counter][1]=int_position[cnt2][1];
                    temp_counter++;
                }
                if(int_array[(int_position[cnt2][0]+1)][(int_position[cnt2][1]-1)]==0 && (int_position[cnt2][0]+1)<4 && (int_position[cnt2][1]-1)>=0){
                    temp_array[temp_counter][0]=int_position[cnt2][0]+1;
                    temp_array[temp_counter][1]=int_position[cnt2][1]-1;
                    temp_counter++;
                }
                if(int_array[(int_position[cnt2][0]+1)][(int_position[cnt2][1]+1)]==0 && (int_position[cnt2][0]+1)<4 && (int_position[cnt2][1]+1)<4){
                    temp_array[temp_counter][0]=int_position[cnt2][0]+1;
                    temp_array[temp_counter][1]=int_position[cnt2][1]+1;
                    temp_counter++;
                }
                if(int_array[(int_position[cnt2][0]-1)][(int_position[cnt2][1]-1)]==0 && (int_position[cnt2][0]-1)>=0 && (int_position[cnt2][1]-1)>=0){
                    temp_array[temp_counter][0]=int_position[cnt2][0]-1;
                    temp_array[temp_counter][1]=int_position[cnt2][1]-1;
                    temp_counter++;
                }
                if(int_array[(int_position[cnt2][0]-1)][(int_position[cnt2][1]+1)]==0 && (int_position[cnt2][0]-1)>=0 && (int_position[cnt2][1]+1)<4){
                    temp_array[temp_counter][0]=int_position[cnt2][0]-1;
                    temp_array[temp_counter][1]=int_position[cnt2][1]+1;
                    temp_counter++;
                }
                if(int_array[(int_position[cnt2][0]+1)][int_position[cnt2][1]]==0 && (int_position[cnt2][0]-1)<4){
                    temp_array[temp_counter][0]=int_position[cnt2][0]+1;
                    temp_array[temp_counter][1]=int_position[cnt2][1];
                    temp_counter++;
                }
                if(int_array[int_position[cnt2][0]][(int_position[cnt2][1]-1)]==0 && (int_position[cnt2][1]-1)>=0){
                    temp_array[temp_counter][0]=int_position[cnt2][0];
                    temp_array[temp_counter][1]=int_position[cnt2][1]-1;
                    temp_counter++;
                }
                if(int_array[int_position[cnt2][0]][(int_position[cnt2][1]+1)]==0 && (int_position[cnt2][1]+1)<4){
                    temp_array[temp_counter][0]=int_position[cnt2][0];
                    temp_array[temp_counter][1]=int_position[cnt2][1]+1;
                    temp_counter++;
                }
                if(temp_counter>=3){
                    for(int cnt3=0;cnt3<temp_counter;cnt3++){
                        int_array[temp_array[cnt3][0]][temp_array[cnt3][1]]=1;
                    }
                    answer++;
                }
            }
            if(answer==4){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}

bool Fn_boundary(int x, int y){
    bool bolar=false;
    if(x-1<0 || x+1>=4 || y-1<0 || y+1>=4){
        bolar=true;
    }
    return bolar;
}
