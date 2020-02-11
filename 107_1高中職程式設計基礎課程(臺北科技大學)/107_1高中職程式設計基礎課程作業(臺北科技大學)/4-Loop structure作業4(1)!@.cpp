#include <iostream>

int main(){
    int int_Rows=9,int_Space,int_Star;//int_Rows為控制共要輸出幾列，int_Space控制要輸出星星前須輸出的空白字串，int_Star控制於該行要輸出星星的個數
    for(int_Star=0;int_Star<int_Rows;int_Star++){//0-8階層
        std::cout<< " ";
        for(int_Space=0;int_Space<int_Rows-int_Star;int_Space++){
        std::cout<< " ";
        }
        for(int_Space=0;int_Space<2*int_Star+1;int_Space++){
        std::cout<< "*";//第一次為0<1所以輸出一個星星，第二次為0<3所以輸出三個星星......
        }
        std::cout<< "\n";
        }
    return 0;
}
/*for迴圈的步驟為:
1.初始值
2.判斷條件(如果符合條件執行敘述，不符合則跳出迴圈)
3.執行敘述
4.增減計數
5.判斷條件
6.執行敘述
7.再來重複4.5.6.的步驟直到不符合條件跳出迴圈
**巢狀迴圈(以上面程式碼為例):
  第一次(STEP)->
  1.在第一個for迴圈int_Star=0<9符合條件，所以輸出一個空格
  2.進入第二個for迴圈int_Space=0<9-0符合條件，所以輸出一個空格，又因為int_Space=1<9-0、int_Space=2<9-0、int_Space=3<9-0......，從int_Space=0到int_Space=8總共執行9次敘述(輸出9個空格)
  3.進入第三個for迴圈int_Space=0<2*0+1符合條件，所以輸出一個星號，又因為0<1第三個
  for迴圈內的敘述只會執行一次
  第二次(STEP)->
  1.在第一個for迴圈int_Star=1<9符合條件，所以輸出一個空格
  2.進入第二個for迴圈int_Space=0<9-1符合條件，所以輸出一個空格，又因為int_Space=1<9-1、int_Space=2<9-1、int_Space=3<9-1......，從int_Space=0到int_Space=7總共執行8次敘述(輸出8個空格)
  3.進入第三個for迴圈int_Space=0<2*1+1符合條件，所以輸出一個星號，又因為int_Space=1<2*1+1
  、int_Space=2<2*1+1，for迴圈內的敘述總共會執行3次
  第三次(STEP)->
  以此類推，做9次
  */
