#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int Fn_longest_length(char char_array1[], char char_array2[], int length1, int length2);

int main(){
    string str_msg1="";
    string str_msg2="";
    while(cin>>str_msg1>>str_msg2){
        char char_array1[str_msg1.length()]={};
        char char_array2[str_msg2.length()]={};
        for(int cnt=0;cnt<str_msg1.length();cnt++){
            char_array1[cnt]=str_msg1[cnt];
        }
        for(int cnt=0;cnt<str_msg2.length();cnt++){
            char_array2[cnt]=str_msg2[cnt];
        }
        cout<<Fn_longest_length(char_array1, char_array2, str_msg1.length(), str_msg2.length())<<"\n";
    }
    return 0;
}

int Fn_longest_length(char char_array1[], char char_array2[], int length1, int length2){
    char answer_array[length1+1][length2+1]={};
    for(int cnt=0;cnt<=length1;cnt++){
        for(int cnt2=0;cnt2<=length2;cnt2++){
            if(cnt==0 || cnt2==0){
                answer_array[cnt][cnt2]=0;
            }
            else if(char_array1[cnt-1]==char_array2[cnt2-1]){
                answer_array[cnt][cnt2]=answer_array[cnt-1][cnt2-1]+1;
            }
            else{
                answer_array[cnt][cnt2]=max(answer_array[cnt-1][cnt2], answer_array[cnt][cnt2-1]);
            }
        }
    }
    return answer_array[length1][length2];
}
