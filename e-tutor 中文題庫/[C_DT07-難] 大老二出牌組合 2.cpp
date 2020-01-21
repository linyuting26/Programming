#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct card{
    char color;
    int num;
};
int fn_GetComb(int n,int k);
int fn_Full_House(int* cnt_num,int int_2);
int fn_GetStraight(int* int_cnt,int int_pos);
int main(){
    int int_user[13];
    card card[13];
    int int_arr[13]={};

    for(int int_ct=0;int_ct<13;int_ct++){//change the format
        cin>>int_user[int_ct];
        if(int_user[int_ct]<=12){
            card[int_ct].color='C';
        }
        if(int_user[int_ct]>=13&&int_user[int_ct]<=25){
            card[int_ct].color='D';
        }
        if(int_user[int_ct]>=26&&int_user[int_ct]<=38){
            card[int_ct].color='H';
        }
        if(int_user[int_ct]>=39&&int_user[int_ct]<=51){
            card[int_ct].color='S';
        }
        card[int_ct].num=int_user[int_ct]%13+1;
        int index=card[int_ct].num-1;
        int_arr[index]++;//
    }

    int int_three=0,int_four=0,int_pair=0,int_Straight=0;

    for(int int_ct=0;int_ct<13;int_ct++){//count pair, three, four
        if(int_arr[int_ct]>=2)int_pair+=fn_GetComb(int_arr[int_ct],2);
        if(int_arr[int_ct]>=3)int_three+=fn_GetComb(int_arr[int_ct],3);
        if(int_arr[int_ct]==4)int_four+=9;
        if(int_arr[int_ct]>0&&int_ct<10){//count straight
            int_Straight+=fn_GetStraight((int*) int_arr,int_ct);
            }
        }

    int int_Full_House=fn_Full_House((int*)int_arr,int_pair);//count full_house


    cout<<int_three+int_four+int_pair+int_Straight+int_Full_House+13<<endl;
    return 0;
}

int fn_GetComb(int n,int k){
    int int_mol=1;
    int int_demon=1;
    int int_temp=k;
    for(int int_ct=n;int_temp>0;int_ct--,int_temp--){
        int_demon*=int_ct;
    }
    for(int int_ct=k;int_ct>0;int_ct--){
        int_mol*=int_ct;
    }
    return int_demon/int_mol;
}

int fn_GetStraight(int* int_cnt,int int_pos){
 int int_val=0;
 if(int_pos==9){
        int_val+=int_cnt[9]*int_cnt[10]//count 10,11,12,13,1
           *int_cnt[11]*int_cnt[12]*int_cnt[0];
   }
  if(int_pos<9){
      int int_ct2=int_pos;//count straight
       int_val+=int_cnt[int_ct2]*int_cnt[int_ct2+1]
           *int_cnt[int_ct2+2]*int_cnt[int_ct2+3]*int_cnt[int_ct2+4];
 }
  return int_val;
}

int fn_Full_House(int* cnt_num,int int_2){
    int Full_House=0;
    for(int int_ct=0;int_ct<13;int_ct++){
        if(cnt_num[int_ct]==4)Full_House+=4*(int_2-6);
        if(cnt_num[int_ct]==3)Full_House+=int_2-3;
    }
    return Full_House;
}
