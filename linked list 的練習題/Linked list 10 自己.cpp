#include <iostream>
#include <string>

struct Node{
    Node* next;
    std::string str_NodeName;
};

struct Linked_list{
    Node* objptr_Par;
    Node* objptr_Child;
    Linked_list(){
        objptr_Par= nullptr;
        objptr_Child= nullptr;
    }
    void CreateNode(std::string str_NodeName)
    {
        Node* objptr_Node=new Node();
        objptr_Node->str_NodeName=str_NodeName;
        objptr_Node->next=nullptr;
        if(objptr_Par==NULL){
            objptr_Par=objptr_Node;
            objptr_Child=objptr_Node;
            objptr_Node=NULL;
        }
        else{
            objptr_Child->next=objptr_Node;
            objptr_Child=objptr_Node;
        }
    }
    void display()
    {
        Node* temp=new Node;
        temp=objptr_Par;
        while(temp!=NULL)
        {
            std::cout<<temp->str_NodeName<<" ";
            temp=temp->next;
        }
    }
    void reverse_display()
    {
        Node* temp=new Node;
        temp=objptr_Child;
        while(temp!=NULL)
        {
            std::cout<<temp->str_NodeName<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    Linked_list Object_Node;
    for(int cnt=0;cnt<10;cnt++){
        std::string str_msg="";
        if(cnt==0){
            str_msg="Root";
        }
        else{
            str_msg="Ch";
            str_msg+=std::to_string(cnt);
        }
        Object_Node.CreateNode(str_msg);
    }
    Object_Node.display();
    std::cout<<"\n";
    return 0;
}
