#include <iostream>
#include <algorithm>
using namespace std;

struct people{
    public: int int_Favorability;
    public: int int_Boynumber;
    public: int int_girlnumber;
};

struct CompareAlg{
    public: bool operator() (people& obj_Prev,people& obj_Next){//
        bool bool_Return=false;
        if(obj_Prev.int_Favorability>obj_Next.int_Favorability){
            bool_Return=true;
        }
        else if(obj_Prev.int_Favorability<obj_Next.int_Favorability){
            bool_Return=false;
        }
        return bool_Return;
    }
};

int main(){
    people main;
    int number=0;
    cin>>number;
    people int_array[number*number];
    int counter=0;
    bool bool_boy[number]={false};
    bool bool_girl[number]={false};
    for(int cnt2=1;cnt2<=number;cnt2++)
    {
        for(int cnt3=1;cnt3<=number;cnt3++)
        {
            cin>>int_array[counter].int_Favorability;
            int_array[counter].int_Boynumber=cnt2;
            int_array[counter].int_girlnumber=cnt3;
            counter++;
        }
    }
    CompareAlg obj_Compare;
    sort(int_array,int_array+(number*number),obj_Compare);
    for(int cnt=0;cnt<(number*number);cnt++)
    {
        if(bool_boy[int_array[cnt].int_Boynumber-1]==false&&bool_girl[int_array[cnt].int_girlnumber-1]==false)
        {
            cout<<"boy "<<int_array[cnt].int_Boynumber<<" pair with girl "<<int_array[cnt].int_girlnumber<<"\n";
            bool_boy[int_array[cnt].int_Boynumber-1]=true;
            bool_girl[int_array[cnt].int_girlnumber-1]=true;
        }
    }
    return 0;
}
