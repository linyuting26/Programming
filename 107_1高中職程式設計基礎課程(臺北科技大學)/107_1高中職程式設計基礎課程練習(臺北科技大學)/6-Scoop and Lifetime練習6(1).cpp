#include <iostream>

int gblint_Var =10;
void fn_ShowGobalVarInFunction();

int main(){
    fn_ShowGobalVarInFunction();
    return 0;
}

void fn_ShowGobalVarInFunction(){
    std::cout<<gblint_Var<<std::endl;
}
//�ӥ����ܼƥi�H�Q�禡�����Ҩϥ�
