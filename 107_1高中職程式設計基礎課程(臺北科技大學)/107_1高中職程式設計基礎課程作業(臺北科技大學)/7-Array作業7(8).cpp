#include <iostream>

int main()
{
    int N;
    int arr[10] ;
    int num=0,max=0,min=0,c=0;
    std::string s;//將值存在陣列
    std::cin>>N>>s;
    for(int a=0;a<s.length();a++){
        if(s[a]>='0'&&s[a]<='9'){
          arr[num] = s[a];
          num++;
        }
    }
    //氣泡排序法讓他排列陣列
    for (int i = num; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (arr[j] > arr[j + 1]){
                c=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
   //利用排列出來的陣列 用MAX-MIN
    int a1=1;
    for(int a=1;a<=num;a++){
        max += a1*arr[a];
        a1=a1*10;
    }
    for(int a=1;a<=num;a++){
        min += a1*arr[a];
        a1=a1/10;
    }
    std::cout<<max-min<<std::endl;
}
