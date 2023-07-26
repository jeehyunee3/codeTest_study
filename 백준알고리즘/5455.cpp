#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	int dcal;
	vector<int> tcal;
	
	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	scanf("%d", &dcal);
	
	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		tcal.push_back(tmp);
	}
	
	sort(tcal.rbegin(), tcal.rend());
	
	int best = ceil(dcal/a);
	
	for(int i=0; i<n+1; i++){
		int cal=dcal;
		int coin=a;
		for(int j=0; j<i; j++){
			cal+=tcal[j];
			coin+=b;
		}
		int tmp = ceil(cal/coin);
//		printf("%d-%d\n", i, tmp);
		if(best<tmp){
			best=tmp;
		}
	}
	
	printf("%d", best);
}
