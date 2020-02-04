#include <iostream>

int main()
{
    int n =-1;
    bool Result=false;
    int arr[3][3];
    std::cin >> n;
    for (int a =1;n>=a;a++){//測資數
        for (int b=0;b<=2;b++)//直得index0、1、2
        for (int c=0;c<=2;c++)//橫的index0、1、2
        std::cin >> arr[b][c];
        if (arr[0][0]==arr[0][1] && arr[0][0]==arr[0][2]){
            Result =true;
        }
        else if (arr[1][0]==arr[1][1] && arr[1][0]==arr[1][2]){
            Result =true;
        }
        else if (arr[2][0]==arr[2][1] && arr[2][0]==arr[2][2]){
            Result =true;
        }
        else if (arr[0][0]==arr[1][0] && arr[0][0]==arr[2][0]){
            Result =true;
        }
        else if (arr[0][1]==arr[1][1] && arr[0][1]==arr[2][1]){
            Result =true;
        }
        else if (arr[0][2]==arr[1][2] && arr[0][2]==arr[2][2]){
            Result =true;
        }
        else if (arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2]){
            Result =true;
        }
        else if (arr[0][2]==arr[1][1] && arr[0][2]==arr[2][0]){
            Result =true;
        }
        else{
            Result =false;
        }
        if (Result == true){
            std::cout << "True" << std::endl;
        }
        else if (Result == false) {
            std::cout << "False" << std::endl;
        }
    }
    return 0;
}
