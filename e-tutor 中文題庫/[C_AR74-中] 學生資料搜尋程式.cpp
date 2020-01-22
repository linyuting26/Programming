#include <iostream>
#include <string>
using namespace std;
struct student{
    string student_ID;
    string name;
    string department;
};

int main(){
    student ary[5]={{"123","Tom","DTGD"},{"456","Cat","CSIE"},{"789","Nana","ASIE"},{"321","Lim","DBA"},{"654","Won","FDD"}};
    int int_N=0;
    cin>>int_N;
    for(int cnt=0;cnt<int_N;cnt++)
    {
        int number=0;
        string imformation="";
        cin>>number>>imformation;
        for(int cnt2=0;cnt2<5;cnt2++)
        {
            if(number==1)
            {
                if((imformation).compare(ary[cnt2].student_ID)==0)
                {
                    cout<<ary[cnt2].student_ID<<" "<<ary[cnt2].name<<" "<<ary[cnt2].department<<"\n";
                }
            }
            else if(number==2)
            {
                if((imformation).compare(ary[cnt2].name)==0)
                {
                    cout<<ary[cnt2].student_ID<<" "<<ary[cnt2].name<<" "<<ary[cnt2].department<<"\n";
                }
            }
            else if(number==3)
            {
                if((imformation).compare(ary[cnt2].department)==0)
                {
                    cout<<ary[cnt2].student_ID<<" "<<ary[cnt2].name<<" "<<ary[cnt2].department<<"\n";
                }
            }
        }
    }
    return 0;
}
