#include<iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL), cin.tie(0), cout.tie(0);
    int number=0;
    while(cin>>number){
        map <string, int> str_map;
        int counter=1;
        for(int cnt=0;cnt<number;cnt++){
            string str_msg="";
            cin>>str_msg;
            if(str_map.find(str_msg)==str_map.end()){
                str_map[str_msg]=counter;
                cout<<"New! "<<counter<<"\n";
                counter++;
            }
            else{
                cout<<"Old! "<<str_map[str_msg]<<"\n";
            }
        }
    }
    return 0;
}
