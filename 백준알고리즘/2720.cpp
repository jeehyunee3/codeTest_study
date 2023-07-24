#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	
	vector<int> cc;
	
	for(int i=0; i<t; i++){
		int tmp;
		scanf("%d", &tmp);
		cc.push_back(tmp);
	}
	
	for(int i=0; i<t; i++){
		int c = cc[i];
		
		int arr[] = {25, 10, 5 ,1};
		int arrNum = sizeof(arr) / sizeof(arr[0]);
		
		vector<int> coinList(arr, arr+arrNum);
		
		vector<int> coin;
		for(int j =0; j<coinList.size(); j++){
			coin.push_back(c/coinList[j]);
			c = c%coinList[j];
		}
		
		for(int j =0; j<coin.size(); j++){
			printf("%d ", coin[j]);
		}
		printf("\n");
	}
}
