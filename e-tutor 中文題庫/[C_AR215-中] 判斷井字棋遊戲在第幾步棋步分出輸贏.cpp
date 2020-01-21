#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Tic_Tac_Toe{
public:
    int player;
    int x_axis;
    int y_axis;
};

int main(){
    vector <Tic_Tac_Toe> Object;
    string str_msg="";
    char char_msg;
    while(getline(cin,str_msg)){
        if(str_msg.empty()){
            break;
        }
        Tic_Tac_Toe Object_TTT;
        cin>>Object_TTT.player>>Object_TTT.x_axis>>Object_TTT.y_axis;
        Object.push_back(Object_TTT);
    }
    for(int cnt=0;cnt<Object.size();cnt++){
        cout<<Object[cnt].player<<" "<<Object[cnt].x_axis<<" "<<Object[cnt].y_axis<<"\n";
    }
    return 0;
}
