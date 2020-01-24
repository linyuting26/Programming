#include <iostream>
#include <string>
#include <sstream>

struct Node{
    Node* objptr_Par;
    Node* objptr_Child;
    std::string str_NodeName;
    Node(){
        objptr_Par= NULL;
        objptr_Child= NULL;
    }
};

std::string fn_I2S(int int_Num);

int main(){
    Node* objptr_Root=new Node();
    objptr_Root->str_NodeName="Root";

    Node* int_CurrNode= objptr_Root;
    for(int int_Ct=0; int_Ct<10; int_Ct++){
        Node* objptr_Child=new Node();
        objptr_Child->str_NodeName= "ch"+(fn_I2S(int_Ct+1));
        int_CurrNode->objptr_Child= objptr_Child;
        objptr_Child->objptr_Par= int_CurrNode;
        int_CurrNode= objptr_Child;
    }

    for(Node* objptr_Pos= objptr_Root; objptr_Pos!=NULL;){
        std::cout<< objptr_Pos->str_NodeName <<"\n";
        objptr_Pos= objptr_Pos->objptr_Child;
    }

    std::cout<< "========\n";
    for(Node* objptr_Pos= int_CurrNode; objptr_Pos!=NULL;){
        std::cout<< objptr_Pos->str_NodeName <<"\n";
        objptr_Pos= objptr_Pos->objptr_Par;
    }


    //delete the anoy memory; it shall delete in the bottom-up manner.
    for(Node* objptr_Pos= int_CurrNode; objptr_Pos!=NULL;){
        Node* objptr_Tmp= objptr_Pos;
        objptr_Pos= objptr_Pos->objptr_Par;
        std::cout<< "Delete object. Name:" << objptr_Tmp->str_NodeName << "\n";
        delete objptr_Tmp;
    }
    return 0;
}

std::string fn_I2S(int int_Num){
    std::stringstream obj_Ss;
    obj_Ss << int_Num;
    return obj_Ss.str();
}
