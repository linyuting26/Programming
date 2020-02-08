#include <iostream>

void fn_SortingArr(int intarr_SorArr[],int int_NeedProSize);

int main()
{
    int intarr_SorArr[7]={2,1,3,5,7,8,10};
    fn_SortingArr(intarr_SorArr,sizeof(intarr_SorArr)/sizeof(int));
    for(int int_Ct=0;int_Ct<sizeof(intarr_SorArr)/sizeof(int);int_Ct++)
    {
    std::cout<<intarr_SorArr[int_Ct]<<"\n";
    }
    return 0;
}

void fn_SortingArr(int intarr_SorArr[],int int_NeedProSize)
{
    if(int_NeedProSize>1)
        {
        for(int i=0;i<int_NeedProSize;i++)
            {
                int int_CurEle=intarr_SorArr[int_NeedProSize-1];
                int int_PrePos=int_NeedProSize-2;
                while(int_PrePos>=0&&intarr_SorArr[int_PrePos]<int_CurEle)
                    {
                        intarr_SorArr[int_PrePos+1]=intarr_SorArr[int_PrePos];//現在的元素與前一個交換
                        int_PrePos--;
                    }
                intarr_SorArr[int_PrePos+1]=int_CurEle;
            }
        }
}
/*
int i是「目前要處理」的資料index(i)；
int int_PrePos=i-1是用來指出前1~i−1筆資料的index；
第一個for迴圈，用意是把每一個矩陣元素都視為「目前要處理」的資料一次；
在for迴圈裡的while迴圈，用意是把「目前要處理」的資料與前1~i−1筆資料做比較，並找到適當的位置，將1~i筆資料做排序。
*/
