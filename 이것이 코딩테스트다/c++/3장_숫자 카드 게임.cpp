#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	
	vector< vector<int> > mat;
	
	for(int i=0; i<n; i++){
		vector<int> tmp;
		for(int j=0; j<m; j++){
			int num;
			cin>>num;
			tmp.push_back(num);
		}
		sort(tmp.begin(), tmp.end());
		mat.push_back(tmp);
	}
	
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			printf("%d ", mat[i][j]);
//		}
//		printf("\n");
//	}
	
	int maxNum=0;
	
	for(int i=0; i<n; i++){
		if(maxNum<mat[i][0]){
			maxNum=mat[i][0];
		}
	}
	
	printf("%d", maxNum);
	
}
