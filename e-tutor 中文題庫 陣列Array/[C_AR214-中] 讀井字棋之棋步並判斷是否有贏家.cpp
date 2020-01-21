#include <iostream>
using namespace std;
class Tic_Tac_Toe{
public:
    int player;
    int x_axis;
    int y_axis;
};
bool Is_Win_Player(char* array_table);

int main(){
    Tic_Tac_Toe Step_array[9]={};
    for(int cnt=0;cnt<9;cnt++){
        cin>>Step_array[cnt].player;
        cin>>Step_array[cnt].x_axis;
        cin>>Step_array[cnt].y_axis;
    }
    char array_table[3][3]={};
    for(int cnt=0;cnt<9;cnt++){
        if(Step_array[cnt].player==0){
            array_table[Step_array[cnt].x_axis][Step_array[cnt].y_axis]='O';
        }
        else if(Step_array[cnt].player==1){
            array_table[Step_array[cnt].x_axis][Step_array[cnt].y_axis]='X';
        }
    }
    bool judge=false;
    judge=Is_Win_Player(reinterpret_cast <char*> (array_table));
    if(judge==true){
        cout<<"y\n";
    }
    else{
        cout<<"n\n";
    }
    return 0;
}

bool Is_Win_Player(char* array_table){
    bool judge=false;
    int flag=0;
    for(int cnt=0;cnt<3;cnt++){
        if(*(array_table+cnt*3+0)==*(array_table+cnt*3+1) && *(array_table+cnt*3+1)==*(array_table+cnt*3+2)){
            judge=true;
            flag=1;
            break;
        }
        else if(*(array_table+0+cnt)==*(array_table+3+cnt) && *(array_table+3+cnt)==*(array_table+6+cnt)){
            judge=true;
            flag=1;
            break;
        }
    }
    if(flag==0){
        if(*(array_table+0)==*(array_table+4) && *(array_table+4)==*(array_table+8)){
            judge=true;
        }
        else if(*(array_table+2)==*(array_table+4) && *(array_table+4)==*(array_table+6)){
            judge=true;
        }
    }
    return judge;
}
