#include <iostream>
#include <string>
using namespace std;

int main(){
    char index_txt[10][10]={{'d','d','a','a','z','a','d','a','s','s'},{'d','c','h','n','r','m','l','o','q','z'},{'f','h','k','u','j','q','w','f','v','x'},{'h','f',',','l','.','f','1','2','4','s'},{'a','e','3','5','5','d','9','f','g','d'},{'1','2','1','c','z','6','a','e','f','g'},{'b','2','3','6','6','b','6','h','h','c'},{'q','r','7','5','z','8','i','9','h','b'},{' ','r','s','t','y','u','v','w','x','s'},{'j','l','v','a','k','m','n','0','o','p'}};
    int int_array[1000];
    int counter=0;
    while(true)
    {
        int int_number=0;
        char char_msg;
        cin>>int_number;
        int_array[counter]=int_number;
        counter++;
        cin.get(char_msg);
        if(char_msg=='\n')
        {
            break;
        }
    }
    string str_answer="";
    for(int cnt=0;cnt<counter;cnt+=2)
    {
        str_answer+=index_txt[int_array[cnt]][int_array[cnt+1]];
    }
    cout<<str_answer<<"\n";
    return 0;
}
