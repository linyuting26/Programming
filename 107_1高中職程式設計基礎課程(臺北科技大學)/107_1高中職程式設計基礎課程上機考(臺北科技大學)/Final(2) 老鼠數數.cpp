#include <iostream>
using namespace std;

int main(){
    string str_msg="";
    int int_number=0;
    cin>>str_msg;
    cin>>int_number;
    for(int int_cnt=0;int_cnt<str_msg.length();int_cnt++)
    {
        for(int int_cnt2=int_cnt;int_cnt2<str_msg.length()-1;int_cnt2++)
        {
            if(str_msg[int_cnt]>str_msg[int_cnt2+1])
            {
                char char_temp=str_msg[int_cnt];
                str_msg[int_cnt]=str_msg[int_cnt2+1];
                str_msg[int_cnt2+1]=char_temp;
            }
        }
    }//bubble sort to string
    string str_iterator="";
    for(int int_cnt=0;int_cnt<int_number;int_cnt++)
    {
        if(int_cnt>=1)
        {
            str_msg="";
            for(int int_cnt5=0;int_cnt5<str_iterator.length();int_cnt5++)
            {
                str_msg+=str_iterator[int_cnt5];
            }//use str_iterator to rewrite in str_msg
            str_iterator="";
            for(int int_cnt=0;int_cnt<str_msg.length();int_cnt++)
            {
                for(int int_cnt2=int_cnt;int_cnt2<str_msg.length()-1;int_cnt2++)
                {
                    if(str_msg[int_cnt]>str_msg[int_cnt2+1])
                    {
                        char char_temp=str_msg[int_cnt];
                        str_msg[int_cnt]=str_msg[int_cnt2+1];
                        str_msg[int_cnt2+1]=char_temp;
                    }
                }
            }//bubble sort to string
        }//if counting frequency more than one
        for(int int_cnt2=0;int_cnt2<str_msg.length();int_cnt2++)
        {
            int int_count=0;
            for(int int_cnt3=int_cnt2;int_cnt3<str_msg.length();int_cnt3++)
            {
                if(str_msg[int_cnt2]==str_msg[int_cnt2-1])
                {
                    continue;
                }
                else if(str_msg[int_cnt2]==str_msg[int_cnt3])
                {
                    int_count++;
                }
            }//count the frequency of number
            if(int_count>0)
            {
                for(int int_cnt4=0;int_cnt4<2;int_cnt4++)
                {
                    if(int_cnt4%2==0)
                    {
                        str_iterator+=int_count+'0';
                    }//use str_iterator to rewrite in int_count
                    else
                    {
                        str_iterator+=str_msg[int_cnt2];
                    }//use str_iterator to rewrite in str_msg
                }
            }//if number appeared frequency more than zero
        }
    }
    cout<<str_iterator<<"\n";
    return 0;
}
