#include <iostream>

int main(){
    int int_Top=0;
    std::cin>>int_Top;
    for(int int_Line=1;int_Line<=(int_Top+1)/2;int_Line++){
        for(int int_Space=((int_Top+1)/2)-int_Line;int_Space>0;int_Space--){
            std::cout<<" ";
        }
        for(int int_Star=1;int_Star<=(2*int_Line)-1;int_Star++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int int_Line=1;int_Line<=(int_Top-1)/2;int_Line++){
        for(int int_Space=1;int_Space<=int_Line;int_Space++){
            std::cout<<" ";
        }
        for(int int_Star=int_Top-(2*int_Line);int_Star>0;int_Star--){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main(){
int h;
cin>>h;
for(int i=0;i<2;i++) {
for(int j=0;j<=i;j++)
cout<<"*";
cout<<"\n";
}
for(int i=0;i<3;i++){
for(int j=i;j<3;j++)
cout<<"*";
cout<<"\n"; //換行
}
return 0;
}
//////////////////////////////////////////////////////////
