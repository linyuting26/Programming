#include <iostream>

int main()
{
  int fri[50001];
  int visit[50001];
  int n;//n刮砰い计
  int next;
  int count=0;//count暗璸计
  std::cin>>n;
  for(int i=0;i<n;i++)
    {
        std::cin>> fri[i];
        visit[i]=0;//秨﹍安砞常⊿砐筁
    }
    for(int i=0;i<n;i++)
    {

        if (visit[i]==0)
            {//⊿Τ砐筁
                if (fri[i]==i)
                    {//狟ねΤ
                        count++;
                        visit[i]=1;//ボΤ砐筁
                    }
                else
                    {
                        next=i;
                        while(visit[next]==0)
                            {
                                visit[next]=1;//ボΤ砐筁
                                next=fri[next];
                            }
                        count++;
                    }
            }
    }
    std::cout<<count<<std::endl;
}
