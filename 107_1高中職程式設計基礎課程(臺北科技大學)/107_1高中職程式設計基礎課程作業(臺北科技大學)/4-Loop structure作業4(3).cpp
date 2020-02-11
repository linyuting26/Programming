#include <iostream>
#include <string>

string str_Num1;
string str_Num2;
string str_Num3;

int main(){
    for(int A=1;A<=9;A++){
        for(int B=1;B<=9;B++){
            std::string str_Num1=(A%4==0)?"$":std::to_string(A);
            std::string str_Num2=(B%4==0)?"%":std::to_string(B);
            std::string str_Num3=((A*B)%4==0)?"??":std::to_string((A*B));
            std::cout<< str_Num1 <<"*"<<str_Num2<<"="<<str_Num3;
            if(B%3==0){
                std::cout<<"\n";
            }
            else{
                std::cout<<",\t";
            }
         }
      std::cout<<"\n";
      }
return 0;
}
