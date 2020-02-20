#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int, vector<int>, greater<int> > pq;
    int number=0, answer=0;
    cin.tie(0), ios_base::sync_with_stdio(false);
    cin>>number;
    for(int cnt=0;cnt<number;cnt++){
        int element=0;
        cin>>element;
        pq.emplace(element);
    }
    while(pq.size()>1){
        int temp=pq.top();
        pq.pop();
        temp+=pq.top();
        answer+=temp;
        pq.pop();
        pq.emplace(temp);
    }
    cout<<answer<<"\n";
	return 0;
}
