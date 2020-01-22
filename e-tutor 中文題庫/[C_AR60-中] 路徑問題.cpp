#include<iostream>
using namespace std;

int main()
{
    int int_m=0;
    cin>>int_m;
    for(int cnt=0;cnt<int_m;cnt++){
        int int_number=0;
        cin>>int_number;
        long long int int_array_2D[int_number+1][int_number+1]={0};
        for(int cnt2=0;cnt2<(int_number+1);cnt2++){
            for(int cnt3=0;cnt3<(int_number+1);cnt3++){
                if(cnt2==int_number){
                    int_array_2D[cnt2][cnt3]=1;
                }
                else{
                    int_array_2D[cnt2][cnt3]=0;
                }
            }
        }
        int counter=0;
        long long int answer=0;
        for(int cnt2=int_number-1;cnt2>=0;cnt2--){
            for(int cnt3=1+counter;cnt3<(int_number+1);cnt3++){
                int_array_2D[cnt2][cnt3]=int_array_2D[cnt2][cnt3-1]+int_array_2D[cnt2+1][cnt3]+int_array_2D[cnt2+1][cnt3-1];
                answer=int_array_2D[cnt2][cnt3];
            }
            counter++;
        }
        cout<<answer<<"\n";
    }
    return 0;
}
