#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> int_vec;
    vector <int> answer_vec;
    int int_number=0;
    while(cin>>int_number)
    {
        char char_msg;
        cin.get(char_msg);
        int_vec.push_back(int_number);
        if(char_msg=='\n')
        {
            break;
        }
    }
    for(int cnt=0;cnt<int_vec.size();cnt++)
    {
        if(cnt==0&&int_vec[cnt]>int_vec[cnt+1])
        {
            answer_vec.push_back(cnt);
        }
        else if(int_vec[cnt]>int_vec[cnt-1]&&int_vec[cnt]>int_vec[cnt+1])
        {
            answer_vec.push_back(cnt);
        }
        else if(cnt==(int_vec.size()-1)&&int_vec[cnt]>int_vec[cnt-1])
        {
            answer_vec.push_back(cnt);
        }
    }
    for(int cnt=0;cnt<answer_vec.size();cnt++)
    {
        if(cnt==(answer_vec.size()-1))
        {
            cout<<answer_vec[cnt]<<"\n";
        }
        else
        {
            cout<<answer_vec[cnt]<<" ";
        }
    }
    return 0;
}
