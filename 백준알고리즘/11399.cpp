#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	vector<int> time;
	
	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		time.push_back(tmp);
	}
	
	sort(time.begin(), time.end());
	
	int all_time=0;
	for(int i=1; i<=n; i++){
		int tmp=0;
		for(int j=0; j<i; j++){
			tmp+=time[j];
		}
//		printf("%d-%d\n",i,tmp);
		all_time+=tmp;
	}
	
	printf("%d", all_time);
}
