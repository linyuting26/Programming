#include <iostream>
using namespace std;

int main(){
    int int_number=0;
    cin>>int_number;
    int int_array[int_number][int_number]={0};
    int int_index[8][2]={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
    int int_answer[int_number][int_number]={0};
    for(int cnt=0;cnt<int_number;cnt++)
    {
        for(int cnt2=0;cnt2<int_number;cnt2++)
        {
            cin>>int_array[cnt][cnt2];
            int_answer[cnt][cnt2]=0;
        }
    }
    for(int cnt=0;cnt<int_number;cnt++)
    {
        for(int cnt2=0;cnt2<int_number;cnt2++)
        {
            if(int_array[cnt][cnt2]==0)
            {
                int total=0;
                for(int cnt3=0;cnt3<8;cnt3++)
                {
                    if(cnt+int_index[cnt3][0]>=0&&cnt+int_index[cnt3][0]<int_number&&cnt2+int_index[cnt3][1]>=0&&cnt2+int_index[cnt3][1]<int_number)
                    {
                        if(int_array[cnt+int_index[cnt3][0]][cnt2+int_index[cnt3][1]]==1)
                        {
                            total++;
                        }
                    }
                }
                int_answer[cnt][cnt2]=total;
            }
        }
    }
    for(int cnt=0;cnt<int_number;cnt++)
    {
        for(int cnt2=0;cnt2<int_number;cnt2++)
        {
            if(cnt2==(int_number-1))
            {
                cout<<int_answer[cnt][cnt2]<<"\n";
            }
            else
            {
                cout<<int_answer[cnt][cnt2]<<" ";
            }
        }
    }
    return 0;
}
