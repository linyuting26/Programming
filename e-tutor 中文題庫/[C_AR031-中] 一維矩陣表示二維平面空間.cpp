#include<iostream>
using namespace std;

int main()
{
    int length=0;
    int position=0;
    cin>>length;
    string str_array[length][length];
    cin>>position;
    int ary_index[8];
    string ary_position[8];
    bool bolar[8];
    int ary_temp2[8][2]={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
    int point_x=0;
    int point_y=0;
    point_x=position/length;
    point_y=position%length;
    for(int cnt=0;cnt<8;cnt++)
    {
        if(point_x+ary_temp2[cnt][0]<0||point_y+ary_temp2[cnt][1]<0||point_x+ary_temp2[cnt][0]>=length||point_y+ary_temp2[cnt][1]>=length)
        {
            bolar[cnt]=false;
        }
        else
        {
            bolar[cnt]=true;
        }
    }
    for(int cnt=0;cnt<length;cnt++)
    {
        char alphabat=((cnt+17)+'0');
        string apend="";
        apend+=alphabat;
        int counter=0;
        for(int cnt2=1;cnt2<=length;cnt2++)
        {
            if(cnt2>9)
            {
                int temp=cnt2/10;
                apend+=(temp+'0');
                temp=cnt2%10;
                apend+=(temp+'0');
            }
            else
            {
                apend+=(cnt2+'0');
            }
            str_array[cnt][counter]=apend;
            counter++;
            apend="";
            apend+=alphabat;
        }
    }
    for(int cnt=0;cnt<8;cnt++)
    {
        if(bolar[cnt]==true)
        {
            ary_index[cnt]=((point_x+ary_temp2[cnt][0])*length)+(point_y+ary_temp2[cnt][1]);
            ary_position[cnt]=str_array[point_x+ary_temp2[cnt][0]][point_y+ary_temp2[cnt][1]];
        }
        else
        {
            ary_index[cnt]=-1;
            string str_msg="";
            str_msg+='-';
            str_msg+='1';
            ary_position[cnt]=str_msg;
        }
    }
    for(int cnt=0;cnt<8;cnt++)
    {
        cout<<ary_index[cnt]<<" ";
    }
    cout<<"\n";
    for(int cnt=0;cnt<8;cnt++)
    {
        cout<<ary_position[cnt]<<" ";
    }
    cout<<"\n";
    return 0;
}
