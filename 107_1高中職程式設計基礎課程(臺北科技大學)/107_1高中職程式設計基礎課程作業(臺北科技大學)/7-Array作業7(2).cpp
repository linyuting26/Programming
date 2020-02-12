#include <iostream>

int main(){
    int a=0;
    int b=0;
    int arr[a][b];
    int e =1;
    int temp =0;
    std::cout << "Cin two values for determining the size of a matrix:" <<std::endl;
    std::cin >> a >> b;
    std::cout <<"Assign the values of the matrix:" <<std::endl;
    for (int c =0;a>c;c++){
        for (int d =0;b>d;d++){
            arr[c][d]=e;
            e++;
            if (arr[c][d]==1||arr[c][d]%2>0){
                std::cout << arr[c][d] << " ";
            }
            else if (arr[c][d]==2||arr[c][d]%2==0){
                std::cout << arr[c][d] << std::endl;
            }
        }
    }
    std::cout <<"Values in the original matrix is:" <<std::endl;
    e =1;
    for (int c =0;a>c;c++){
        for (int d =0;b>d;d++){
            arr[c][d]=e;
            e++;
            if (arr[c][d]==1||arr[c][d]%2>0){
                std::cout << arr[c][d] << " ";
            }
            else if (arr[c][d]==2||arr[c][d]%2==0){
                std::cout << arr[c][d] << std::endl;
            }
        }
    }
    std::cout <<"Values in the transposed matrix is:" <<std::endl;
    e =1;
    for (int c =0;a>c;c++){
        for (int d =0;b>d;d++){
            arr[c][d]=e;
            e++;
            temp=arr[c][d];
            arr[c][d]=arr[d][c];
            arr[d][c]=temp;
        }
    }
    for (int c =0;a>c;c++){
        for (int d =c;b>d;d++){
            temp=arr[c][d];
            arr[c][d]=arr[d][c];
            arr[d][c]=temp;
        }
    }
    for(int i=0; i<a; i++){
        for(int j=i+1; j<b; j++){
            std::cout<<arr[i][j];
        }
        std::cout<<std::endl;
    }
    return 0;
}
