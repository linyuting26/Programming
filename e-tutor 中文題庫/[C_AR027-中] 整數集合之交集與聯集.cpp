#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> vec_A;
    vector <int> vec_B;
    vector <int> vec_answer;
    vector <int> vec_answer2;
    int int_ary[8]={};
    //cin value
    for(int cnt=0;cnt<8;cnt++)
    {
        cin>>int_ary[cnt];
        if(cnt>=0&&cnt<=2)
        {
            vec_A.push_back(int_ary[cnt]);
        }
        else if(cnt==3)
        {
            int counter=0;
            for(int cnt2=0;cnt2<3;cnt2++)
            {
                if(int_ary[cnt]==int_ary[cnt2])
                {
                    vec_A.erase(vec_A.begin()+cnt2-counter);
                    counter++;
                }
            }
        }
        else if(cnt>=4&&cnt<=6)
        {
            vec_B.push_back(int_ary[cnt]);
        }
        else if(cnt==7)
        {
            int temp=0;
            int counter=0;
            for(int cnt3=4;cnt3<7;cnt3++)
            {
                if(int_ary[cnt]==int_ary[cnt3])
                {
                    vec_B.erase(vec_B.begin()+temp-counter);
                    counter++;
                }
                temp++;
            }
        }
    }
    //cout bool empty set
    if(vec_A.empty()||vec_B.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        //sort
        sort(vec_A.begin(),vec_A.end());
        sort(vec_B.begin(),vec_B.end());
        //cout A Set
        for(int cnt=0;cnt<vec_A.size();cnt++)
        {
            if(cnt==vec_A.size()-1)
            {
                cout<<vec_A[cnt]<<"\n";
            }
            else
            {
                cout<<vec_A[cnt]<<",";
            }
            vec_answer2.push_back(vec_A[cnt]);
        }
        //cout B Set
        for(int cnt=0;cnt<vec_B.size();cnt++)
        {
            if(cnt==vec_B.size()-1)
            {
                cout<<vec_B[cnt]<<"\n";
            }
            else
            {
                cout<<vec_B[cnt]<<",";
            }
            vec_answer2.push_back(vec_B[cnt]);
        }
        // cout bool subset
        int counter=0;
        for(int cnt=0;cnt<vec_A.size();cnt++)
        {
            for(int cnt2=0;cnt2<vec_B.size();cnt2++)
            {
                if(vec_A[cnt]==vec_B[cnt2])
                {
                    counter++;
                    vec_answer.push_back(vec_A[cnt]);
                    break;
                }
            }
        }
        if(counter==vec_A.size())
        {
            cout<<"T"<<"\n";
        }
        else
        {
            cout<<"F"<<"\n";
        }
        //cout intersection
        if(vec_answer.empty())
        {
            cout<<"empty\n";
        }
        else
        {
            for(int cnt=0;cnt<vec_answer.size();cnt++)
            {
                if(cnt==vec_answer.size()-1)
                {
                    cout<<vec_answer[cnt]<<"\n";
                }
                else
                {
                    cout<<vec_answer[cnt]<<",";
                }
            }
        }
        //cout union_of
        for(int cnt=0;cnt<vec_answer2.size();cnt++)
        {
            for(int cnt2=cnt;cnt2<(vec_answer2.size()-1);cnt2++)
            {
                if(vec_answer2[cnt]==vec_answer2[cnt2+1])
                {
                    vec_answer2.erase(vec_answer2.begin()+(cnt2+1));
                }
            }
        }
        sort(vec_answer2.begin(),vec_answer2.end());
        for(int cnt=0;cnt<vec_answer2.size();cnt++)
        {
            if(cnt==vec_answer2.size()-1)
            {
                cout<<vec_answer2[cnt]<<"\n";
            }
            else
            {
                cout<<vec_answer2[cnt]<<",";
            }
        }
    }
    return 0;
}
