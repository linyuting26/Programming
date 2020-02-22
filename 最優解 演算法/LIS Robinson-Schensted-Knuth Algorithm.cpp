#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LIS(vector <int>& basic_vector, vector <int>& position_vector, int& counter);
void Cout_process(vector <int>& lis_vector, vector <int>& position_vector, int& counter);
void Cout_result(vector <int>& lis_vector, vector <int>& position_vector, int vector_size);

int main(){
    vector <int> basic_vector;
    vector <int> position_vector;
    int number=0, counter=0;
    char char_msg;
    while(cin>>number){
        cin.get(char_msg);
        basic_vector.push_back(number);
        if(char_msg=='\n'){
            break;
        }
    }
    cout<<"Longest Increasing Subsequence's length:"<<LIS(basic_vector, position_vector, counter)<<"\n";
    return 0;
}

int LIS(vector <int>& basic_vector, vector <int>& position_vector, int& counter){
    vector <int> lis_vector;
    if(basic_vector.size()==0){
        return 0;
    }
    else{
        lis_vector.push_back(basic_vector[0]);
        position_vector.push_back(1);
        for(int cnt=1;cnt<basic_vector.size();cnt++){
            int temp=basic_vector[cnt];
            if(temp>lis_vector.back()){
                lis_vector.push_back(temp);
                position_vector.push_back(lis_vector.size());
            }
            else{
                vector <int>::iterator position=lower_bound(lis_vector.begin(), lis_vector.end(), temp);
                *lower_bound(lis_vector.begin(), lis_vector.end(), temp)=temp;
                position_vector.push_back(position-lis_vector.begin()+1);
            }
            Cout_process(lis_vector, position_vector, counter);
        }
    }
    Cout_result(basic_vector, position_vector, lis_vector.size());
    return lis_vector.size();
}

void Cout_process(vector <int>& lis_vector, vector <int>& position_vector, int& counter){
    cout<<"Step "<<counter<<":\n";
    cout<<"temp LIS :";
    for(int cnt=0;cnt<lis_vector.size();cnt++){
        if(cnt==(lis_vector.size()-1)){
            cout<<lis_vector[cnt]<<"\n";
        }
        else{
            cout<<lis_vector[cnt]<<" ";
        }
    }
    counter++;
    cout<<"position :";
    for(int cnt=0;cnt<position_vector.size();cnt++){
        if(cnt==(position_vector.size()-1)){
            cout<<position_vector[cnt]<<"\n\n";
        }
        else{
            cout<<position_vector[cnt]<<" ";
        }
    }
}

void Cout_result(vector <int>& basic_vector, vector <int>& position_vector, int vector_size){
    vector <int> answer_vector;
    cout<<"result:";
    for(int cnt=(basic_vector.size()-1);cnt>=0;cnt--){
        if(position_vector[cnt]==vector_size){
            answer_vector.push_back(basic_vector[cnt]);
            vector_size--;
        }
    }
    for(int cnt=(answer_vector.size()-1);cnt>=0;cnt--){
        if(cnt==0){
            cout<<answer_vector[cnt]<<"\n\n";
        }
        else{
            cout<<answer_vector[cnt]<<" ";
        }
    }
}
