#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    Node* objptr_left;
    Node* objptr_right;
    Node* objptr_Previous;
    int Node_value;

    Node(){
        objptr_left=NULL;
        objptr_right=NULL;
        objptr_Previous=NULL;
        Node_value=0;
    }

    void Buildtree(vector <int>& int_vector,int vector_size,Node* objptr_Root){
        objptr_Root->Node_value=int_vector[0];
        for(int cnt=1;cnt<vector_size;cnt++){
            Node* objptr_Child=new Node();
            objptr_Child->Node_value=int_vector[cnt];
            Node* objptr_Current=objptr_Root;
            FindPosition(objptr_Child, objptr_Current);
            objptr_Child->objptr_Previous=objptr_Current;
        }
    }

    void FindPosition(Node* objptr_Child, Node* objptr_Current){
        if(objptr_Child->Node_value > objptr_Current->Node_value){
            if(objptr_Current->objptr_right==NULL){
                objptr_Current->objptr_right=objptr_Child;
            }
            else{
                FindPosition(objptr_Child, objptr_Current->objptr_right);
            }
        }
        else if(objptr_Child->Node_value < objptr_Current->Node_value){
            if(objptr_Current->objptr_left==NULL){
                objptr_Current->objptr_left=objptr_Child;
            }
            else{
                FindPosition(objptr_Child, objptr_Current->objptr_left);
            }
        }
    }

    int FindTreeHeight(Node* objptr_Root){
        if(objptr_Root==NULL){
            return 0;
        }
        else{
            int LeftDepth=FindTreeHeight(objptr_Root->objptr_left);
            int RightDepth=FindTreeHeight(objptr_Root->objptr_right);
            if(LeftDepth > RightDepth){
                return (LeftDepth+1);
            }
            else{
                return (RightDepth+1);
            }
        }
    }

};

int main(){
    vector <int> int_vector;
    int int_msg=0;
    char char_msg;
    while(cin>>int_msg){
        cin.get(char_msg);
        int_vector.push_back(int_msg);
        if(char_msg=='\n'){
            break;
        }
    }
    int vector_size=int_vector.size();
    int int_number=0;
    Node* objptr_Root=new Node();
    objptr_Root->Buildtree(int_vector, vector_size, objptr_Root);
    int_number=objptr_Root->FindTreeHeight(objptr_Root);
    cout<<int_number<<"\n";
    return 0;
}
