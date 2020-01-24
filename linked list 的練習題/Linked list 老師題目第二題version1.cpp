#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

class Node{
public:
    Node* objptr_Left;
    Node* objptr_Right;
    Node* objptr_Previous;
    string Node_Value;

    Node(){
        objptr_Left=NULL;
        objptr_Right=NULL;
        objptr_Previous=NULL;
        Node_Value="";
    }

    void Buildtree(vector <char>& char_vector,Node* objptr_Node, int int_size){
        Node* objptr_Current=objptr_Node;
        int cnt=0;
        while(cnt<int_size){

            if(char_vector[cnt]=='('){
                char_vector.erase(char_vector.begin());
                int_size--;
            }

            if(char_vector[cnt]==')'){
                char_vector.erase(char_vector.begin());
                int_size--;
                if(cnt>=int_size){
                    break;
                }
            }

            if(isdigit(char_vector[cnt])){
                string str_value="";
                while(isdigit(char_vector[cnt])){
                    str_value+=char_vector[cnt];
                    char_vector.erase(char_vector.begin());
                    int_size--;
                    if(cnt>=int_size){
                        break;
                    }
                }
                Node* objptr_Child=new Node();
                objptr_Child->Node_Value=str_value;
                if(objptr_Current->objptr_Left==NULL){
                    objptr_Current->objptr_Left=objptr_Child;
                }
                else if(objptr_Current->objptr_Right==NULL){
                    objptr_Current->objptr_Right=objptr_Child;
                }
                objptr_Child->objptr_Previous=objptr_Current;
            }

            else if(!isdigit(char_vector[cnt])){
                if(objptr_Current->Node_Value=="\0"){
                    objptr_Current->Node_Value=char_vector[cnt];
                }
                else if(objptr_Current->Node_Value!="\0"){
                    Node* objptr_Parent=new Node();
                    objptr_Parent->Node_Value=char_vector[cnt];
                    objptr_Parent->objptr_Left=objptr_Current;
                    objptr_Current->objptr_Previous=objptr_Parent;
                    objptr_Current=objptr_Parent;
                }
                char_vector.erase(char_vector.begin());
                int_size--;
            }

       }
       PrintTree_Postorder(objptr_Current);
    }

    void PrintTree_Postorder(Node* objptr_Current){
        if(objptr_Current==NULL){
            return;
        }
        PrintTree_Postorder(objptr_Current->objptr_Left);
        PrintTree_Postorder(objptr_Current->objptr_Right);
        cout<<objptr_Current->Node_Value<<" ";
        delete objptr_Current;
    }

};

int main(){
    string str_msg="1 2 3 4 5 * + % -";
    int length=str_msg.length();
    vector <char> char_vector;
    Node* objptr_Node=new Node();
    for(int cnt=0;cnt<length;cnt++){
        char_vector.push_back(str_msg[cnt]);
    }
    int int_size=length;
    objptr_Node->Buildtree(char_vector, objptr_Node, int_size);
    cout<<"\n";
    return 0;
}
