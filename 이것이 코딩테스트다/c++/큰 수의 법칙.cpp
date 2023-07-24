#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	
	vector<int> vec;
	
	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		vec.push_back(tmp);
	} 
	
	sort(vec.begin(), vec.end());
	
	int max_one=vec[n-1];
	int cnt_one=(m/(k+1))*k + m%(k+1);
	
	int max_two=vec[n-2];
	int cnt_two=m-cnt_one;
	
	int max_num = max_one * cnt_one + max_two * cnt_two;
	
	printf("%d", max_num);
	
}

//5 8 3
//2 4 5 4 6
