#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
void fn_Getprefix(string str_msg,string str_prefix,int counter);
void fn_Getsuffix(string str_msg,string str_suffix,int counter);
int main(){
    string str_prefix="";
    string str_suffix="";
    int character_frequency=0;
    int word_frequency=0;
    string str_text="";
    string str_temp="";
    vector <char> char_temp;
    cin>>str_prefix>>str_suffix>>character_frequency>>word_frequency;
    cin.ignore();
    getline(cin,str_text);
    int counter=0;
    string str_msg[100];
    char* ary[100];
    int int_cnt=0;
    stringstream ss(str_text);
    while(ss >>str_msg[counter])
    {
        counter++;
    }
    /*
    int number=str_text.length();
    char char_array[number+1];
    strcpy(char_array,str_text.c_str());
    char* ptr;
    const char* delim=" ";
    ptr=strtok(char_array,delim);
    int counter=0;
    char* ary[1000];
    while(ptr!= NULL)
    {
        ary[counter]=ptr;
        ptr=strtok(NULL,delim);
        counter++;
    }
    string* str_msg = new string[counter];
    for(int cnt=0;cnt<counter;cnt++)
    {
        str_msg[cnt]=ary[cnt];
        str_temp+=str_msg[cnt];
    }*/
    //fn_Getprefix(str_msg,str_prefix,counter);
    //fn_Getsuffix(str_msg,str_suffix,counter);
    //delete [] str_msg;
    //
    int up_array[26]={0};
    int low_array[26]={0};
    int int_length=str_temp.length();
    for(int cnt=0;cnt<int_length;cnt++)
    {
        char_temp.push_back(str_temp[cnt]);
    }
    sort(char_temp.begin(),char_temp.end());
    cout<<"character frequency over "<<character_frequency<<":\n";
    for(int cnt=0;cnt<int_length;cnt++)
    {
        int number=(cnt+1);
        int int_temp=0;
        while(char_temp[cnt]==char_temp[number])
        {
            int_temp++;
            number++;
        }
        if(char_temp[cnt]>=97&&char_temp[cnt]<=122)
        {
            low_array[char_temp[cnt]-'a']=(int_temp+1);
        }
        else if(char_temp[cnt]>=65&&char_temp[cnt]<=90)
        {
            up_array[char_temp[cnt]-'A']=(int_temp+1);
        }
        if((int_temp+1)>1)
        {
            cnt=(number-1);
        }
    }
    for(int cnt=0;cnt<26;cnt++)
    {
        if(up_array[cnt]>=character_frequency)
        {
            cout<<static_cast<char>(cnt+'A')<<","<<up_array[cnt]<<"\n";
        }
    }
    for(int cnt=0;cnt<26;cnt++)
    {
        if(low_array[cnt]>=character_frequency)
        {
            cout<<static_cast<char>(cnt+'a')<<","<<low_array[cnt]<<"\n";
        }
    }
    //
    /*for(int cnt=0;cnt<counter;cnt++)
    {
        char* ary[int_cnt]=str_msg[int_cnt].c_str();
        int_cnt++;
    }
    char* temp;
    for(int cnt=0;cnt<(counter-1);cnt++)
    {
        for(int cnt2=0;cnt2<(counter-1);cnt2++)
        {
            if(strcmp(ary[cnt2],ary[cnt2+1])>0)
            {
                temp=ary[cnt2];
                ary[cnt2]=ary[cnt2+1];
                ary[cnt2+1]=temp;
            }
        }
    }
    cout<<"word frequency over "<<word_frequency<<":\n";
    for(int cnt=0;cnt<counter;cnt++)
    {
        int int_counter=0;
        int number=(cnt+1);
        if(cnt==(counter-1)&&(int_counter+1)>=word_frequency)
        {
            cout<<ary[cnt]<<","<<int_counter+1<<"\n";
            break;
        }
        while(strcmp(ary[cnt],ary[number])==0)
        {
            int_counter++;
            number++;
        }
        if((int_counter+1)>=word_frequency)
        {
            cout<<ary[cnt]<<","<<int_counter+1<<"\n";
        }
        if((int_counter+1)>1)
        {
            cnt=(number-1);
        }
    }
    //
    return 0;
}

void fn_Getprefix(string str_msg,string str_prefix,int counter)
{
    int number=str_prefix.length();
    cout<<"prefix of "<<str_prefix<<":\n";
    for(int cnt=0;cnt<counter;cnt++)
    {
        for(int cnt2=0;cnt2<number;cnt2++)
        {
            if((str_msg[cnt])[cnt2]==str_prefix[cnt2])
            {
                if(cnt2==(number-1))
                {
                    int flag=0;
                    for(int cnt3=0;cnt3<cnt;cnt3++)
                    {
                        if(str_msg[cnt]==str_msg[cnt3])
                        {
                            flag=1;
                        }
                    }
                    if(flag==0)
                    {
                        cout<<str_msg[cnt]<<"\n";
                        break;
                    }
                }
            }
            else
            {
                break;
            }
        }
    }
}

void fn_Getsuffix(string str_msg,string str_suffix,int counter)
{
    int number=str_suffix.length();
    cout<<"suffix of "<<str_suffix<<":\n";
    for(int cnt=0;cnt<counter;cnt++)
    {
        int length=str_msg[cnt].length();
        for(int cnt2=(number-1);cnt2>=0;cnt2--)
        {
            if((str_msg[cnt])[length-1]==str_suffix[cnt2])
            {
                if(cnt2==0)
                {
                   int flag=0;
                    for(int cnt3=0;cnt3<cnt;cnt3++)
                    {
                        if(str_msg[cnt]==str_msg[cnt3])
                        {
                            flag=1;
                        }
                    }
                    if(flag==0)
                    {
                        cout<<str_msg[cnt]<<"\n";
                        break;
                    }
                }
            }
            else
            {
                break;
            }
            length--;
        }
    }
}*/
