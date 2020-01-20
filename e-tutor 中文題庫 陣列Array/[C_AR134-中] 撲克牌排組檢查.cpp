#include <iostream>
using namespace std;
bool fn_IsTiki(int* intptr_Card, int int_Size);
bool fn_IsFullHouse(int* intptr_Card, int int_Size);
bool fn_IsTriple(int* intptr_Card, int int_Size);
bool fn_IsTwopairs(int* intptr_Card, int int_Size);
bool fn_IsOnepair(int* intptr_Card, int int_Size);
bool fn_IsStraight(int int_array[], int int_Size);

int main(){
    int int_array[5]={0};
    int array_number[14]={0};
    bool Yes=false;
    for(int cnt=0;cnt<5;cnt++)
    {
        cin>>int_array[cnt];
        array_number[int_array[cnt]]++;
    }
    Yes=fn_IsTiki(array_number,5);
    if(Yes==true)
    {
        cout<<"tiki\n";
    }
    else
    {
        Yes=false;
        Yes=fn_IsFullHouse(array_number,5);
        if(Yes==true)
        {
            cout<<"full house\n";
        }
        else
        {
            Yes=false;
            Yes=fn_IsTriple(array_number,5);
            if(Yes==true)
            {
                cout<<"triple\n";
            }
            else
            {
                Yes=false;
                Yes=fn_IsTwopairs(array_number,5);
                if(Yes==true)
                {
                    cout<<"two pairs\n";
                }
                else
                {
                    Yes=false;
                    Yes=fn_IsOnepair(array_number,5);
                    if(Yes==true)
                    {
                        cout<<"one pair\n";
                    }
                    else
                    {
                        Yes=false;
                        Yes=fn_IsStraight(int_array,5);
                        if(Yes==true)
                        {
                            cout<<"straight\n";
                        }
                        else
                        {
                            cout<<"single\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}
bool fn_IsTiki(int* intptr_Card, int int_Size)
{
    bool bool_Is4=false;
    for(int cnt=0;cnt<13;cnt++)
    {
        switch(*(intptr_Card+cnt)){
        case 4:
            bool_Is4=true;
            break;
        }
    }
    return bool_Is4;
}

bool fn_IsFullHouse(int* intptr_Card, int int_Size)
{
    bool bool_Is3=false, bool_Is2=false;
    for(int cnt=0;cnt<13;cnt++)
    {
        switch(*(intptr_Card+cnt)){
        case 3:
            bool_Is3=true;
            break;
        case 2:
            bool_Is2=true;
            break;
        }
    }
    return (bool_Is3&bool_Is2);
}

bool fn_IsTriple(int* intptr_Card, int int_Size)
{
    bool bool_Is3=false;
    for(int cnt=0;cnt<13;cnt++)
    {
        switch(*(intptr_Card+cnt)){
        case 3:
            bool_Is3=true;
            break;
        }
    }
    return bool_Is3;
}

bool fn_IsTwopairs(int* intptr_Card, int int_Size)
{
    bool bool_Is2=false;
    int counter=0;
    for(int cnt=0;cnt<13;cnt++)
    {
        switch(*(intptr_Card+cnt)){
        case 2:
            counter++;
            if(counter==2)
            {
                bool_Is2=true;
                break;
            }
        }
    }
    return bool_Is2;
}

bool fn_IsOnepair(int* intptr_Card, int int_Size)
{
    bool bool_Is2=false;
    for(int cnt=0;cnt<13;cnt++)
    {
        switch(*(intptr_Card+cnt)){
        case 2:
            bool_Is2=true;
            break;
        }
    }
    return bool_Is2;
}

bool fn_IsStraight(int int_array[], int int_Size)
{
    bool bool_Straight=false;
    int counter=0;
    int flag=0;
    for(int cnt=0;cnt<13;cnt++)
    {
        if(flag==1)
        {
            break;
        }
        for(int cnt2=0;cnt2<4;cnt2++)
        {
            if(int_array[(cnt+cnt2)%13]==int_array[(cnt+cnt2+1)%13])
            {
                counter++;
                if(counter==5)
                {
                    bool_Straight=true;
                    flag=1;
                    break;
                }
            }
        }
    }
    return bool_Straight;
}
