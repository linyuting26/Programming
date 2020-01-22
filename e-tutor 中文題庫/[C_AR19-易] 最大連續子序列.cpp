#include <iostream>
using namespace std;

int main(){
    int int_n=0;
    cin>>int_n;
    int ary[int_n]={};
    for(int cnt=0;cnt<int_n;cnt++)
    {
        cin>>ary[cnt];
    }
    int counter=0;
    int answercounter=0;
    for(int cnt=0;cnt<int_n;cnt++)
    {
        for(int cnt2=cnt;cnt2<int_n;cnt2++)
        {
            counter=0;
            if(ary[cnt]==ary[cnt2+1])
            {
                counter++;
                int temp=(cnt+1);
                for(int cnt3=(cnt2+1);cnt3<int_n;cnt3++)
                {
                    if(cnt3<(int_n-1))
                    {
                        if(ary[temp]==ary[cnt3+1])
                        {
                            counter++;
                            temp++;
                        }
                        else if(ary[temp]!=ary[cnt3+1])
                        {
                            temp--;
                            if(counter>answercounter)
                            {
                                answercounter=counter;
                            }
                            counter=0;
                            if(ary[temp]==ary[cnt3+1])
                            {
                                counter++;
                                temp++;
                            }
                        }
                    }
                }
                if(counter>answercounter)
                {
                    answercounter=counter;
                }
            }
        }
    }
    cout<<answercounter<<endl;
    return 0;
}
