#include <iostream>
#include <string>

int main()
{//12345
    //value:1234321
    //index:0123456
    std::string str_Msg="";//宣告並定義一個字串
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
//一個等於是指派，兩個等於是是否相等
//用輸出(cout)做debug
//Ctrl A 全選,Ctrl C 複製,Ctrl V 貼上,Ctrl F搜尋關鍵字
//大部分宣告並同時定義0,-1(除了變數)
//std::string str_Msg="";//宣告並定義一個字串
//value:值,index:索引值
//用到string要引入函式庫
//用寫的輔助思考
