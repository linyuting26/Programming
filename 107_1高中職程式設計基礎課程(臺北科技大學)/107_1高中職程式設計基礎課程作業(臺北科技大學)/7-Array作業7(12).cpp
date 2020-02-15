#include <iostream>
#include <string>

bool isUpcase(char ch);
bool isLowercase(char ch);
int  int_max(int a,int b);

int main()
{
    std::string str_Msg="";
    int k;
    int cU=0;//連續大寫的長度(Continuous_capitalization)
    int cL=0;//連續小寫的長度(Continuou_slowercase)
    int len=0;//目前的字串交錯長度
    int len2=0;//目前確定的字串交錯長度
    bool precap;//判斷前一次是否為大寫
    std::cin>>k;
    std::cin >> str_Msg;
    int length = str_Msg.length();
    if (isUpcase(str_Msg[0])==true)
    {
        precap = true;//第一個是大寫
        cU++;//連續大寫字母遞增1
        if (cU == k)//達到k個長度
        {
            len = k;//目前的字串交錯長度為k
            len2 = int_max(len2,len);//len有更新，取flen與len大的到flen
        }
    }
    else
    {
        precap = false;//第一個是小寫
        cL++;//連續小寫字母遞增1
        if (cL == k)//達到k個長度
        {
            len = k;//目前的字串交錯長度為k
            len2 = int_max(len2,len);//len有更新，取flen與len大的到flen
        }
    }
    for(int i=1;i<length;i++)//分析字串第2個到最後
    {
        if (isUpcase(str_Msg[i])==true && precap==true)//連續大寫
        {
            cU++;//cU遞增1
            cL=0;
            if (cU == k)//達到k個長度
            {
                len += k;//目前的字串交錯長度遞增k
                len2 = int_max(len2,len);//len有更新，取flen與len大的到flen
            }
            if (cU > k)//超過k個
            {
                len = k;//目前的字串交錯長度為k
            }
        }
        else if (isUpcase(str_Msg[i])==true && precap==false)//之前是小寫，現在是大寫
        {
            if (cL<k)//連續小寫小於k個，且目前字元是大寫
            {
                len = 0;//目前的字串交錯長度為0
            }
            cU=1;
            cL=0;
            if (cU == k)//達到k個長度
            {
                len += k;//目前的字串交錯長度遞增k
                len2 = int_max(len2,len);//len有更新，取flen與len大的到flen
            }
            precap=true;//目前是大寫，供之後判斷
        }
        else if (isLowercase(str_Msg[i])==true && precap==false)//連續小寫
        {
            cL++;//cL遞增1
            cU=0;
            if (cL == k)//達到k個長度
            {
                len += k;//目前的字串交錯長度遞增k
                len2 = int_max(len2,len);//len有更新，取flen與len大的到flen
            }
            if (cL > k)//超過k個
            {
                len = k;//目前的字串交錯長度為k
            }
        }
        else if (isLowercase(str_Msg[i])==true && precap==true)//之前是大寫，現在是小寫
        {
            if (cU<k)//連續大寫小於k個，且目前字元是小寫
            {
                len = 0;//目前的字串交錯長度為0
            }
            cL=1;
            cU=0;
            if (cL == k)//達到k個長度
            {
                len += k;//目前的字串交錯長度遞增k
                len2 = int_max(len2,len);//len有更新，取flen與len大的到flen
            }
            precap=false;//目前是小寫，供之後判斷
        }
    }
    std::cout << len2 << std::endl;
}

bool isUpcase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isLowercase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int  int_max(int a,int b)
{
    if(a>b)
        {
            return a;
        }
    else
        {
            return b;
        }
}

/*
1.isalpha:
    isalpha()用來判斷一個字符是否為字母，如果是字符則返回非零，否則返回零。
	cout << isalpha('a');//返回非零
	cout << isalpha('2');//返回0
2.isalnum:
isalnum()用來判斷一個字符是否為數字或者字母，也就是說判斷一個字符是否屬於a~z||A~Z||0~9。
    cout << isalnum('a');//输出非零
	cout << isalnum('2');//非零
	cout << isalnum('.');//零
3.islower:
islower()用來判斷一個字符是否為小寫字母，也就是是否屬於a~z。

	cout << islower('a');//非零
	cout << islower('2');//输出0
	cout << islower('A');//输出0
4.isupper:
isupper()和islower相反，用來判斷一個字符是否為大寫字母。
    cout << isupper('a');//返回0
	cout << isupper('2');//返回0
	cout << isupper('A');//返回非零
*/
