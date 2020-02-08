#include <iostream>
#include <string>

bool repeat(std::string str2);

int main()
{
    std::string str="";//答案的長度
    std::cin>> str;
    int number=0;
    std::cin>>number;
   if(repeat(str)==true)
        {
            std::cout<<"Error, number repeated.\n";
            return 1;//return 0終結程式
        }
    for(int N=1;N<=number;N++)
        {
            std::cout<<"Guess Number:";
            std::string str2="";//猜的長度
            std::cin>>str2;
            if(repeat(str2)==true)
                {
                   std::cout<<"Error, number repeated.\n";
                   break;
                }
            if(str2.length()!=4)
                {
                    std::cout<<"Length difference!\n";
                    break;
                }
                int A=0;
                int B=0;
                for(int i=0;i<str.length();i++)
                    {
                        for(int j=0;j<str2.length();j++)
                            {
                                if(str[i]==str2[j])
                                    {
                                        if(i==j)
                                            {
                                                A++;
                                            }
                                        else
                                            {
                                                B++;
                                                break;
                                            }
                                    }
                            }
                    }

        std::cout<< "Message:" << A << "A" << B << "B\n";
        if(A==4&&B==0)
            {
                std::cout<<"You are right!\n";
                break;
            }
        if(N==number)
            {
                std::cout<<"You do not guess the right number!\n";
            }
        }
    return 0;
}

bool repeat(std::string str2)
{
    if(str2[0]==str2[1]||str2[0]==str2[2]||str2[0]==str2[3]||str2[1]==str2[2]||str2[1]==str2[3]||str2[2]==str2[3])
        {
            return true;
        }
    else
        {
            return false;
        }
}
