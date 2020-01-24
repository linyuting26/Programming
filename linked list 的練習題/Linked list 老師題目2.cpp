#include <iostream>
#include <regex>
using namespace std;

int main(){
    string str_msg="(5+8+10)*2";
    string pattern="\("+str_msg+"\)";
    regex  str_pattern(pattern);
    cout<<str_msg<<endl;
    return 0;
}
