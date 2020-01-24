#include <iostream>
#include <string>

struct Node{
    Node* objptr_Par;
    Node* objptr_Child;
    std::string str_NodeName;
    Node(){
        objptr_Par= NULL;
        objptr_Child= NULL;
    }
};

int main(){
    Node* objptr_Root=new Node();
    objptr_Root->str_NodeName="Root";

    Node* objptr_Child=new Node();
    objptr_Child->str_NodeName="Ch1";
    objptr_Root->objptr_Child= objptr_Child;
    objptr_Child->objptr_Par= objptr_Root;

    Node* objptr_Child2=new Node();
    objptr_Child2->str_NodeName="Ch2";
    objptr_Child->objptr_Child= objptr_Child2;
    objptr_Child2->objptr_Par= objptr_Child;

    for(Node* objptr_Pos= objptr_Root; objptr_Pos!=NULL;){
        std::cout<< objptr_Pos->str_NodeName <<"\n";
        objptr_Pos= objptr_Pos->objptr_Child;
    }

    std::cout<< "========\n";
    for(Node* objptr_Pos= objptr_Child2; objptr_Pos!=NULL;){
        std::cout<< objptr_Pos->str_NodeName <<"\n";
        objptr_Pos= objptr_Pos->objptr_Par;
    }
    return 0;
}
