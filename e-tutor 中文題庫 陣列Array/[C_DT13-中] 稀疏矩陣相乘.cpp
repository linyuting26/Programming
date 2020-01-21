#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void Fn_Array_Reverse(int* int_basic_array, int* int_reverse_array, int int_n);
void Fn_Array_multiply(int* int_basic_array, int* int_reverse_array, int* int_multiply_array, int int_n);

int main(){
    int int_n=0;
    cin>>int_n;
    int int_temp_array[int_n][int_n]={};
    int int_basic_array[int_n][int_n]={};
    int int_reverse_array[int_n][int_n]={};
    int int_multiply_array[int_n][int_n]={};
    for(int cnt=0;cnt<int_n;cnt++){
        string str_msg="";
        cin>>str_msg;
        int counter=0;
        for(int cnt2=0;cnt2<str_msg.length();cnt2++){
            if(isdigit(str_msg[cnt2])){
                int_temp_array[cnt][counter]=(str_msg[cnt2]-'0');
                counter++;
            }
        }
    }
    for(int cnt=0;cnt<int_n;cnt++){
        int_basic_array[int_temp_array[cnt][1]-1][int_temp_array[cnt][0]-1]=int_temp_array[cnt][2];
    }
    Fn_Array_Reverse(reinterpret_cast <int*> (int_basic_array), reinterpret_cast <int*> (int_reverse_array), int_n);
    Fn_Array_multiply(reinterpret_cast <int*> (int_basic_array), reinterpret_cast <int*> (int_reverse_array), reinterpret_cast <int*> (int_multiply_array), int_n);
    for(int cnt=0;cnt<int_n;cnt++){
        for(int cnt2=0;cnt2<int_n;cnt2++){
            if(cnt2==(int_n-1)){
                cout<<int_multiply_array[cnt][cnt2]<<"\n";
            }
            else{
                cout<<int_multiply_array[cnt][cnt2]<<" ";
            }
        }
    }
    return 0;
}

void Fn_Array_Reverse(int* int_basic_array, int* int_reverse_array, int int_n)
{
    for(int cnt=0;cnt<int_n;cnt++){
        for(int cnt2=0;cnt2<int_n;cnt2++){
            *(int_reverse_array+cnt2*int_n+cnt)=*(int_basic_array+cnt*int_n+cnt2);
        }
    }
}

void Fn_Array_multiply(int* int_basic_array, int* int_reverse_array, int* int_multiply_array, int int_n)
{
    for(int cnt=0;cnt<int_n;cnt++){
        for(int cnt2=0;cnt2<int_n;cnt2++){
            int total=0;
            for(int cnt3=0;cnt3<int_n;cnt3++){
                total+=(*(int_basic_array+cnt3*int_n+cnt))*(*(int_reverse_array+cnt2*int_n+cnt3));
            }
            *(int_multiply_array+cnt*int_n+cnt2)=total;
        }
    }
}
