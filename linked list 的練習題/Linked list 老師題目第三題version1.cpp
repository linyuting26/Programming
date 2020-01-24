#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

class Node{
public:
    Node* objptr_Previous;
    Node* objptr_Next;
    int Node_Value;

    Node(){
        objptr_Previous=NULL;
        objptr_Next=NULL;
        Node_Value=0;
    }

    Node* BuildLinked_list(int* intptr, int array_size, Node* objptr_Array_Root){
        Node* objptr_Current=objptr_Array_Root;
        objptr_Array_Root->Node_Value=*(intptr+0);
        for(int cnt=1;cnt<array_size;cnt++){
            Node* objptr_Node=new Node();
            objptr_Node->Node_Value=*(intptr+cnt);
            objptr_Node->objptr_Previous=objptr_Current;
            objptr_Current->objptr_Next=objptr_Node;
            objptr_Current=objptr_Node;
        }
        return objptr_Array_Root;
    }

    void array_match(Node* objptr_Aarray_Root, Node* objptr_Barray_Root,int Aarray_size, int Barray_size, vector <string>& str_vector){
        Node* objptr_ACurrent=objptr_Aarray_Root;
        Node* objptr_ATemp=objptr_ACurrent;
        Node* objptr_BCurrent=objptr_Barray_Root;
        Node* objptr_BTemp=objptr_BCurrent;
        int counterA=0;
        while(counterA < (Aarray_size-1)){
            int counterB=counterA;
            while(counterB < (Barray_size-1) && counterA < (Aarray_size-1)){
                if(objptr_ACurrent==NULL || objptr_BCurrent==NULL){
                    break;
                }
                else{
                    if(objptr_ACurrent->Node_Value==objptr_BCurrent->Node_Value){
                        string str_msg="";
                        while(objptr_ACurrent->Node_Value==objptr_BCurrent->Node_Value){
                            if(counterB > (Barray_size-1) || counterA > (Aarray_size-1)){
                                break;
                            }
                            else{
                                str_msg+=to_string(objptr_ACurrent->Node_Value);
                                objptr_ACurrent=objptr_ACurrent->objptr_Next;
                                objptr_BCurrent=objptr_BCurrent->objptr_Next;
                                counterB++;
                                if(objptr_ACurrent==NULL || objptr_BCurrent==NULL){
                                    break;
                                }
                            }
                        }
                        str_vector.push_back(str_msg);
                        objptr_ACurrent=objptr_ATemp;
                    }
                    else if(objptr_ACurrent->Node_Value!=objptr_BCurrent->Node_Value){
                        while(objptr_ACurrent->Node_Value!=objptr_BCurrent->Node_Value){
                            if(counterB > (Barray_size-1) || counterA > (Aarray_size-1)){
                                break;
                            }
                            else{
                                objptr_BCurrent=objptr_BCurrent->objptr_Next;
                                counterB++;
                                if(objptr_ACurrent==NULL || objptr_BCurrent==NULL){
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            objptr_BCurrent=objptr_BTemp;
            objptr_ATemp=objptr_ATemp->objptr_Next;
            objptr_ACurrent=objptr_ATemp;
            counterA++;
        }
    }

};


int main(){
    int int_Aarray[50]={};
    int int_Barray[100]={};
    Node* objptr_Aarray_Root=new Node();
    Node* objptr_Barray_Root=new Node();
    Node* objptr_array=NULL;
    int Aarray_size=sizeof(int_Aarray)/sizeof(int);
    int Barray_size=sizeof(int_Barray)/sizeof(int);
    srand(time(NULL));
    cout<<"A array:\n";
    for(int cnt=0;cnt<50;cnt++){
        int temp=rand()%5;
        int_Aarray[cnt]=temp;
        cout<<int_Aarray[cnt]<<" ";
    }
    cout<<"\n\nB array:\n";
    for(int cnt=0;cnt<100;cnt++){
        int temp=rand()%5;
        int_Barray[cnt]=temp;
        cout<<int_Barray[cnt]<<" ";
    }
    objptr_Aarray_Root->BuildLinked_list(reinterpret_cast <int*> (int_Aarray), Aarray_size, objptr_Aarray_Root);
    objptr_Barray_Root->BuildLinked_list(reinterpret_cast <int*> (int_Barray), Barray_size, objptr_Barray_Root);
    cout<<"\n\nA and B's intersection:\n";
    vector <string> str_vector;
    objptr_array->array_match(objptr_Aarray_Root, objptr_Barray_Root, Aarray_size, Barray_size, str_vector);
    sort(str_vector.begin(), str_vector.end());
    str_vector.erase( unique( str_vector.begin(), str_vector.end() ), str_vector.end());
    for(int cnt=0;cnt<str_vector.size();cnt++){
        cout<<str_vector[cnt]<<" ";
    }
    cout<<"\n";
    return 0;
}
