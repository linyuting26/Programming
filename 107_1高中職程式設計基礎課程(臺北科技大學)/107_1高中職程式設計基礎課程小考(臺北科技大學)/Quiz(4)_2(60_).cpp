#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int int_n=0;
    int int_m=0;
    cin>>int_n>>int_m;
    int ary1[int_m];
    int ary2[int_m];
    int ary3[int_n];
    for(int cnt=0;cnt<int_n;cnt++)
    {
        int int_count=0;
        int temp=0;
        int first=0;
        for(int cnt1=0;cnt1<int_m;cnt1++)
        {
            cin>>ary1[cnt1];
        }
        for(int cnt2=0;cnt2<int_m;cnt2++)
        {
            cin>>ary2[cnt2];
        }
        for(int cnt3=0;cnt3<int_m;cnt3++)
        {
            for(int cnt4=0;cnt4<int_m;cnt4++)
            {
                if(ary1[cnt3]==ary2[cnt4])
                {
                    int_count++;
                    break;
                }
            }
        }
        ary3[cnt]=int_count;
    }
    for(int cnt=0;cnt<int_n;cnt++)
    {
        cout<<ary3[cnt]<<endl;
    }
    return 0;
}
/*
�p�G�O�ϥΦr��
��J:
�S���ťզr�����ܼ�
�p�G�O�ϥΰ}�C
��J:
�Ѫťզr�����}���ܼ�
*/
