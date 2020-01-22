#include <iostream>
#include <vector>
using namespace std;
int fn_find_direction(char* charptr_array1D,char* charptr_target1D,int* intptr_arraylength,int int_N,int int_M,int round);

int main(){
    int int_N=0;
    int int_M=0;
    int correct=0;
    cin>>int_N>>int_M;
    char char_array[int_N][int_N];
    for(int cnt=0;cnt<int_N;cnt++)
    {
        for(int cnt2=0;cnt2<int_N;cnt2++)
        {
            string str_msg="";
            cin>>str_msg[cnt2];
            char_array[cnt][cnt2]=str_msg[cnt2];
        }
    }
    string str_target[int_M]="";
    char char_target[int_M*100];
    int array_length[int_M];
    for(int cnt=0;cnt<int_M;cnt++)
    {
        cin>>str_target[cnt];
        array_length[cnt]=str_target[cnt].length();
    }
    int counter=0;
    for(int cnt=0;cnt<int_M;cnt++)
    {
        for(int cnt2=0;cnt2<array_length[cnt];cnt2++)
        {
            char_target[counter]=(str_target[cnt])[cnt2];
            counter++;
        }
    }
    char* charptr_array1D=reinterpret_cast<char*>(char_array);
    char* charptr_target1D=reinterpret_cast<char*>(char_target);
    int* intptr_arraylength=reinterpret_cast<int*>(array_length);
    for(int cnt=0;cnt<int_M;cnt++)
    {
        int round=cnt;
        correct=fn_find_direction(charptr_array1D,charptr_target1D,intptr_arraylength,int_N,int_M,round);
        if(correct==1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}

int fn_find_direction(char* charptr_array1D,char* charptr_target1D,int* intptr_arraylength,int int_N,int int_M,int round)
{
    vector <int> int_vec;
    int total=0;
    char char_array[int_N][int_N];
    int counter=0;
    for(int cnt=0;cnt<int_N;cnt++)
    {
        for(int cnt2=0;cnt2<int_N;cnt2++)
        {
            char_array[cnt][cnt2]=*(charptr_array1D+counter);
            counter++;
        }
    }
    for(int cnt=0;cnt<round;cnt++)
    {
        total=total+*(intptr_arraylength+cnt);
    }
    for(int cnt=0;cnt<int_N;cnt++)
    {
        int nested=0;
        for(int cnt2=0;cnt2<int_N;cnt2++)
        {
            if(char_array[cnt][cnt2]!='.')
            {
                if(char_array[cnt][cnt2]==*(charptr_target1D+total))
                {
                    int bolar=0;
                    char_array[cnt][cnt2]='.';
                    int prev=cnt;
                    int last=cnt2;
                    for(int temp=(total+1);temp<(total+*(intptr_arraylength+round));temp++)
                    {
                        if(char_array[prev-1][last]==*(charptr_target1D+temp))//on
                        {
                            if(char_array[prev-1][last]!='.')
                            {
                                char_array[prev-1][last]='.';
                                if(temp==(total+*(intptr_arraylength+round)-1))
                                {
                                    bolar=1;
                                    int_vec.push_back(bolar);
                                    prev--;
                                }
                            }
                        }
                        else if(char_array[prev+1][last]==*(charptr_target1D+temp))//under
                        {
                            if(char_array[prev+1][last]!='.')
                            {
                                char_array[prev+1][last]='.';
                                if(temp==(total+*(intptr_arraylength+round)-1))
                                {
                                    bolar=1;
                                    int_vec.push_back(bolar);
                                    prev++;
                                }
                            }
                        }
                        else if(char_array[prev][last-1]==*(charptr_target1D+temp))//left
                        {
                            if(char_array[prev][last-1]!='.')
                            {
                                char_array[prev][last-1]='.';
                                if(temp==(total+*(intptr_arraylength+round)-1))
                                {
                                    bolar=1;
                                    int_vec.push_back(bolar);
                                    last--;
                                }
                            }
                        }
                        else if(char_array[prev][last+1]==*(charptr_target1D+temp))//right
                        {
                            if(char_array[prev][last+1]!='.')
                            {
                                char_array[prev][last+1]='.';
                                if(temp==(total+*(intptr_arraylength+round)-1))
                                {
                                    bolar=1;
                                    int_vec.push_back(bolar);
                                    last++;
                                }
                            }
                        }
                        else
                        {
                            bolar=0;
                            nested=-1;
                            int_vec.push_back(bolar);
                            break;
                        }
                    }
                }
            }
            if(nested==-1)
            {
                break;
            }
        }
    }
    int answer=1;
    for(int cnt=0;cnt<(int_vec.size()-1);cnt++)
    {
        answer=answer*int_vec[cnt]*int_vec[cnt+1];
    }
    return answer;
}
