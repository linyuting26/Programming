#include<iostream>
#include <vector>
using namespace std;

class solution{
public:
    vector <int> failure;

    void GetFailureFunction(string& str_needle){
        failure.assign(str_needle.size(), -1);

        for(size_t cnt=1;cnt<str_needle.size();cnt++){
            int temp=failure[cnt-1];

            while((str_needle[cnt]!=str_needle[temp+1]) && (temp>=0)){
                temp=failure[temp];
            }

            if(str_needle[cnt] == str_needle[temp+1]){
                failure[cnt]=(temp+1);
            }
        }
    }

    int KMP(string& haystack, string& needle){
        size_t previous=0, next=0;
        while(previous < haystack.size() && next < needle.size()){
            if(haystack[previous]==needle[next]){
                previous++, next++;
            }
            else{
                if(next==0){
                    previous++;
                }
                next=failure[next-1]+1;
            }
        }

        if(next < needle.size()){
            return -1;
        }
        else{
            return (previous-needle.size());
        }
    }

    int strstr(string haystack, string needle){
        GetFailureFunction(needle);

        return KMP(haystack, needle);
    }
};

int main()
{
    string str_haystack="", str_needle="";
    cin>>str_haystack>>str_needle;
    cout<<solution().strstr(str_haystack, str_needle)<<"\n";
    return 0;
}

/*
ababbaabababbaababbabaa
ababbaababbabaa
*/

/*
int F[N];
int match(const std::string& A, const std::string& B){
    F[0]=−1,F[1]=0;
    for(int i=1, j=0;i<B.size()−1;F[++i]=++j){ //計 算 失 敗 函 數
    if(B[i] == B[j])F[i]=F[j]; //優 化， 略 去 此 行 為MP
    while(j != −1 && B[i] != B[j]) j=F[j];
    }
    for(int i=0, j=0;i−j+B.size() <= A.size();i++, j++) { //匹 配
    while(j != −1 && A[i] != B[j]) j=F[j];
    if(j == B.size()−1) return i−j; //成 功 匹 配 到 B 字 串 的 結 尾， 回 傳 結 果
    }
    return −1;
}
*/
