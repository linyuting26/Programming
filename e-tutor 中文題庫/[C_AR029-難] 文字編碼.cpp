#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str_msg="";
    getline(cin,str_msg);
    int str_length=str_msg.length();
    int temp=0;
    while(temp<str_length)
    {
        if((temp*temp)>=str_length)
        {
            break;
        }
        else
        {
            temp+=1;
        }
    }
    char ary[temp][temp];
    int counter=0;
    for(int cnt=0;cnt<temp;cnt++)
    {
        for(int cnt2=0;cnt2<temp;cnt2++)
        {
            if(counter>=str_length)
            {
                ary[cnt][cnt2]=' ';
            }
            else
            {
                ary[cnt][cnt2]=str_msg[counter];
            }
            counter++;
        }
    }
    counter=0;
    string str_answer="";
    for(int cnt=0;cnt<temp;cnt++)
    {
        for(int cnt2=0;cnt2<temp;cnt2++)
        {
            str_answer+=ary[cnt2][cnt];
            counter++;
        }
    }
    int number=0;
    int int_temp=0;
    for(int cnt=0;cnt<counter;cnt++)
    {
        int_temp=cnt;
        while(str_answer[int_temp]==' ')
        {
            number++;
            int_temp++;
        }
        cout<<str_answer[cnt];
        if(number>1)
        {
            cnt=int_temp-1;
        }
        number=0;
        temp=0;
    }
    return 0;
}
