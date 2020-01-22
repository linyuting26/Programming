#include <iostream>
#include <string>
using namespace std;
int Fn_Get_Number(int int_number);
void Fn_Get_Value(int int_array[], int int_value,int int_number);



int main(){
    char char_Table[7]={'I','V','X','L','C','D','M'};
    int int_Table[7]={1,5,10,50,100,500,1000};
    string str_difference[6]={"IV","IX","XL","XC","CD","CM"};
    int int_difference[6]={4,9,40,90,400,900};
    int int_N=0;
    cin>>int_N;
    for(int cnt=0;cnt<int_N;cnt++)
    {
        int int_number=0, int_value=0;
        cin>>int_number;
        int_value=Fn_Get_Number(int_number);
        int int_array[int_value]={0};
        Fn_Get_Value(int_array, int_value, int_number);
        string str_answer="";
        for(int cnt2=int_value-1;cnt2>=0;cnt2--){
            int flag=0;
            for(int cnt3=0;cnt3<6;cnt3++){
                if(int_array[cnt2]==int_difference[cnt3]){
                    str_answer+=str_difference[cnt3];
                    flag=1;
                }
            }
            if(flag==1){
                continue;
            }
            else{
                for(int cnt3=6;cnt3>=0;cnt3--){
                    if(int_array[cnt2]>=int_Table[cnt3]){
                        while(int_array[cnt2]/int_Table[cnt3]>0){
                            str_answer+=char_Table[cnt3];
                            int_array[cnt2]-=int_Table[cnt3];
                        }
                        if(int_array[cnt2]>0){
                                while(int_array[cnt2]/int_Table[cnt3-1]>0){
                                str_answer+=char_Table[cnt3-1];
                                int_array[cnt2]-=int_Table[cnt3-1];
                            }
                        }
                        break;
                    }
                }
            }
        }
        cout<<str_answer<<"\n";
    }
    return 0;
}

int Fn_Get_Number(int int_number){
    int answer=0;
    while(int_number>0){
        int_number/=10;
        answer++;
    }
    return answer;
}

void Fn_Get_Value(int int_array[], int int_value,int int_number){
    for(int cnt2=0;cnt2<int_value;cnt2++){
        if(cnt2==0){
            int_array[cnt2]=int_number%10;
        }
        else{
            int temp=int_number%10;
            for(int cnt3=0;cnt3<cnt2;cnt3++){
                temp*=10;
                int_array[cnt2]=temp;
            }
        }
        int_number/=10;
    }
}
