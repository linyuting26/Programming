#include <iostream>

int main()
{
  int fri[50001];
  int visit[50001];
  int n;//n�����餤���H��
  int next;
  int count=0;//count���p��
  std::cin>>n;
  for(int i=0;i<n;i++)
    {
        std::cin>> fri[i];
        visit[i]=0;//�@�}�l���]���S���X�L
    }
    for(int i=0;i<n;i++)
    {

        if (visit[i]==0)
            {//�S�����X�L
                if (fri[i]==i)
                    {//�n�B�ͥu���ۤv
                        count++;
                        visit[i]=1;//��ܦ����X�L
                    }
                else
                    {
                        next=i;
                        while(visit[next]==0)
                            {
                                visit[next]=1;//��ܦ����X�L
                                next=fri[next];
                            }
                        count++;
                    }
            }
    }
    std::cout<<count<<std::endl;
}
