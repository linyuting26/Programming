#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct activity{
    string name;
    string strarttime;
    string endtime;
    int reward;
};

struct CompareAlg{
    public: bool operator () (activity& obj_prev, activity& obj_next){
        bool bool_return=false;
        if((obj_prev.strarttime).compare(obj_next.strarttime)>0)
        {
            bool_return=false;
        }
        else if((obj_prev.strarttime).compare(obj_next.strarttime)<0)
        {
            bool_return=true;
        }
        else
        {
            if((obj_prev.endtime).compare(obj_next.endtime)>0)
            {
                bool_return=true;
            }
            else
            {
                bool_return=false;
            }
        }
        return bool_return;
    }
};

int main(){
    int int_n=0;
    cin>>int_n;
    activity people_array[int_n];
    for(int cnt=0;cnt<int_n;cnt++)
    {
        cin>>people_array[cnt].name>>people_array[cnt].strarttime;
        cin>>people_array[cnt].endtime>>people_array[cnt].reward;
    }
    CompareAlg obj_compare;
    sort(people_array,people_array+int_n,obj_compare);
    vector <string> vec;
    int int_max=0;
    for(int cnt=0;cnt<(int_n-1);cnt++)
    {
        if((people_array[int_n].endtime).compare(people_array[int_n+1].strarttime))
        {

        }
    }
    return 0;
}
