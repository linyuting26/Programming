#include <iostream>
#include <algorithm>
using namespace std;
int fn_IsSingle(int int_array[], int int_Size);
int fn_IsOnepair(int int_array[], int int_Size);
int fn_IsTriple(int int_array[], int int_Size);
int fn_IsStraight(int int_array[], int int_Size);
int fn_IsFullHouse(int int_array[], int int_Size);
int fn_IsTiki(int int_array[], int int_Size);
int fn_IsStraightFlush(int int_Bigarray[],int int_Smallarray[], int int_Size);

int main(){
    int int_array[13]={0}, array_number[14]={0}, array_straight[13]={0}, new_array_number[13]={0};
    int total=0;
    for(int cnt=0;cnt<13;cnt++)
    {
        cin>>int_array[cnt];
        array_number[int_array[cnt]%13+1]++;
    }
    sort(int_array,int_array+13);
    int counter=1;
    for(int cnt=0;cnt<13;cnt++)
    {
        array_straight[cnt]=int_array[cnt]/13;
        new_array_number[cnt]=array_number[counter];
        cout<<array_number[0]<<endl;
        counter++;
    }
    total+=fn_IsSingle(new_array_number,13);
    total+=fn_IsOnepair(new_array_number,13);
    total+=fn_IsTriple(new_array_number,13);
    total+=fn_IsStraight(new_array_number,13);
    total+=fn_IsFullHouse(new_array_number,13);
    total+=fn_IsTiki(new_array_number,13);
    total+=fn_IsStraightFlush(new_array_number,array_straight,13);
    //cout<<total<<"\n";
    return 0;
}

int fn_IsSingle(int int_array[], int int_Size)
{
    int total=13;
    return total;
}

int fn_IsOnepair(int int_array[], int int_Size)
{
    int total=0;
    for(int cnt=0;cnt<int_Size;cnt++)
    {
        if(int_array[cnt]==2)
        {
            total++;
        }
        else if(int_array[cnt]==3)
        {
            total+=3;
        }
        else if(int_array[cnt]==4)
        {
            total+=6;
        }
    }
    return total;
}

int fn_IsTriple(int int_array[], int int_Size)
{
    int total=0;
    for(int cnt=0;cnt<int_Size;cnt++)
    {
        if(int_array[cnt]==3)
        {
            total++;
        }
        else if(int_array[cnt]==4)
        {
            total+=4;
        }
    }
    return total;
}

int fn_IsStraight(int int_array[], int int_Size)
{
    int total=1, sum=0, counter=0;
    for(int cnt=0;cnt<10;cnt++)
    {
        counter=0;
        total=1;
        for(int cnt2=0;cnt2<5;cnt2++)
        {
            if(int_array[(cnt+cnt2)%13]>=1)
            {
                counter++;
                if(int_array[(cnt+cnt2)%13]>1)
                {
                    total*=int_array[(cnt+cnt2)%13];
                }
                if(counter==5)
                {
                    sum+=total;
                    break;
                }
            }
        }
    }
    return sum;
}

int fn_IsFullHouse(int int_array[], int int_Size)
{
    int total=0, total2=0;
    for(int cnt=0;cnt<13;cnt++)
    {
        if(int_array[cnt]==4)
        {
            total+=4;
        }
        else if(int_array[cnt]==3)
        {
            total++;
        }
        else if(int_array[cnt]==2)
        {
            total2++;
        }
    }
    return (total*total2);
}

int fn_IsTiki(int int_array[], int int_Size)
{
    int total=0;
    for(int cnt=0;cnt<13;cnt++)
    {
        if(int_array[cnt]==4)
        {
            total++;
        }
    }
    return (total*(int_Size-(total*4)));
}

int fn_IsStraightFlush(int int_Bigarray[],int int_Smallarray[], int int_Size)
{
    int sum=0;
    for(int cnt=0;cnt<10;cnt++)
    {
        int counter=0, counter2=0;
        for(int cnt2=0;cnt2<4;cnt2++)
        {
            if(int_Smallarray[(cnt+cnt2)%13]==int_Smallarray[(cnt+cnt2)%13+1])//花色
            {
                counter++;
            }
        }
        for(int cnt3=0;cnt3<5;cnt3++)
        {
            if(int_Bigarray[(cnt+cnt3)%13]>=1)//連續5張
            {
                counter2++;
            }
        }
        if(counter==4 && counter2==5)
        {
            sum++;
        }
    }
    return sum;
}
