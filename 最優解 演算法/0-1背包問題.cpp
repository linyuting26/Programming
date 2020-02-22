#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	cin.sync_with_stdio(false), cin.tie(nullptr);
	int objects, DP[101], volume, profit;
	while (cin >> objects) {
		memset(DP, 0, sizeof(DP));
		for(int cnt=0;cnt<objects;cnt++){
		    cin >> volume >> profit;
			for (int cnt2 = 100; cnt2 >= volume; cnt2--){
				DP[cnt2] = max(DP[cnt2], DP[cnt2 - volume] + profit);
			}
		}
		cout << DP[100] << '\n';
	}
}
