#include <iostream>
#include <string>
using namespace std;

struct Node{
    Node* objptr_Par;
    Node* objptr_Child;
    int Node_value;
    Node(){
        objptr_Par=NULL;
        objptr_Child= NULL;
        Node_value=0;
    }
};

int main(){
    int int_n=0;
    char char_msg;
    Node* int_CurrNode=new Node();
    cin>>int_n;
    cin.get(char_msg);
    int_CurrNode->Node_value=int_n;
    while(cin>>int_n){
        Node* objptr_Child=new Node();
        cin.get(char_msg);
        objptr_Child->Node_value=int_n;
        int_CurrNode->objptr_Child=objptr_Child;
        objptr_Child->objptr_Par=int_CurrNode;
        int_CurrNode=objptr_Child;
        if(char_msg=='\n'){
            break;
        }
    }
    for(Node* objptr_Pos= int_CurrNode; objptr_Pos!=NULL;){
        if(objptr_Pos->objptr_Par==NULL){
            cout<< objptr_Pos->Node_value;
        }
        else{
            cout<< objptr_Pos->Node_value <<" ";
        }
        objptr_Pos= objptr_Pos->objptr_Par;
    }
    cout<<"\n";
    for(Node* objptr_Pos= int_CurrNode; objptr_Pos!=NULL;){
        Node* objptr_Tmp= objptr_Pos;
        objptr_Pos= objptr_Pos->objptr_Par;
        delete objptr_Tmp;
    }
    return 0;
}
