#include <iostream>
using namespace std;
bool Fn_IsOnePair(int int_brand[],int int_size);
bool Fn_IsTwoPairs(int int_brand[],int int_size);
bool Fn_IsTriple(int int_brand[],int int_size);
bool Fn_IsFullHouse(int int_brand[],int int_size);
bool Fn_IsTiki(int int_brand[],int int_size);
bool Fn_IsStraight(int int_brand[],int int_size);
bool Fn_IsStraightFlush(int int_brand[],int int_color[],int int_size);

int main(){
    int int_array[5]={0};
    int int_brand[13]={0};
    int int_color[5];
    int int_map[8]={0,1,2,3,4,5,6,7};
    for(int cnt=0;cnt<5;cnt++){
        cin>>int_array[cnt];
        int_brand[((int_array[cnt]/10)-1)]++;
        int_color[cnt]=(int_array[cnt]%10);
    }
    bool Yes=false;

    Yes=Fn_IsStraightFlush(int_brand, int_color, 5);
    if(Yes==true){
        cout<<int_map[7]<<"\n";
    }
    else{
        Yes=Fn_IsTiki(int_brand, 5);
        if(Yes==true){
            cout<<int_map[5]<<"\n";
        }
        else{
            Yes=Fn_IsFullHouse(int_brand, 5);
            if(Yes==true){
                cout<<int_map[4]<<"\n";
            }
            else{
                Yes=Fn_IsStraight(int_brand, 5);
                if(Yes==true){
                    cout<<int_map[6]<<"\n";
                }
                else{
                    Yes=Fn_IsTriple(int_brand, 5);
                    if(Yes==true){
                        cout<<int_map[3]<<"\n";
                    }
                    else{
                        Yes=Fn_IsTwoPairs(int_brand, 5);
                        if(Yes==true){
                            cout<<int_map[2]<<"\n";
                        }
                        else{
                            Yes=Fn_IsOnePair(int_brand, 5);
                            if(Yes==true){
                            cout<<int_map[1]<<"\n";
                            }
                            else{

                                cout<<int_map[0]<<"\n";
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

bool Fn_IsOnePair(int int_brand[],int int_size){
    bool Yes=false;
    for(int cnt=0;cnt<13;cnt++){
        if(int_brand[cnt]>=2){
            Yes=true;
            break;
        }
    }
    return Yes;
}

bool Fn_IsTwoPairs(int int_brand[],int int_size){
    bool Yes=false;
    int counter=0;
    for(int cnt=0;cnt<13;cnt++){
        if(int_brand[cnt]>=2){
            counter++;
            if(counter==2){
                Yes=true;
                break;
            }
        }
    }
    return Yes;
}

bool Fn_IsTriple(int int_brand[],int int_size){
    bool Yes=false;
    for(int cnt=0;cnt<13;cnt++){
        if(int_brand[cnt]>=3){
            Yes=true;
            break;
        }
    }
    return Yes;
}

bool Fn_IsFullHouse(int int_brand[],int int_size){
    bool Yes=false, Yes2=false;
    for(int cnt=0;cnt<13;cnt++){
        if(int_brand[cnt]>=3){
            Yes=true;
        }
        else if(int_brand[cnt]>=2){
            Yes2=true;
        }
    }
    return (Yes&Yes2);
}

bool Fn_IsTiki(int int_brand[],int int_size){
    bool Yes=false;
    for(int cnt=0;cnt<13;cnt++){
        if(int_brand[cnt]>=4){
            Yes=true;
            break;
        }
    }
    return Yes;
}

bool Fn_IsStraight(int int_brand[],int int_size){
    bool Yes=false;
    for(int cnt=0;cnt<13;cnt++){
        int total=1;
        for(int cnt2=0;cnt2<5;cnt2++){
            total*=int_brand[(cnt+cnt2)%13];
        }
        if(total>=1){
            Yes=true;
            break;
        }
    }
    return Yes;
}

bool Fn_IsStraightFlush(int int_brand[],int int_color[],int int_size){
    bool Yes=false;
    bool Yes2=true;
    for(int cnt=0;cnt<4;cnt++){
        if(int_color[cnt]!=int_color[cnt+1]){
            Yes2=false;
            break;
        }
    }
    for(int cnt=0;cnt<13;cnt++){
        int total=1;
        for(int cnt2=0;cnt2<5;cnt2++){
            total*=int_brand[(cnt+cnt2)%13];
        }
        if(Yes2==true&&total>=1){
            Yes=true;
            break;
        }
    }
    return Yes;
}
