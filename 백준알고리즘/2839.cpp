#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n;
	scanf("%d", &n);
	
	int cnt=0;
	
	while(n>0){
		if(n%5==0){
			cnt+=(n/5);
			n%=5;
		}else{
			cnt++;
			n-=3;
		}		
	}
	
	if(n==0){
		printf("%d", cnt);
	}else{
		printf("-1");
	}
}
