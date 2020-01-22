#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int fn_Decimal_system(string str_X1,int int_B1,int flag);
void fn_to_other_system(int number,int int_B2);

int main(){
    string str_X1="";
    int int_B1=0, int_B2=0, flag=0;
    cin>>str_X1>>int_B1>>int_B2;
    if(int_B1<2||int_B1>16||int_B2<2||int_B2>16)
    {
        cout<<"Input Error\n";
        return 0;
    }
    int number=fn_Decimal_system(str_X1,int_B1,flag);
    if(number==1)
    {
        cout<<"Input Error\n";
        return 0;
    }
    fn_to_other_system(number,int_B2);
    return 0;
}

int fn_Decimal_system(string str_X1,int int_B1,int flag)
{
    int length=str_X1.length();
    int number=0, total=0, counter=0;
    for(int cnt=(length-1);cnt>=0;cnt--)
    {
        if(str_X1[cnt]>='A'&&str_X1[cnt]<='F')
        {
            number=(str_X1[cnt]-'A'+10);
        }
        else if(str_X1[cnt]>='0'&&str_X1[cnt]<='9')
        {
            number=(str_X1[cnt]-'0');
        }
        else
        {
            flag=1;
            return flag;
            break;
        }
        if(int_B1<=number)
        {
            flag=1;
            return flag;
            break;
        }
        number*=pow(int_B1,counter);
        total+=number;
        counter++;
    }
    return total;
}

void fn_to_other_system(int number,int int_B2)
{
    string str_answer="", str_temp="";
    char chr_temp=' ';
    int counter=0;
    if(number==0)
    {
        cout<<"0\n";
    }
    else
    {
        while(number>0)
        {
            int temp=number%int_B2;
            number/=int_B2;
            if(temp>9)
            {
                chr_temp=(temp-10+'A');
            }
            else
            {
                chr_temp=(temp+'0');
            }
            str_temp+=chr_temp;
            counter++;
        }
        for(int cnt=(counter-1);cnt>=0;cnt--)
        {
            if(cnt==0)
            {
                cout<<str_temp[cnt]<<"\n";
            }
            else
            {
                cout<<str_temp[cnt];
            }
        }
    }
}
