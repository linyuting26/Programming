#include <iostream>
#include <string>
#include <sstream>

void fn_ArrSort(int* intptr_Score, int int_Size);
void fn_ShowMinMax(int* intptr_Score, int int_Size);
std::string fn_ConI2S(int int_Num);

int main(){
    int int_ArrLength=0;//Record the size of scores
    std::cin >> int_ArrLength;
    int intarr_StuScore[int_ArrLength]={};//Declare & define the array and initialize the value equal to 0

    //Cin each score into the array
    for(int int_Ct=0; int_Ct<int_ArrLength; int_Ct++){
        /*¼g§a*/
    }

    fn_ArrSort(intarr_StuScore, sizeof(intarr_StuScore)/sizeof(int));

    //Search the min and max scores
    fn_ShowMinMax(intarr_StuScore, sizeof(intarr_StuScore)/sizeof(int));
    return 0;
}

void fn_ArrSort(int* intptr_Score, int int_Size){
    //Sorting scores in insertion sort by using recursion
    if(int_Size>1){//Recursion
        /*¼g§a*/
        for(int int_Ct=int_Size-1; int_Ct>0; int_Ct--){
            if(*(intptr_Score+int_Ct)<*(intptr_Score+int_Ct-1)){//The score is smaller than the previous one
                //swap two items
                int int_Tmp= *(intptr_Score+int_Ct);
                /*¼g§a*/
            }
            else{
                //If the score is larger than the previous one
                //On the other hand, the score is in the correct location.
                //As a result, swapping processes are not necessary in remainder scores.
                /*¼g§a*/
            }
        }
    }
}

void fn_ShowMinMax(int* intptr_Score, int int_Size){
    int int_Max=-1, int_Min=-1;
    for(int int_Ct=0; int_Ct< int_Size; int_Ct++){
        //Assign the int_Min and int_Max from the array
        /*¼g§a*/
    }
    (int_Max!=-1)?std::cout<< fn_ConI2S(int_Max):std::cout<< std::string("best case");
    std::cout<< std::endl;
    (int_Min!=-1)?std::cout<< fn_ConI2S(int_Min):std::cout<< std::string("worst case");
}

std::string fn_ConI2S(int int_Num){
    std::stringstream obj_SS;
    obj_SS << int_Num;
    return obj_SS.str();
}
