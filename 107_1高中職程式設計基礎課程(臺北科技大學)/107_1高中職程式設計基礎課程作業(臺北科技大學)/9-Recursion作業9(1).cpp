#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    cout<<"Enter the number:";
    int int_number=0;
    cin>>int_number;
    if(int_number<=0||int_number>100000)
    {
        cout<<"Number illegal"<<endl;
    }
    else
    {
        int int_temp=int_number;
        string str_temp="";
        while(int_number>0)
        {
            int temp=int_number%3;
            stringstream ss;
            ss << temp;
            string str_msg=ss.str();
            str_temp+=str_msg;
            int_number/=3;
        }
        string string_temp="";
        for(int int_cnt=str_temp.length()-1;int_cnt>=0;int_cnt--)
        {
            string_temp+=str_temp[int_cnt];
        }
        cout<<int_temp<<" (10 positional notation)= "<<string_temp<<" (3 positional notation)"<<endl;
        int_number=int_temp;
        str_temp="";
        while(int_number>0)
        {
            int temp=int_number%7;
            stringstream ss;
            ss << temp;
            string str_msg=ss.str();
            str_temp+=str_msg;
            int_number/=7;
        }
        string_temp="";
        for(int int_cnt=str_temp.length()-1;int_cnt>=0;int_cnt--)
        {
            string_temp+=str_temp[int_cnt];
        }
        cout<<int_temp<<" (10 positional notation)= "<<string_temp<<" (7 positional notation)"<<endl;
        int_number=int_temp;
        str_temp="";
        while(int_number>0)
        {
            int temp=int_number%12;
            if(temp==10)
            {
                char a='A';
                str_temp+=a;
            }
            else if(temp==11)
            {
                char b='B';
                str_temp+=b;
            }
            else
            {
                stringstream ss;
                ss << temp;
                string str_msg=ss.str();
                str_temp+=str_msg;
            }
            int_number/=12;
        }
        string_temp="";
        for(int int_cnt=str_temp.length()-1;int_cnt>=0;int_cnt--)
        {
            string_temp+=str_temp[int_cnt];
        }
        cout<<int_temp<<" (10 positional notation)= "<<string_temp<<" (12 positional notation)"<<endl;
    }
    return 0;
}
