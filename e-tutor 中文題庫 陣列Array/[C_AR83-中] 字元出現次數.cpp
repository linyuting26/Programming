#include <iostream>
#include <string>
using namespace std;

int main(){
    string str_msg="";
    while(getline(cin,str_msg)){
        if(str_msg=="end"){
            return 0;
        }
        else{
            int counter[123]={0};
            for(int cnt=0;cnt<str_msg.length();cnt++){
                if(str_msg[cnt]==' '){
                    continue;
                }
                else{
                    counter[str_msg[cnt]-'0']++;
                }
            }
            string char_msg="";
            getline(cin,char_msg);
            cout<<counter[char_msg[0]-'0']<<"\n";
        }
    }
    return 0;
}
