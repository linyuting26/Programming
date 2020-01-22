#include <iostream>
using namespace std;

int main(){
    int A_row=0;
    int A_column=0;
    cin>>A_row>>A_column;
    int A_array[A_row][A_column];
    for(int cnt=0;cnt<A_row;cnt++)
    {
        for(int cnt2=0;cnt2<A_column;cnt2++)
        {
            cin>>A_array[cnt][cnt2];
        }
    }
    int B_row=0;
    int B_column=0;
    cin>>B_row>>B_column;
    int B_array[B_row][B_column];
    for(int cnt=0;cnt<B_row;cnt++)
    {
        for(int cnt2=0;cnt2<B_column;cnt2++)
        {
            cin>>B_array[cnt][cnt2];
        }
    }
    int answer_array[A_row*A_row];
    int counter=0;
    for(int cnt=0;cnt<A_row;cnt++)//2
    {
        for(int cnt2=0;cnt2<B_column;cnt2++)//2
        {
            int total=0;
            for(int cnt3=0;cnt3<A_column;cnt3++)//3
            {
                total+=(A_array[cnt][cnt3]*B_array[cnt3][cnt2]);
            }
            answer_array[counter]=total;
            counter++;
        }
    }
    counter=0;
    for(int cnt=0;cnt<A_row;cnt++)
    {
        for(int cnt2=0;cnt2<B_column;cnt2++)
        {
            if(cnt2==(B_column-1))
            {
                cout<<answer_array[counter];
            }
            else
            {
                cout<<answer_array[counter]<<" ";
            }
            counter++;
        }
        cout<<"\n";
    }
    return 0;
}
