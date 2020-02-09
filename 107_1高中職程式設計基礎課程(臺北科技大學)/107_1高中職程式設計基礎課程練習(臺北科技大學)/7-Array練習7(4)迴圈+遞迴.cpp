#include <iostream>

void fn_SortingArr(int intarr_SorArr[],int int_NeedProSize);

int main()
{
    int n=0;
    int arr[n];
    std::cin>>n;
    for(int i=0;i<n;i++)
        {
            std::cin>>arr[i];
        }
    fn_SortingArr(arr,sizeof(arr)/sizeof(int));//已經排序好的陣列
    std::cout<<arr;
    return 0;
}

void fn_SortingArr(int intarr_SorArr[],int int_NeedProSize)
{
    if(int_NeedProSize>1)
        {
                fn_SortingArr( intarr_SorArr , int_NeedProSize-1);
                int int_CurEle=intarr_SorArr[int_NeedProSize-1];
                int int_PrePos=int_NeedProSize-2;
                while(int_PrePos>=0&&intarr_SorArr[int_PrePos]<int_CurEle)
                    {
                        intarr_SorArr[int_PrePos+1]=intarr_SorArr[int_PrePos];
                        int_PrePos--;
                    }
                intarr_SorArr[int_PrePos+1]=int_CurEle;
        }
    return fn_SortingArr(intarr_SorArr,int_NeedProSize);
}
/*
int i是「目前要處理」的資料index(i)；
int j=i-1是用來指出前1~i−1筆資料的index；
第一個for迴圈，用意是把每一個矩陣元素都視為「目前要處理」的資料一次；
在for迴圈裡的while迴圈，用意是把「目前要處理」的資料與前1~i−1筆資料做比較，並找到適當的位置，將1~i筆資料做排序。
*/
