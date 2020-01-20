#include <iostream>
using namespace std;

int main(){
    int int_temp[4][2]={{0,-1},{0,1},{1,0},{1,0}};
    int int_T=0;
    cin>>int_T;
    for(int cnt=0;cnt<int_T;cnt++)
    {
        int int_N=0,int_S=0;
        cin>>int_N>>int_S;
        char char_land[int_N][int_N];
        for(int cnt=0;cnt<int_N;cnt++)
        {
            for(int cnt2=0;cnt2<int_N;cnt2++)
            {
                char_land[cnt][cnt2]='x';
            }
        }
        int temp=0;
        int temp2=(int_N-1);
        for(int cnt=0;cnt<int_N;cnt++)
        {
            if(int_S==1)
            {
                if(cnt==0)
                {
                    char_land[cnt][temp2]='*';
                }
                else
                {
                    char_land[cnt+int_temp[0][0]][temp2+int_temp[0][1]]='*';
                    temp2=temp2+int_temp[0][1];
                }
            }
            else if(int_S==2)
            {
                if(cnt==0)
                {
                    char_land[cnt][temp]='*';
                }
                else
                {
                    char_land[cnt+int_temp[1][0]][temp+int_temp[1][1]]='*';
                    temp=temp+int_temp[1][1];
                }
            }
            else if(int_S==3)
            {
                char_land[cnt][int_N-1]='*';
            }
            else if(int_S==4)
            {
                char_land[cnt][0]='*';
            }
        }
        for(int cnt=0;cnt<int_N;cnt++)
        {
            for(int cnt2=0;cnt2<int_N;cnt2++)
            {
                if(cnt2==(int_N-1))
                {
                    cout<<char_land[cnt][cnt2]<<"\n";
                }
                else
                {
                    cout<<char_land[cnt][cnt2]<<" ";
                }
            }
        }
    }
    return 0;
}
