#include <iostream>

struct Node{
    int int_Value;
    Node* objptr_Par;
    Node* objptr_LC;
    Node* objptr_RC;
    Node(int int_Value){
        this->int_Value=int_Value;
        objptr_Par=nullptr;
        objptr_LC=nullptr;
        objptr_RC=nullptr;
    }
    ~Node(){
        std::cout<< "Delete node value: " <<int_Value<< "\n";
    }
};

struct Tree{
    Node* objptr_Start;
    Tree(Node* objptr_Start){
        this->objptr_Start= objptr_Start;
    }

    ~Tree(){
        fn_Des();
    }

    void fn_InsertNode(int int_Value){
        Node* objptr_CurPos= this->objptr_Start;
        objptr_CurPos= fn_SerhInsNode(int_Value, objptr_CurPos);

        Node* objptr_ChiPos= new Node(int_Value);
        objptr_ChiPos->objptr_Par= objptr_CurPos;

        if(int_Value<= objptr_CurPos->int_Value){
            objptr_CurPos->objptr_LC= objptr_ChiPos;
        }
        else{
            objptr_CurPos->objptr_RC= objptr_ChiPos;
        }
    }

    Node* fn_SerhInsNode(int int_Value, Node* objptr_CurPos){
        if(int_Value<= objptr_CurPos->int_Value){//Left branch
            if(objptr_CurPos->objptr_LC==nullptr){
                return objptr_CurPos;
            }
            else{
                return fn_SerhInsNode(int_Value, objptr_CurPos->objptr_LC);
            }
        }
        else{//Right
            if(objptr_CurPos->objptr_RC==nullptr){
                return objptr_CurPos;
            }
            else{
                return fn_SerhInsNode(int_Value, objptr_CurPos->objptr_RC);
            }
        }
    }

    void fn_CoutInSort(){
        fn_CoutInSort(objptr_Start);
    }

    void fn_CoutInSort(Node* objptr_Node){
        //L Part
        if(objptr_Node->objptr_LC!=nullptr){
            fn_CoutInSort(objptr_Node->objptr_LC);
        }
        std::cout<< objptr_Node->int_Value<< "\n";

        //R Part
        if(objptr_Node->objptr_RC!=nullptr){
            fn_CoutInSort(objptr_Node->objptr_RC);
        }
    }

    void fn_Des(){
        fn_DesInSort(objptr_Start);
    }

    void fn_DesInSort(Node* objptr_Node){
        //L Part
        if(objptr_Node->objptr_LC!=nullptr){
            fn_DesInSort(objptr_Node->objptr_LC);
        }
        //R Part
        if(objptr_Node->objptr_RC!=nullptr){
            fn_DesInSort(objptr_Node->objptr_RC);
        }
        delete objptr_Node;
    }
};
int main(){
    int intarr_Value[8]={1,3,4,8,6,7,2,5};
    int int_StartInd= 5;

    Tree* objptr_Tree= new Tree(new Node(intarr_Value[int_StartInd]));//Create root

    for(int int_Ct=0; int_Ct< 8; int_Ct++){
        if(int_Ct==int_StartInd){
            continue;
        }
        objptr_Tree->fn_InsertNode(intarr_Value[int_Ct]);
    }

    objptr_Tree->fn_CoutInSort();
    std::cout<< "=========Destroy process===========\n";
    delete objptr_Tree;
    return 0;
}
