#include <iostream>

int main()
{
    int N;
    std::cin>>N;
    int A[(N-1)];
    for(int i=0;i<sizeof(A)/sizeof(int);i++)//sizeof(A)/sizeof(int)��A�}�C���j�p
    {
        std::cin>>A[i];
    }
    for(int a=1;a<=N;a++)
    {
        bool bolar=false;//�`�N�ŧi����l�A�p�G��b�ĤG�Ӱj�餺�A�|�]���@�νd�����Y�A�Ӧbif�Belse�ɵL�k�ϥ�
        for(int b=0;b<sizeof(A)/sizeof(int);b++)
        {
            if(a==A[b])
            {
               bolar=true;//�W���w�g�w�q�Lbool�A�ҥH�b�ϥήɤ��i�A�[�W���A�A�_�h�|���s�w�q
               break;
            }
        }
        if(bolar==true){
            continue;
        }
        else
        {
            std::cout<<a<<std::endl;
            break;
        }
    }
    return 0;
}
//continue�~�����
//��sizeof�P�_�}�C���j�p�A��.length()�P�_�r�ꪺ�j�p
//�@��b�ϥ�bool�ɷ|���w�q��false�A�ӱ���ŦX�h��true
////�������ѡA/*.......*/���h�����
/*�`�N�ƪ�:
#include <iostream>
����n��->
int main(){
    int int_Rows=9,int_Space,int_Star;//int_Rows������@�n��X�X�C�Aint_Space����n��X�P�P�e����X���ťզr��Aint_Star�����Ӧ�n��X�P�P���Ӽ�
    for(int_Star=0;int_Star<int_Rows;int_Star++){//0-8���h
        std::cout<< " ";
        for(int_Space=0;int_Space<int_Rows-int_Star;int_Space++){
        std::cout<< " ";
        }
        for(int_Space=0;int_Space<2*int_Star+1;int_Space++){
        std::cout<< "*";//�Ĥ@����0<1�ҥH��X�@�ӬP�P�A�ĤG����0<3�ҥH��X�T�ӬP�P......
        }
        std::cout<< "\n";
        }
    return 0;
}
                                ^^^^^^^
                                |||||||
                                |||||||
������n->
#include <iostream>

int main(){
    int int_Rows=9,int_Space,int_Star;//int_Rows������@�n��X�X�C�Aint_Space����n��X�P�P�e����X���ťզr��Aint_Star�����Ӧ�n��X�P�P���Ӽ�
    for(int_Star=0;int_Star<int_Rows;int_Star++){
         std::cout<< " ";
    for(int_Space=0;int_Space<int_Rows-int_Star;int_Space++){
         std::cout<< " ";
    }
    for(int_Space=0;int_Space<2*int_Star+1;int_Space++){
         std::cout<< "*";
    }
    std::cout<< "\n";
    }
    return 0;
}
*/
