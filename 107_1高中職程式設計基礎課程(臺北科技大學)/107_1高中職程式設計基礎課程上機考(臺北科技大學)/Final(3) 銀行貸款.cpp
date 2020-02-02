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
    int int_count=0;  //judge the number of the departments
    int int_temp=0;  //judge the number of the projects
    int int_counter=0;  //how many project have
    bool bool_confirm[int_n]={0};  //judge available bigger than need
    int cofirm[int_n]={};  //use array to store step
    int int_tempcount=0;//judge the first round of the number of the projects
    int flag=0;  //judge whether is the first round
    int int_answer=0;
    int array_answer[int_n]={};
    int int_round=0;
    int tempavailable[int_m];
    int int_tempcouunter=0;
    for(int cnt=0;cnt<(int_m*int_n);cnt++)
    {
        need[cnt]=Max[cnt]-allocation[cnt];
    }  //calculate the number of need
    for(int cnt=0;cnt<int_m;cnt++)
    {
        tempavailable[cnt]=available[cnt];
    }
    for(int cnt=0;cnt<int_n;cnt++)
    {
        if(flag==0)
        {
            int_tempcount=cnt;  //judge the first round of the number of the projects
            for(int cnt6=0;cnt6<int_m;cnt6++)
            {
                available[cnt]=tempavailable[cnt];
            }
        }
        if(bool_confirm[cnt]==0)
        {
            flag=1;
            for(int cnt2=0;cnt2<(int_m*int_n);cnt2++)
            {
                if(need[cnt2]<=available[cnt2-(int_temp*int_m)]&&int_count==(int_m-1))
                {
                    for(int cnt3=(cnt2-int_m+1);cnt3<=cnt2;cnt3++)
                    {
                        available[cnt3]=allocation[cnt3]+available[cnt3-(int_temp*int_m)];
                    }
                    bool_confirm[int_temp]=1;
                    cofirm[int_temp]=(int_temp+1);
                    cout<<cofirm[int_temp]<<endl;
                    int_counter++;
                    cnt=-1;
                    int_count=0;
                    int_temp=0;
                    break;
                }
                else if(need[cnt2]<=available[cnt2-(int_temp*int_m)])
                {
                    int_count++;
                }
                else
                {
                    int_count=0;
                    int_temp++;
                    cnt2=((int_temp*int_m)-1);
                }
                if(cnt2==((int_m*int_n)-1))
                {
                    if(int_counter==int_n)
                    {
                        cout<<"True"<<endl;
                        for(int cnt4=0;cnt4<int_n;cnt4++)
                        {
                            if(cnt4==(int_n-1))
                            {
                                cout<<cofirm[cnt4]<<endl;
                            }
                            else
                            {
                                cout<<cofirm[cnt4]<<",";
                            }
                        }
                        return 0;
                    }
                    else
                    {
                        if(int_tempcount==(int_n-1))
                        {
                            if(cnt2==((int_m*int_n)-1))
                            {
                                cout<<"False"<<endl;
                                return 0;
                            }
                            else
                            {
                                cout<<"False"<<endl;
                                for(int cnt4=0;cnt4<int_n;cnt4++)
                                {
                                    if(cnt4==int_n-1)
                                    {
                                        cout<<cofirm[cnt4]<<endl;
                                    }
                                    else
                                    {
                                        cout<<cofirm[cnt4]<<",";
                                    }
                                }
                                return 0;
                            }
                            int_round++;
                        }
                        else
                        {
                            for(int cnt5=0;cnt5<int_n;cnt5++)
                            {
                                array_answer[cnt5]=cofirm[cnt5];
                                int_answer=int_counter;
                            }
                            if(int_counter>int_tempcount&&int_round>1)
                            {
                                for(int cnt5=0;cnt5<int_n;cnt5++)
                                {
                                    cofirm[cnt5]=array_answer[cnt5];
                                    int_counter=int_answer;
                                }
                            }
                            int_tempcouunter=int_counter;
                            int_counter=0;
                            int_temp=0;
                            bool_confirm[int_n]={0};
                            cofirm[int_n]={};
                            int_count=0;
                            flag=0;
                            cnt=(int_tempcount+1);
                            break;
                        }// return the value of the variable and break to the first loop
                    }
                }
            }
        }
    }
    return 0;
}
