#include <iostream>

int gcd(int x,int y);
void Getfraction(int& Numerator,int& Denominator);//Getfractionだ计

int main()
{
    int max_Numerator=0;
    int max_Denominator=0;
    double max_Result=0;
    double min_Result=0;
    int min_Numerator=0;//Numeratorだ
    int min_Denominator=0;//Denominatorだダ
    int Number=0;
    std::cin>>Number;
    for(int i=1;i<=Number;i++)
    {
            double Numerator=0;
            double Denominator=0;
            std::cin>>Numerator>>Denominator;
            if(i==1)
            {
                    max_Result=Numerator/Denominator;
                    max_Numerator=(int)Numerator;
                    max_Denominator=(int)Denominator;
                    min_Result=Numerator/Denominator;
                    min_Numerator=(int)Numerator;
                    min_Denominator=(int)Denominator;
            }
            if(Numerator/Denominator>max_Result)
            {
                    max_Result=Numerator/Denominator;
                    max_Numerator=(int)Numerator;
                    max_Denominator=(int)Denominator;
            }
            if(Numerator/Denominator<min_Result)
            {
                    min_Result=Numerator/Denominator;
                    min_Numerator=(int)Numerator;
                    min_Denominator=(int)Denominator;
            }
    }
    if(max_Numerator!=0)
    {
        Getfraction(max_Numerator,max_Denominator);
    }
    if(min_Numerator!=0)
    {
        Getfraction(min_Numerator,min_Denominator);
    }
    std::cout<<max_Numerator<<" "<<max_Denominator<<std::endl;
    std::cout<<min_Numerator<<" "<<min_Denominator<<std::endl;
    return 0;
}

int gcd(int x,int y)
{
    if(x<y)
    {
            int temp=x;
            x=y;
            y=temp;
    }
        while(x!=0)
        {
                x=x%y;
                if(x!=0)
                {
                        int temp=x;
                        x=y;
                        y=temp;
                }
        }
            return y;
}

void Getfraction(int& Numerator,int& Denominator)
{
    if(gcd(Numerator,Denominator)!=1)
    {
            int temp=Numerator;
            Numerator=Numerator/gcd(Numerator,Denominator);
            Denominator=Denominator/gcd(temp,Denominator);
    }
    if(Denominator<0)
    {
            Numerator=Numerator*-1;
            Denominator=Denominator*-1;
    }
}
//程そ计璣粂highest common factorhcf程そ计璣粂greatest common divisorgcd
