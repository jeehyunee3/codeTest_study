#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	
	vector<vector<int> > card;
	vector<int> min;
	
	for(int i=0; i<n; i++){
		vector<int> tmp_card;
		for(int j=0; j<m; j++){
			int tmp;
			scanf("%d", &tmp);
			tmp_card.push_back(tmp);
		}
		sort(tmp_card.begin(), tmp_card.end());
		min.push_back(tmp_card[0]);
		card.push_back(tmp_card);
	}
	
	printf("%d", *max_element(min.begin(), min.end()));
	
}

//3 3
//3 1 2
//4 1 4
//2 2 2

//2 4 
//7 3 1 8
//3 3 3 4
