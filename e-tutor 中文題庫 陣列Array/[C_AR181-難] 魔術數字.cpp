#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
int Fn_String_To_Int(string str_msg);
string Fn_Int_To_String(int int_msg);

int main(){
    string str_number="";
    string reverse_number="";
    cin>>str_number;
    char char_array[11]={'0','1','2','3','4','5','6','7','8','9','0'};
    char char_array2[11]={'C','E','L','A','M','G','I','G','O','O','C'};
    for(int cnt=2;cnt>=0;cnt--)
    {
        reverse_number+=str_number[cnt];
    }
    int int_reverse=Fn_String_To_Int(reverse_number);
    int int_number=Fn_String_To_Int(str_number);
    int int_abs=abs(int_number-int_reverse);
    string str_reverse=Fn_Int_To_String(int_abs);
    string str_reverse2="";
    for(int cnt=2;cnt>=0;cnt--)
    {
        str_reverse2+=str_reverse[cnt];
    }
    int int_plus=Fn_String_To_Int(str_reverse);
    int int_plus2=Fn_String_To_Int(str_reverse2);
    int total=(int_plus+int_plus2)*40;
    string answer=Fn_Int_To_String(total);
    string new_answer="";
    for(int cnt=0;cnt<answer.length();cnt++)
    {
        for(int cnt2=0;cnt2<11;cnt2++)
        {
            if(answer[cnt]==char_array[cnt2])
            {
                new_answer+=char_array2[cnt2];
                break;
            }
        }
    }
    cout<<new_answer<<"\n";
    return 0;
}

int Fn_String_To_Int(string str_msg)
{
    stringstream Obj_ss;
    Obj_ss << str_msg;
    int int_reverse=0;
    Obj_ss >>int_reverse;
    return int_reverse;
}

string Fn_Int_To_String(int int_msg)
{
    stringstream Obj_ss;
    Obj_ss << int_msg;
    string str_msg="";
    Obj_ss >>str_msg;
    return str_msg;
}
