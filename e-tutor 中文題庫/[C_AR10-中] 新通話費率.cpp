#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double Monthly_fee=0,time=0,calling_Fee=0;
    char char_msg;
    cin>>Monthly_fee;
    cin.get(char_msg);
    cin>>time;
    double ary1[4]={186,386,586,986};
    double ary2[4]={0.09,0.08,0.07,0.06};
    double ary3[4]={0.9,0.8,0.7,0.6};
    double ary4[4]={0.8,0.7,0.6,0.5};
    if(Monthly_fee==ary1[0])
    {
        calling_Fee=round(time*ary2[0]);
        if(calling_Fee<=ary1[0])
        {
            calling_Fee=ary1[0];
        }
        else if(calling_Fee>ary1[0]&&calling_Fee<=(ary1[0]*2))
        {
            calling_Fee=round(calling_Fee*ary3[0]);
        }
        else if(calling_Fee>(ary1[0]*2))
        {
            calling_Fee=round(calling_Fee*ary4[0]);
        }
        cout<<calling_Fee<<"\n";
    }
    else if(Monthly_fee==ary1[1])
    {
        calling_Fee=round(time*ary2[1]);
        if(calling_Fee<=ary1[1])
        {
            calling_Fee=ary1[1];
        }
        else if(calling_Fee>ary1[1]&&calling_Fee<=(ary1[1]*2))
        {
            calling_Fee=round(calling_Fee*ary3[1]);
        }
        else if(calling_Fee>(ary1[1]*2))
        {
            calling_Fee=round(calling_Fee*ary4[1]);
        }
        cout<<calling_Fee<<"\n";
    }
    else if(Monthly_fee==ary1[2])
    {
        calling_Fee=round(time*ary2[2]);
        if(calling_Fee<=ary1[2])
        {
            calling_Fee=ary1[2];
        }
        else if(calling_Fee>ary1[2]&&calling_Fee<=(ary1[2]*2))
        {
            calling_Fee=round(calling_Fee*ary3[2]);
        }
        else if(calling_Fee>(ary1[2]*2))
        {
            calling_Fee=round(calling_Fee*ary4[2]);
        }
        cout<<calling_Fee<<"\n";
    }
    else if(Monthly_fee==ary1[3])
    {
        calling_Fee=round(time*ary2[3]);
        if(calling_Fee<=ary1[3])
        {
            calling_Fee=ary1[3];
        }
        else if(calling_Fee>ary1[3]&&calling_Fee<=(ary1[3]*2))
        {
            calling_Fee=round(calling_Fee*ary3[3]);
        }
        else if(calling_Fee>(ary1[3]*2))
        {
            calling_Fee=round(calling_Fee*ary4[3]);
        }
        cout<<calling_Fee<<"\n";
    }
    return 0;
}
