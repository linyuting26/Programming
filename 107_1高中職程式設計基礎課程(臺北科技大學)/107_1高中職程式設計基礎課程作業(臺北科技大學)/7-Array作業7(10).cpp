#include <iostream>
using namespace std;

int main()
{
    string special_award="";
    string first_prize1="";
    string first_prize2="";
    string first_prize3="";
    cin>>special_award>>first_prize1>>first_prize2>>first_prize3;
    int number=0;
    cin>>number;
    int answer=0;
    int ary[7]={0};
    for(int cnt=0;cnt<number;cnt++)
    {
        string str_msg="";
        cin>>str_msg;
        if(str_msg==special_award)
        {
            answer+=2000000;
            ary[0]++;
        }
        else
        {
            int int_max=0;
            for(int cnt1=0;cnt1<3;cnt1++)
            {
                int int_count=0;
                if(cnt1==0)
                {
                    for(int cnt2=7;cnt2>=0;cnt2--)
                    {
                        if(str_msg[cnt2]==first_prize1[cnt2])
                        {
                            int_count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    int_max=int_count;
                }
                else if(cnt1==1)
                {
                    for(int cnt3=7;cnt3>=0;cnt3--)
                    {
                        if(str_msg[cnt3]==first_prize2[cnt3])
                        {
                            int_count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if(int_count>int_max)
                    {
                        int_max=int_count;
                    }
                }
                else if(cnt1==2)
                {
                    for(int cnt4=7;cnt4>=0;cnt4--)
                    {
                        if(str_msg[cnt4]==first_prize3[cnt4])
                        {
                            int_count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if(int_count>int_max)
                    {
                        int_max=int_count;
                    }
                }
            }
            if(int_max==8)
            {
                answer+=200000;
                ary[1]++;
            }
            else if(int_max==7)
            {
                answer+=40000;
                ary[2]++;
            }
            else if(int_max==6)
            {
                answer+=10000;
                ary[3]++;
            }
            else if(int_max==5)
            {
                answer+=4000;
                ary[4]++;
            }
            else if(int_max==4)
            {
                answer+=1000;
                ary[5]++;
            }
            else if(int_max==3)
            {
                answer+=200;
                ary[6]++;
            }
        }
    }
    for(int cnt=0;cnt<7;cnt++)
    {
        if(cnt==6)
        {
            cout<<ary[cnt]<<endl;
        }
        else
        {
            cout<<ary[cnt]<<" ";
        }
    }
    cout<<answer<<endl;
    return 0;
}
/*
如果是使用字串
輸入:
沒有空白字元的變數
如果是使用陣列
輸入:
由空白字元分開的變數
*/
