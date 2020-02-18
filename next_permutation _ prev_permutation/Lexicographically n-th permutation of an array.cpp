#include<bits/stdc++.h>
using namespace std;

int main()
{
    char char_array[13]={'G', 'E', 'E', 'K', 'S', 'F', 'O', 'R', 'G', 'E', 'E', 'K', 'S'};
    sort(char_array, char_array+13);
    int number=0;
    cin>>number;
    long long int counter=1;
    while(next_permutation(char_array, char_array+13)){
        counter++;
        if(counter==number){
            break;
        }
    }
    for(int cnt=0;cnt<13;cnt++){
        if(cnt==12){
            cout<<char_array[cnt]<<"\n";
        }
        else{
            cout<<char_array[cnt]<<" ";
        }
    }
	return 0;
}
