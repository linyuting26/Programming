#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Object{
public:
    Object(char ch,float v,float w){
        name = ch;
        value = v;
        weight = w;
    }
    char name;
    float value;
    float weight;
};
vector <Object> Object_vec;
cin>>char_name;
Object_vec.push_back(new Object('a',123,456));
int main(){
    Object ary[5];
    Object backpack[5];
    Object ground[5];
    float total_value=0.0f;
    float total_weight=0.0f;
    for(int cnt=0;cnt<5;cnt++){
        cin>>ary[cnt].name>>ary[cnt].value>>ary[cnt].weight;
    }
    int counter=0;
    for(int cnt=0;cnt<5;cnt++){
        if(total_weight+ary[cnt].weight<=20.0f){
            total_weight+=ary[cnt].weight;
            total_value+=ary[cnt].value;
            backpack[counter]=ary[cnt];
            counter++;
        }
        else{
            int temp=0;
            for(int cnt2=counter-1;cnt2>=0;cnt2--){
                if(backpack[cnt2].value<=ary[cnt].value && total_weight-backpack[cnt2].weight+ary[cnt].weight<=20.0f){
                    if(temp>0){
                        total_weight=total_weight-backpack[cnt2].weight+ary[cnt].weight;
                        total_value=total_value-backpack[cnt2].value+ary[cnt].value;
                        int number=cnt2;
                        for(int cnt3=temp-1;cnt3>=0;cnt3--){
                            backpack[number]=ground[cnt3];
                            number++;
                        }
                        backpack[number]=ary[cnt];
                    }
                    else{
                        total_weight=total_weight-backpack[cnt2].weight+ary[cnt].weight;
                        total_value=total_value-backpack[cnt2].value+ary[cnt].value;
                        backpack[cnt2]=ary[cnt];
                    }
                    break;
                }
                else{
                    ground[temp]=backpack[cnt2];
                    temp++;
                }
            }
        }
    }
    for(int cnt=counter-1;cnt>=0;cnt--){
        cout<<fixed<<setprecision(1)<<backpack[cnt].name<<" "<<backpack[cnt].value<<" "<<backpack[cnt].weight<<"\n";
    }
    cout<<"weight:"<<total_weight<<"\n";
    cout<<"value:"<<total_value<<"\n";
    return 0;
}
