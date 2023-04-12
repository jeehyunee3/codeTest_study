#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	//조건 횟수 받아오기 
	int n = 0;
	int m = 0;
	int k = 0;
	cin>>n>>m>>k;
	//일차원 벡터 생성 
	vector<int> arr;
	for(int i=0; i<n; i++){
		int tmp=0;
		cin>>tmp;
		arr.push_back(tmp);
	}
	//내림차순 정렬 
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	//최대 수 만들기 
	int sum=0; 
	int idx=0;
	int count=0;
	for(int i=0; i<m; i++){
		sum+=arr[idx];
		count+=1;
		if(idx==0 and count==k){//가장 큰 수가 3번 연속된 경우 
			idx+=1;
			count=0;
		}else if(idx!=0 and count==1){//다음 큰 수가 1번 사용된 경우 
			idx-=1;
			count=0;
		}		
	}
	//출력 
	printf("%d", sum);
	
	return 0;
}
