#include <iostream>
#include <vector>
using namespace std;

void Get_inorder(vector <char>& char_vector, int index, int& counter, int int_last, int number_of_elements);
void Get_Preorder(vector <char>& char_vector, int index, int& counter, int int_last, int number_of_elements);

int main(){
    vector <char> char_vector;
    int int_msg=0, int_start=0, int_last=0, flag=0;
    int counter1=0, counter2=0, number_of_elements=0;
    char char_msg;
    int char_vector_size=char_vector.size();
    while(cin>>int_msg){
        if(int_msg==-1){
            break;
        }
        int_last=int_msg;
        if(flag==0){
            int_start=int_msg;
            flag=1;
        }
        int temp_size=char_vector_size;
        cin>>char_msg;
        for(int cnt=temp_size;cnt<=int_msg;cnt++){
            char_vector.push_back('0');
        }
        char_vector.at(int_msg)=char_msg;
        number_of_elements++;
        char_vector_size=char_vector.size();
    }
    Get_inorder(char_vector, int_start, counter1, int_last, number_of_elements);
    cout<<"\n";
    Get_Preorder(char_vector, int_start, counter2, int_last, number_of_elements);
    cout<<"\n";
    return 0;
}

void Get_inorder(vector <char>& char_vector, int index, int& counter1, int int_last, int number_of_elements){
    if(index>=char_vector.size() || char_vector[index]=='0'){
        return;
    }
    else{
        Get_inorder(char_vector, 2*index, counter1, int_last, number_of_elements);
        counter1++;
        if(counter1==number_of_elements){
            cout<<char_vector[index];
        }
        else{
            cout<<char_vector[index]<<" ";
        }
        Get_inorder(char_vector, (2*index+1), counter1, int_last, number_of_elements);
    }
}

void Get_Preorder(vector <char>& char_vector, int index, int& counter2, int int_last, int number_of_elements){
    if(index>=char_vector.size() || char_vector[index]=='0'){
        return;
    }
    else{
        counter2++;
        if(counter2==number_of_elements){
            cout<<char_vector[index];
        }
        else{
            cout<<char_vector[index]<<" ";
        }
        Get_Preorder(char_vector, 2*index, counter2, int_last, number_of_elements);
        Get_Preorder(char_vector, (2*index+1), counter2, int_last, number_of_elements);
    }
}
