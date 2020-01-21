#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int answer=0;
    string str_msg="";
    getline(cin, str_msg);
    int str_length=str_msg.length();
    stack <int> stack_container;
    string str_temp="";
    for(int cnt=0;cnt<str_length;cnt++){
        if(str_msg[cnt]==' '){
            if(!str_temp.empty()){
                stack_container.push(stoi(str_temp));
                str_temp="";
            }
            else{
                continue;
            }
        }
        else if(isdigit(str_msg[cnt])){
            str_temp+=str_msg[cnt];
        }
        else{
            int last=stack_container.top();
            stack_container.pop();
            int previous=stack_container.top();
            if(stack_container.size()>1){
                stack_container.pop();
            }
            if(str_msg[cnt]=='+'){
                previous=previous+last;
                stack_container.push(previous);
            }
            else if(str_msg[cnt]=='-'){
                previous=previous-last;
                stack_container.push(previous);
            }
            else if(str_msg[cnt]=='*'){
                previous=previous*last;
                stack_container.push(previous);
            }
            else if(str_msg[cnt]=='/'){
                previous=previous/last;
                stack_container.push(previous);
            }
            else if(str_msg[cnt]=='%'){
                previous=previous%last;
                stack_container.push(previous);
            }
            answer=previous;
        }
    }
    answer=stack_container.top();
    cout<<answer<<"\n";
    return 0;
}
