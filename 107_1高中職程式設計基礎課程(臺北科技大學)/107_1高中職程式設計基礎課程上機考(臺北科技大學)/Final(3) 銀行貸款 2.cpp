#include <iostream>
using namespace std;

int main(){
    int int_m=-1;  //the number of the departments
    int int_n=-1;  //the number of the projects
    cin>>int_m>>int_n;
    int allocation[int_m*int_n];
    int Max[int_m*int_n];
    int available[int_m];
    int need[int_m*int_n];
    for(int cnt=0;cnt<(int_m*int_n);cnt++)
    {
        cin>>allocation[cnt];
    }
    for(int cnt=0;cnt<(int_m*int_n);cnt++)
    {
        cin>>Max[cnt];
    }
    for(int cnt=0;cnt<int_m;cnt++)
    {
        cin>>available[cnt];
    }
    for(int cnt=0;cnt<(int_m*int_n);cnt++)
    {
        need[cnt]=Max[cnt]-allocation[cnt];
    }  //calculate the number of need
    int answerorder[int_n]={0};
    int order[int_n]={0};
    int frequency=0;
    int answerfrequency=0;
    for(int cnt=0;cnt<int_n;cnt++)//第幾筆資料開始
    {
        int counter=0;
        int number[int_m*int_n]={-1};
        for(int cnt2=0;cnt2<(int_m*int_n);cnt2++)
        {
            if(number[cnt2]==-1)//判斷是否做過
            {
                if(available[cnt2]>=need[cnt2-(cnt*int_m)])
                {
                    counter++;
                    cout<<counter<<endl;
                    number[cnt2]=-2;
                   if(counter==int_m)
                    {
                        int tempcnt2=cnt2;
                        frequency++;//完成幾個計畫
                        order[frequency-1]=((cnt2/int_m)+1);
                        for(int cnt4=int_m-1;cnt4>=0;cnt4++)
                        {
                            available[cnt4]=available[cnt4]+allocation[tempcnt2];
                            tempcnt2--;
                        }
                        if(cnt2==((int_m*int_n)-1))
                        {
                            if(frequency>answerfrequency)
                            {
                                answerfrequency=frequency;
                                for(int cnt3=0;cnt3<frequency;cnt3++)
                                {
                                    answerorder[cnt3]=order[cnt3];
                                }
                            }
                            break;
                        }//最後一個計劃
                        else
                        {
                            cnt2=-1;
                        }
                    }
                }
                else
                {
                    cnt2=((((cnt2/int_m)+1)*int_m)-1);
                    for(int cnt4=cnt2;cnt4>=(cnt2+1-int_m);cnt4--)
                    {
                        number[cnt4]=-1;
                    }
                    if(cnt2==((int_m*int_n)-1))
                    {
                        if(frequency>answerfrequency)
                        {
                            answerfrequency=frequency;
                            for(int cnt3=0;cnt3<frequency;cnt3++)
                            {
                                answerorder[cnt3]=order[cnt3];
                            }
                        }
                    }
                }
            }
        }
    }
    if(answerfrequency==int_n)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    for(int cnt=0;cnt<answerfrequency;cnt++)
    {
        if(cnt==(answerfrequency-1))
        {
            cout<<answerorder[cnt]<<endl;
        }
        else
        {
            cout<<answerorder[cnt]<<",";
        }
    }
    return 0;
}
