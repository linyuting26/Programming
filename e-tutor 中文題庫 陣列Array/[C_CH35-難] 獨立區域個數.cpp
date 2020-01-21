#include <iostream>
using namespace std;
void Fn_Get_Space(int Point_x, int Point_y, int* int_array, int& int_total, int& int_dot, int length);

int main(){
    int int_n=0;
    cin>>int_n;
    int int_array[int_n][int_n]={};
    int int_dot=0;
    for(int cnt=0;cnt<int_n;cnt++){
        string str_msg="";
        cin>>str_msg;
        for(int cnt2=0;cnt2<int_n;cnt2++){
            int_array[cnt][cnt2]=str_msg[cnt2]-'0';
            if(int_array[cnt][cnt2]==1){
                int_dot++;
            }
        }
    }
    int int_total=0;
    int Point_x=0;
    int Point_y=0;
    while(int_dot!=int_n*int_n){
        int flag=0;
        for(int cnt=0;cnt<int_n;cnt++){
            if(flag==1){
                break;
            }
            for(int cnt2=0;cnt2<int_n;cnt2++){
                if(int_array[cnt][cnt2]==0){
                    Point_x=cnt;
                    Point_y=cnt2;
                    flag=1;
                    break;
                }
            }
        }
        Fn_Get_Space(Point_x, Point_y, reinterpret_cast <int*> (int_array), int_total, int_dot, int_n);
        int_total++;
    }
    cout<<int_total<<"\n";
    return 0;
}

void Fn_Get_Space(int Point_x, int Point_y, int* int_array, int& int_total, int& int_dot, int length){
    if(!(Point_x>=0 && Point_x<length)){
        return;
    }
    if(!(Point_y>=0 && Point_y<length)){
        return;
    }
    if(*(int_array+Point_x*length+Point_y)==1){
        return;
    }
    int_dot++;
    *(int_array+Point_x*length+Point_y)=1;
    Fn_Get_Space(Point_x, Point_y+1, int_array, int_total, int_dot, length);
    Fn_Get_Space(Point_x, Point_y-1, int_array, int_total, int_dot, length);
    Fn_Get_Space(Point_x+1, Point_y, int_array, int_total, int_dot, length);
    Fn_Get_Space(Point_x-1, Point_y, int_array, int_total, int_dot, length);
}
