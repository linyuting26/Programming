#include <iostream>

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
/*for�j�骺�B�J��:
1.��l��
2.�P�_����(�p�G�ŦX�������ԭz�A���ŦX�h���X�j��)
3.����ԭz
4.�W��p��
5.�P�_����
6.����ԭz
7.�A�ӭ���4.5.6.���B�J���줣�ŦX������X�j��
**�_���j��(�H�W���{���X����):
  �Ĥ@��(STEP)->
  1.�b�Ĥ@��for�j��int_Star=0<9�ŦX����A�ҥH��X�@�ӪŮ�
  2.�i�J�ĤG��for�j��int_Space=0<9-0�ŦX����A�ҥH��X�@�ӪŮ�A�S�]��int_Space=1<9-0�Bint_Space=2<9-0�Bint_Space=3<9-0......�A�qint_Space=0��int_Space=8�`�@����9���ԭz(��X9�ӪŮ�)
  3.�i�J�ĤT��for�j��int_Space=0<2*0+1�ŦX����A�ҥH��X�@�ӬP���A�S�]��0<1�ĤT��
  for�j�餺���ԭz�u�|����@��
  �ĤG��(STEP)->
  1.�b�Ĥ@��for�j��int_Star=1<9�ŦX����A�ҥH��X�@�ӪŮ�
  2.�i�J�ĤG��for�j��int_Space=0<9-1�ŦX����A�ҥH��X�@�ӪŮ�A�S�]��int_Space=1<9-1�Bint_Space=2<9-1�Bint_Space=3<9-1......�A�qint_Space=0��int_Space=7�`�@����8���ԭz(��X8�ӪŮ�)
  3.�i�J�ĤT��for�j��int_Space=0<2*1+1�ŦX����A�ҥH��X�@�ӬP���A�S�]��int_Space=1<2*1+1
  �Bint_Space=2<2*1+1�Afor�j�餺���ԭz�`�@�|����3��
  �ĤT��(STEP)->
  �H�������A��9��
  */
