#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str_msg="";
    cin>>str_msg;
    int length=str_msg.length();
    char char_msg[length];
    for(int cnt=0;cnt<length;cnt++)
    {
        if(isupper(str_msg[cnt]))
        {
            str_msg[cnt]=str_msg[cnt]+32;
        }
        char_msg[cnt]=str_msg[cnt];
    }
    sort(char_msg,char_msg+length);
    for(int cnt=0;cnt<length;cnt++)
    {
        int total=0;
        int temp=(cnt+1);
        while(char_msg[cnt]==char_msg[temp])
        {
            total++;
            temp++;
        }
        cout<<char_msg[cnt]<<" "<<total+1<<"\n";
        if(total>0)
        {
            cnt=(temp-1);
        }
    }
    return 0;
}
