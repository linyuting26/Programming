#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Linked_list{
public:
    Linked_list* objptr_previous;
    Linked_list* objptr_Next;
    int value;

    Linked_list(){
        objptr_previous=NULL;
        objptr_Next=NULL;
        value=0;
    }

    Linked_list* SetLinked_list(Linked_list* objptr_Node, vector <int>& int_vector, int int_size){
        int cnt=0, counter=0;
        objptr_Node->value=int_vector[cnt];
        int_vector.erase(int_vector.begin()+cnt);
        counter++;
        Linked_list* objptr_Current=objptr_Node;
        while(counter < int_size){
            Linked_list* objptr_Child=new Linked_list();
            objptr_Child->value=int_vector[cnt];
            int_vector.erase(int_vector.begin()+cnt);
            objptr_Child->objptr_previous=objptr_Current;
            objptr_Current->objptr_Next=objptr_Child;
            objptr_Current=objptr_Child;
            counter++;
        }
        return objptr_Node;
    }

    Linked_list* SortLinked_list(Linked_list* objptr_Node, int int_size){
        int counter=0;
        Linked_list* objptr_Start=objptr_Node;
        while(counter < (int_size-1)){
            Linked_list* objptr_Current=objptr_Start->objptr_Next;
            while(objptr_Current!=NULL){
                if(objptr_Start->value > objptr_Current->value){
                    swap(objptr_Start->value, objptr_Current->value);
                }
                objptr_Current=objptr_Current->objptr_Next;
            }
            counter++;
            objptr_Start=objptr_Start->objptr_Next;
        }
        return objptr_Node;
    }

    Linked_list* MergeLinked_list(Linked_list* objptr_Root, Linked_list* objptr_Node1, Linked_list* objptr_Node2, int vector_size){
        Linked_list* objptr_Current=objptr_Root;
        for(int cnt=0;cnt<vector_size;cnt++){
            if(objptr_Node1!=NULL && objptr_Node2!=NULL){
                if(objptr_Node1->value <= objptr_Node2->value){
                    objptr_Current->value=objptr_Node1->value;
                    objptr_Node1=objptr_Node1->objptr_Next;
                }
                else if(objptr_Node1->value > objptr_Node2->value){
                    objptr_Current->value=objptr_Node2->value;
                    objptr_Node2=objptr_Node2->objptr_Next;
                }
            }
            else if(objptr_Node1==NULL && objptr_Node2!=NULL){
                objptr_Current->value=objptr_Node2->value;
                objptr_Node2=objptr_Node2->objptr_Next;
            }
            else if(objptr_Node1!=NULL && objptr_Node2==NULL){
                objptr_Current->value=objptr_Node1->value;
                objptr_Node1=objptr_Node1->objptr_Next;
            }
            if(objptr_Current->objptr_Next==NULL){
                Linked_list* objptr_Child=new Linked_list();
                objptr_Current->objptr_Next=objptr_Child;
                objptr_Child->objptr_previous=objptr_Current;
            }
            objptr_Current=objptr_Current->objptr_Next;
        }
        return objptr_Root;
    }

    void Print(Linked_list* objptr_Root){
        while(objptr_Root->value!=0){
            cout<<objptr_Root->value<<" ";
            objptr_Root=objptr_Root->objptr_Next;
        }
        cout<<"\n";
    }

};

int main(){

    vector <int> int_vector;
    int int_number=0;
    char char_msg;
    while(cin>>int_number){
        cin.get(char_msg);
        int_vector.push_back(int_number);
        if(char_msg=='\n'){
            break;
        }
    }

    int vector_size=int_vector.size();
    int int_size1=vector_size/2;
    int int_size2=(vector_size-int_size1);

    Linked_list* objptr_Node1=new Linked_list();
    Linked_list* objptr_Node2=new Linked_list();
    Linked_list* objptr_Root=new Linked_list();

    objptr_Node1->SetLinked_list(objptr_Node1, int_vector, int_size1);
    objptr_Node1->SortLinked_list(objptr_Node1, int_size1);

    objptr_Node2->SetLinked_list(objptr_Node2, int_vector, int_size2);
    objptr_Node2->SortLinked_list(objptr_Node2, int_size2);

    objptr_Root->MergeLinked_list(objptr_Root, objptr_Node1, objptr_Node2, vector_size);
    objptr_Root->Print(objptr_Root);

    delete objptr_Node1;
    delete objptr_Node2;
    delete objptr_Root;

    return 0;
}
