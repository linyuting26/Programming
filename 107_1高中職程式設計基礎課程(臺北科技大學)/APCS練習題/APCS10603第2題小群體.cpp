#include <iostream>

int main()
{
  int fri[50001];
  int visit[50001];
  int n;//n為團體中的人數
  int next;
  int count=0;//count做計數
  std::cin>>n;
  for(int i=0;i<n;i++)
    {
        std::cin>> fri[i];
        visit[i]=0;//一開始假設都沒拜訪過
    }
    for(int i=0;i<n;i++)
    {

        if (visit[i]==0)
            {//沒有拜訪過
                if (fri[i]==i)
                    {//好朋友只有自己
                        count++;
                        visit[i]=1;//表示有拜訪過
                    }
                else
                    {
                        next=i;
                        while(visit[next]==0)
                            {
                                visit[next]=1;//表示有拜訪過
                                next=fri[next];
                            }
                        count++;
                    }
            }
    }
    std::cout<<count<<std::endl;
}
