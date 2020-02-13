#include <iostream>
#include <string>

int main()
{
    std::string str_Msg ="";
    std::cin >> str_Msg;
    int var =0;
    if (26>var)
    {
        for (int i =0;26>i;i++)
        {
            int Count =0;
            for (int j =0;str_Msg.length()>j;j++)
            {
                if (str_Msg[j]=='A'+i||str_Msg[j]=='a'+i)
                {
                    Count++;
                }
            }
            if (var==25)
            {
                std::cout << Count << std::endl;
            }
            else
            {
            std::cout << Count << " ";
            }
            var++;
        }
    }
    return 0;
}
