#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
string Fn_Get_Total(string str_msg1, string str_msg2);

int main(){
    int int_N=0;
    cin>>int_N;
    vector <char> char_vec;
    vector <char> char_temp;
    char char_msg;
    int counter=0;
    string str_answer="";
    for(int cnt=0;cnt<int_N;cnt++){
        cin>>char_msg;
        if(char_msg=='0'){
            char_temp.push_back(char_msg);
        }
        else{
            counter++;
            char_vec.push_back(char_msg);
        }
    }
    sort(char_vec.begin(),char_vec.end());
    if(!char_temp.empty()){
        if(counter>1){
            for(int cnt=0;cnt<char_temp.size();cnt++){
                char_vec.insert(char_vec.begin()+2,char_temp[cnt]);
            }
        }
        else if(counter==1){
            for(int cnt=0;cnt<char_temp.size();cnt++){
                char_vec.insert(char_vec.begin()+1,char_temp[cnt]);
            }
        }
        else if(counter==0){
            for(int cnt=0;cnt<char_temp.size();cnt++){
                char_vec.insert(char_vec.begin(),char_temp[cnt]);
            }
        }
    }
    if(int_N==1&&char_vec[0]=='0'){
        str_answer+=char_vec[0];
    }
    else{
        string str_msg1="";
        string str_msg2="";
        char char_word1;
        char char_word2;
        int flag=0;
        int number=0;
        for(int cnt=0;cnt<int_N;cnt++){
            if(int_N%2!=0&&cnt==int_N-1){
                if(char_word1<=char_word2){
                    str_msg1+=char_vec[cnt];
                }
                else{
                    str_msg2+=char_vec[cnt];
                }
            }
            else{
                if(cnt==0){
                    str_msg1+=char_vec[cnt];
                    char_word1=char_vec[cnt];
                }
                else if(cnt==1){
                    str_msg2+=char_vec[cnt];
                    char_word2=char_vec[cnt];
                }
                else if(cnt>1){
                    if(number==1){
                        if(flag==0){
                            str_msg1+=char_vec[cnt];
                            char_word1=char_vec[cnt];

                        }
                        else if(flag==1){
                            str_msg2+=char_vec[cnt];
                            char_word2=char_vec[cnt];
                        }
                        number=0;
                    }
                    else{
                        if(char_word1>=char_word2){
                            str_msg1+=char_vec[cnt];
                            char_word1=char_vec[cnt];
                            number=1;
                            flag=1;
                        }
                        else{
                            str_msg2+=char_vec[cnt];
                            char_word2=char_vec[cnt];
                            number=1;
                            flag=0;
                        }
                    }
                }
            }
        }
        str_answer=Fn_Get_Total(str_msg1, str_msg2);
    }
    cout<<str_answer<<"\n";
    return 0;
}

string Fn_Get_Total(string str_msg1, string str_msg2){
    int int_number=0;
    int length1=str_msg1.length();
    int length2=str_msg2.length();
    if(length1>length2){
        int_number=length1;
    }
    else{
        int_number=length2;
    }
    char char_table[int_number+1];
    char char_table2[int_number+1];
    char char_answer[int_number+1];
    for(int cnt=0;cnt<(int_number+1);cnt++){
        char_table[cnt]='0';
        char_table2[cnt]='0';
        char_answer[cnt]='0';
    }
    int counter1=int_number+1;
    int counter2=int_number+1;
    for(int cnt=length1-1;cnt>=0;cnt--){
        char_table[counter1-1]=str_msg1[cnt];
        counter1--;
    }
    for(int cnt=length2-1;cnt>=0;cnt--){
        char_table2[counter2-1]=str_msg2[cnt];
        counter2--;
    }
    for(int cnt=int_number;cnt>=0;cnt--){
        if(((char_answer[cnt]-'0')+(char_table[cnt]-'0')+(char_table2[cnt]-'0'))>9){
            char_answer[cnt]=(((char_answer[cnt]-'0')+(char_table[cnt]-'0')+(char_table2[cnt]-'0')-10)+'0');
            char_answer[cnt-1]='1';
        }
        else{
            char_answer[cnt]=((char_answer[cnt]-'0')+(char_table[cnt]-'0')+(char_table2[cnt]-'0')+'0');
        }
    }
    string str_answer="";
    int int_front=0;
    for(int cnt=0;cnt<int_number+1;cnt++){
        if(char_answer[cnt]=='0'){
            int_front=cnt+1;
        }
        else{
            break;
        }
    }
    for(int cnt=int_front;cnt<int_number+1;cnt++){
        str_answer+=char_answer[cnt];
    }
    return str_answer;
}
