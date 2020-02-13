#include <iostream>

int main()
{
    int N;
    std::cin>>N;
    int A[(N-1)];
    for(int i=0;i<sizeof(A)/sizeof(int);i++)//sizeof(A)/sizeof(int)為A陣列的大小
    {
        std::cin>>A[i];
    }
    for(int a=1;a<=N;a++)
    {
        bool bolar=false;//注意宣告的位子，如果放在第二個迴圈內，會因為作用範圍的關係，而在if、else時無法使用
        for(int b=0;b<sizeof(A)/sizeof(int);b++)
        {
            if(a==A[b])
            {
               bolar=true;//上面已經定義過bool，所以在使用時不可再加上型態，否則會重新定義
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
//continue繼續執行
//用sizeof判斷陣列的大小，用.length()判斷字串的大小
//一般在使用bool時會先定義成false，而條件符合則為true
////為單行註解，/*.......*/為多行註解
/*注意排版:
#include <iostream>
比較好的->
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
                                ^^^^^^^
                                |||||||
                                |||||||
比較不好->
#include <iostream>

int main(){
    int int_Rows=9,int_Space,int_Star;//int_Rows為控制共要輸出幾列，int_Space控制要輸出星星前須輸出的空白字串，int_Star控制於該行要輸出星星的個數
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
