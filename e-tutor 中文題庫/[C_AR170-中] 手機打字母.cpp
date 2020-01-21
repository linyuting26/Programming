#include <iostream>
#include <string>
using namespace std;

int main(){
    string str_msg="";
    string answer_str="";
    getline(cin,str_msg);
    int length=str_msg.length();
    int flag_status=0;
    string str_array[10]={" ",",.","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    string str_array2[10]={" ",",.","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int int_array[10]={1,2,3,3,3,3,3,4,3,4};
    for(int cnt=0;cnt<length;cnt++)
    {
        string str_temp="";
        if(isupper(str_msg[cnt]))
        {
            if(flag_status==0)
            {
                for(int cnt2=2;cnt2<10;cnt2++)
                {
                    str_temp="";
                    for(int cnt3=0;cnt3<int_array[cnt2];cnt3++)
                    {
                        str_temp+=cnt2+'0';
                        if(str_msg[cnt]==(str_array[cnt2])[cnt3])
                        {
                            answer_str+=str_temp;
                        }
                    }
                }
            }
            else
            {
                answer_str+='*';
                flag_status=0;
                for(int cnt2=2;cnt2<10;cnt2++)
                {
                    str_temp="";
                    for(int cnt3=0;cnt3<int_array[cnt2];cnt3++)
                    {
                        str_temp+=cnt2+'0';
                        if(str_msg[cnt]==(str_array[cnt2])[cnt3])
                        {
                            answer_str+=str_temp;
                        }
                    }
                }
            }
        }
        else if(islower(str_msg[cnt]))
        {
            if(flag_status==1)
            {
                for(int cnt2=2;cnt2<10;cnt2++)
                {
                    str_temp="";
                    for(int cnt3=0;cnt3<int_array[cnt2];cnt3++)
                    {
                        str_temp+=cnt2+'0';
                        if(str_msg[cnt]==(str_array2[cnt2])[cnt3])
                        {
                            answer_str+=str_temp;
                        }
                    }
                }
            }
            else
            {
                answer_str+='*';
                flag_status=1;
                for(int cnt2=2;cnt2<10;cnt2++)
                {
                    str_temp="";
                    for(int cnt3=0;cnt3<int_array[cnt2];cnt3++)
                    {
                        str_temp+=cnt2+'0';
                        if(str_msg[cnt]==(str_array2[cnt2])[cnt3])
                        {
                            answer_str+=str_temp;
                        }
                    }
                }
            }
        }
        else
        {
            for(int cnt2=0;cnt2<2;cnt2++)
            {
                str_temp="";
                for(int cnt3=0;cnt3<int_array[cnt2];cnt3++)
                {
                    str_temp+=cnt2+'0';
                    if(str_msg[cnt]==(str_array[cnt2])[cnt3])
                    {
                        answer_str+=str_temp;
                    }
                }
            }
        }
    }
    cout<<answer_str<<"\n";
    return 0;
}
