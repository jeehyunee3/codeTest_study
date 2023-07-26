#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	scanf("%d %d", &n,&k);
	
	int cnt=0;
	
	while(true){	
		if(n==1) break;
		
		if(n>k and n%k==0){
			n=n/k;
			cnt++;
		}else{
			n = n-1;
			cnt++;
		}		
	}
	
	printf("%d", cnt);

}

//25 5

//17 4
