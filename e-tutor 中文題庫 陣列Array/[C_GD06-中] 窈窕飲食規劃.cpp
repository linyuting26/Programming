#include <iostream>
#include <algorithm>
using namespace std;
class Food{
public:
    float weight;
    float calories;
    float cellulose;
};

class CompareAlg{
    public: bool operator() (Food& obj_Prev,Food& obj_Next){//
        bool bool_Return=false;
        if(obj_Prev.calories/obj_Prev.weight<obj_Next.calories/obj_Next.weight){
            bool_Return=true;
        }
        else if(obj_Prev.calories/obj_Prev.weight>obj_Next.calories/obj_Next.weight){
            bool_Return=false;
        }
        return bool_Return;
    }
};

class CompareAlg2{
    public: bool operator() (Food& obj_Prev,Food& obj_Next){//
        bool bool_Return=false;
        if(obj_Prev.cellulose/obj_Prev.weight<obj_Prev.cellulose/obj_Prev.weight){
            bool_Return=true;
        }
        else if(obj_Prev.cellulose/obj_Prev.weight>obj_Prev.cellulose/obj_Prev.weight){
            bool_Return=false;
        }
        return bool_Return;
    }
};

int main(){
    int int_W=0, int_N=0, int_Focus=0;
    cin>>int_W>>int_N>>int_Focus;
    Food float_array[int_N];
    float float_table[int_N]={0.0f};
    float float_value[int_N]={0.0f};
    float float_answer[int_N]={0.0f};
    for(int cnt=0;cnt<int_N;cnt++){
        cin>>float_array[cnt].weight>>float_array[cnt].calories>>float_array[cnt].cellulose;
        float_table[cnt]=float_array[cnt].weight;
    }
    int total_weight=0;
    float total_calories=0;
    float total_cellulose=0;
    if(int_Focus==1){
        CompareAlg obj_Compare;
        sort(float_array,float_array+int_N,obj_Compare);
        for(int cnt=0;cnt<int_N;cnt++){
            int temp=0;
            for(int cnt2=0;cnt2<int_N;cnt2++){
                if(float_array[cnt].weight==float_table[cnt2]){
                    temp=cnt2;
                    break;
                }
            }
            if(total_weight==int_W){
                break;
            }
            else if(total_weight<int_W){
                if(float_array[cnt].weight-int(float_array[cnt].weight)>0){
                    int number=0;
                    int value=0;
                    number=float_array[cnt].weight/1;
                    value=number/float_array[cnt].weight;
                    float_array[cnt].weight=number;
                    float_array[cnt].calories=float_array[cnt].calories*value;
                    float_array[cnt].cellulose=float_array[cnt].cellulose*value;
                    if(float_array[cnt].weight+total_weight>total_weight){
                        number=int_W-total_weight;
                        value=number/float_array[cnt].weight;
                        float_array[cnt].weight=number;
                        float_array[cnt].calories=float_array[cnt].calories*value;
                        float_array[cnt].cellulose=float_array[cnt].cellulose*value;
                    }
                }
                total_weight+=float_array[cnt].weight;
                float_answer[temp]=float_array[cnt].weight;
                total_calories+=float_array[cnt].calories;
                total_cellulose+=float_array[cnt].cellulose;
            }
        }
    }
    else if(int_Focus==2){
        CompareAlg2 obj_Compare2;
        sort(float_array,float_array+int_N,obj_Compare2);
         for(int cnt=0;cnt<int_N;cnt++){
            int temp=0;
            for(int cnt2=0;cnt2<int_N;cnt2++){
                if(float_array[cnt].weight==float_table[cnt2]){
                    temp=cnt2;
                    break;
                }
            }
            if(total_weight==int_W){
                break;
            }
            else if(total_weight<int_W){
                if(float_array[cnt].weight-int(float_array[cnt].weight)>0){
                    int number=0;
                    int value=0;
                    number=float_array[cnt].weight/1;
                    value=number/float_array[cnt].weight;
                    float_array[cnt].weight=number;
                    float_array[cnt].calories=float_array[cnt].calories*value;
                    float_array[cnt].cellulose=float_array[cnt].cellulose*value;
                    if(float_array[cnt].weight+total_weight>total_weight){
                        number=int_W-total_weight;
                        value=number/float_array[cnt].weight;
                        float_array[cnt].weight=number;
                        float_array[cnt].calories=float_array[cnt].calories*value;
                        float_array[cnt].cellulose=float_array[cnt].cellulose*value;
                    }
                }
                total_weight+=float_array[cnt].weight;
                float_answer[temp]=float_array[cnt].weight;
                total_calories+=float_array[cnt].calories;
                total_cellulose+=float_array[cnt].cellulose;
            }
        }
    }
    for(int cnt=0;cnt<int_N;cnt++){
        cout<<float_answer[cnt]<<" ";
    }
    cout<<total_calories<<" "<<total_cellulose<<"\n";
    return 0;
}
