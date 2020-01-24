#include <iostream>
using namespace std;

struct Node{
    Node* objptr_left;
    Node* objptr_right;
    int Node_value;
    Node(){
        objptr_left=NULL;
        objptr_right=NULL;
        Node_value=0;
    }
};

Node* NewNode(int array_value){
    Node* temp=new Node();
    temp->Node_value=array_value;
    return temp;
}

Node* Insert(Node* Object_Node, int array_value){
    if(Object_Node==nullptr){
        return NewNode(array_value);
    }
    if(array_value < Object_Node->Node_value){
        Object_Node->objptr_left=Insert(Object_Node->objptr_left, array_value);
    }
    else if(array_value > Object_Node->Node_value){
        Object_Node->objptr_right=Insert(Object_Node->objptr_right, array_value);
    }
    return Object_Node;
}

void StoreArray(Node* Object_Node, int int_array[], int& counter){
    if(Object_Node !=nullptr){
        StoreArray(Object_Node->objptr_left, int_array, counter);
        int_array[counter]= Object_Node->Node_value;
        counter++;
        StoreArray(Object_Node->objptr_right, int_array, counter);
    }
}

void TreeSort(int int_array[], int int_size){
    Node* objptr_Root=nullptr;
    objptr_Root=Insert(objptr_Root, int_array[0]);
    for(int cnt=1;cnt<int_size;cnt++){
        Insert(objptr_Root, int_array[cnt]);
    }
    int counter=0;
    StoreArray(objptr_Root, int_array, counter);
    delete objptr_Root;
}

void PrintTree(int int_array[], int int_size){
    for(int cnt=0;cnt<int_size;cnt++){
        if(cnt==(int_size-1)){
            cout<<int_array[cnt]<<"\n";
        }
        else{
            cout<<int_array[cnt]<<" ";
        }
    }
}

int main(){
    int int_array[8]={8,7,6,5,4,3,2,1};
    int int_size=sizeof(int_array)/sizeof(int);
    TreeSort(int_array, int_size);
    PrintTree(int_array, int_size);
    return 0;
}
