#include <iostream>
#include <vector>
using namespace std;

int main(){
    int int_number=0;
    cin>>int_number;
    for(int cnt=0;cnt<int_number;cnt++)
    {
        vector <int> int_vec;
        int target=0;
        int counter=0;
        int temp=0;
        char char_msg;
        while(cin>>temp)
        {
            cin.get(char_msg);
            int_vec.push_back(temp);
            counter++;
            if(char_msg=='\n')
            {
                break;
            }
        }
        target=int_vec[int_vec.size()-1];
        int_vec.erase(int_vec.begin()+int_vec.size()-1);
        int total=0;
        int int_value[int_vec.size()]={0};
        for(int cnt=0;cnt<int_vec.size();cnt++)
        {
            int int_front=0;
            if(target/int_vec[cnt]>0)
            {
                total+=target/int_vec[cnt];
                int_front=target/int_vec[cnt];
                target%=int_vec[cnt];
                int_value[cnt]=int_front;
            }
        }
        cout<<total<<"\n";
        for(int cnt=0;cnt<int_vec.size();cnt++)
        {
            cout<<int_vec[cnt]<<" "<<int_value[cnt]<<"\n";
        }
    }
    return 0;
}
