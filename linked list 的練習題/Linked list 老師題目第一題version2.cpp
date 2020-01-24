#include <iostream>
#include <cstdlib>
#include <ctime>
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

    void Buildtree(int int_array[], int int_index, int int_size, Node* objptr_Root){
        objptr_Root->Node_value=int_array[int_index];
        for(int cnt=0;cnt<int_size;cnt++){
            if(cnt==int_index){
                continue;
            }
            else{
                Node* objptr_Child=new Node();
                objptr_Child->Node_value=int_array[cnt];
                Node* objptr_Current=objptr_Root;
                FindPosition(objptr_Child, objptr_Current);
                objptr_Child->objptr_Previous=objptr_Current;
            }
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

    void PrintTree(Node* objptr_Root){
        if(objptr_Root->objptr_left!=NULL){
            PrintTree(objptr_Root->objptr_left);
        }
        cout<<"Object:"<<objptr_Root->Node_value<<"\n";
        if(objptr_Root->objptr_right!=NULL){
            PrintTree(objptr_Root->objptr_right);
        }
        delete objptr_Root;
    }
};

int main(){
    int int_array[8]={3,4,2,1,5,6,7,8};
    srand(time(NULL));
    int int_index=rand()%7;
    int int_size=sizeof(int_array)/sizeof(int);
    Node* objptr_Root=new Node();
    objptr_Root->Buildtree(int_array, int_index, int_size, objptr_Root);
    objptr_Root->PrintTree(objptr_Root);
    return 0;
}
