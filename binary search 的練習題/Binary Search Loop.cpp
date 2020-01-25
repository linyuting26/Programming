#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int* int_array, int int_n, int value);
char compare(int previous, int next);

int main(){
    int int_n=0, value=1;
    cin>>int_n;
    int int_array[int_n]={};
    for(int cnt=0;cnt<int_n;cnt++){
        cin>>int_array[cnt];
    }
    sort(int_array, int_array+int_n);
    int index=BinarySearch(int_array, int_n, value);
    cout<<index<<"\n";
    return 0;
}

int BinarySearch(int* int_array, int int_n, int value){
    for(int left=0, right=(int_n-1);left<=right;){
        int middle=(left+right)/2;
        switch(compare(value, int_array[middle])){
            case'>':
                left=middle+1;
                break;
            case'<':
                right=middle-1;
                break;
            case'=':
                return middle;
        }
    }
    return -1;
}

char compare(int previous, int next){
    if(previous > next){
        return '>';
    }
    else if(previous < next){
        return '<';
    }
    else{
        return '=';
    }
}
