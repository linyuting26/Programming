#include <iostream>
#include <string>
using namespace std;
bool isUpcase(char ch);
int main()
{

    string input;
    cin >> input;
    bool is_upcase =false;
    if(isUpcase(input[0])) is_upcase = true;
    int sum = 1,max_sum = 1;
    for(int i = 1 ; i < input.length() ; i++)
    {
        if( isUpcase(input[i]) == is_upcase)
        {
            sum++;
            if(sum > max_sum)
            {
                max_sum = sum;
            }
        }
        else
        {
            sum = 1;
            is_upcase = !is_upcase;
        }

    }
    cout << max_sum<<endl;

    return 0;
}
bool isUpcase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return true;
    else
        return false;
}
