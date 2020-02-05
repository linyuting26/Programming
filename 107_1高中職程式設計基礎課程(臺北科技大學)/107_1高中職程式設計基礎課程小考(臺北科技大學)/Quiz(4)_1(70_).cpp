#include <iostream>

int main()
{
    int n =0;
    bool Correct;
    int arr[4][4];
    std::cin >> n;
    for (int i =1;n>=i;i++){
    for (int O=0;O<=3;O++)
        for (int J=0;J<=3;J++)
        std::cin >> arr[O][J];
        if (arr[0][0]==arr[0][1] || arr[0][0]==arr[0][2]|| arr[0][0]==arr[0][3]){
            Correct =false;
        }
        else if (arr[1][0]==arr[1][1] || arr[1][0]==arr[1][2]|| arr[1][0]==arr[1][3]){
            Correct =false;
        }
        else if (arr[2][0]==arr[2][1] || arr[2][0]==arr[2][2]|| arr[2][0]==arr[2][3]){
            Correct =false;
        }
        else if (arr[3][0]==arr[3][1] || arr[3][0]==arr[3][2]|| arr[3][0]==arr[3][3]){
            Correct =false;
        }
        else if (arr[0][0]==arr[1][0] || arr[0][0]==arr[2][0]|| arr[0][0]==arr[3][0]){
            Correct =false;
        }
        else if (arr[0][1]==arr[1][1] || arr[0][1]==arr[2][1]|| arr[0][1]==arr[3][1]){
            Correct =false;
        }
        else if (arr[0][2]==arr[1][2] || arr[0][2]==arr[0][2]|| arr[0][2]==arr[3][2]){
            Correct =false;
        }
        else if (arr[0][3]==arr[1][3] || arr[0][3]==arr[2][3]|| arr[0][3]==arr[3][3]){
            Correct =false;
        }
        else if (arr[0][0]==arr[0][1] || arr[0][0]==arr[1][0]|| arr[0][0]==arr[1][1]){
            Correct =false;
        }
        else if (arr[0][2]==arr[0][3] || arr[0][2]==arr[1][2]|| arr[0][2]==arr[1][3]){
            Correct =false;
        }
        else if (arr[2][0]==arr[2][1] || arr[2][0]==arr[3][0]|| arr[2][0]==arr[3][1]){
            Correct =false;
        }
        else if (arr[2][2]==arr[2][3] || arr[2][2]==arr[3][2]|| arr[2][2]==arr[3][3]){
            Correct =false;
        }
        }
        if (Correct == true){
            std::cout << "1" << std::endl;
        }
        else if (Correct == false) {
            std::cout << "0" << std::endl;
        }
    }
    return 0;
}
