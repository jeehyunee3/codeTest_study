#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	//���� Ƚ�� �޾ƿ��� 
	int n = 0;
	int m = 0;
	int k = 0;
	cin>>n>>m>>k;
	//������ ���� ���� 
	vector<int> arr;
	for(int i=0; i<n; i++){
		int tmp=0;
		cin>>tmp;
		arr.push_back(tmp);
	}
	//�������� ���� 
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	//�ִ� �� ����� 
	int sum=0; 
	int idx=0;
	int count=0;
	for(int i=0; i<m; i++){
		sum+=arr[idx];
		count+=1;
		if(idx==0 and count==k){//���� ū ���� 3�� ���ӵ� ��� 
			idx+=1;
			count=0;
		}else if(idx!=0 and count==1){//���� ū ���� 1�� ���� ��� 
			idx-=1;
			count=0;
		}		
	}
	//��� 
	printf("%d", sum);
	
	return 0;
}
