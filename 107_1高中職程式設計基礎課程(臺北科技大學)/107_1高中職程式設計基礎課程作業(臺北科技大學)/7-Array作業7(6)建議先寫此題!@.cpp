#include <iostream>
#include <string>

int main()
{//12345
    //value:1234321
    //index:0123456
    std::string str_Msg="";//�ŧi�éw�q�@�Ӧr��
    std::cin>>str_Msg;
    std::string str = str_Msg;
    for(int i = 0 ; i < str_Msg.length() ; i ++)
    {
        int temp=str_Msg[i];
        str_Msg[i]=str_Msg[str_Msg.length() - 1 -i];
        str_Msg[str_Msg.length() - 1 - i]=temp;
        break;
    }
    if(str_Msg==str)
        {
            std::cout<<"YES"<<"\n";
        }
    else
        {
            std::cout<<"NO"<<"\n";
        }
    return 0;
}
//�@�ӵ���O�����A��ӵ���O�O�_�۵�
//�ο�X(cout)��debug
//Ctrl A ����,Ctrl C �ƻs,Ctrl V �K�W,Ctrl F�j�M����r
//�j�����ŧi�æP�ɩw�q0,-1(���F�ܼ�)
//std::string str_Msg="";//�ŧi�éw�q�@�Ӧr��
//value:��,index:���ޭ�
//�Ψ�string�n�ޤJ�禡�w
//�μg�����U���
