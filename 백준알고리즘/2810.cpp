#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	char seat[55];
	scanf("%s", &seat);
	
	int cup=0;
	int cntl=0;
	
	for(int i=0; i<n; i++){	
			
		char tmp=seat[i];
		
		if(i==0){
			cup++;
		}

		if(tmp=='S'){
			cup++;
		}else if(tmp=='L'){
			cntl++;
			if(cntl%2==0){
				cup++;
			}
		}

	}
	if(n<cup){
		printf("%d", n);
	}else{
		printf("%d", cup);
	}
	
} 
	
