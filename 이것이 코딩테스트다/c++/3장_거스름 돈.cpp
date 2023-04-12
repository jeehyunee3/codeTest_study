#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 1260;
	int coin=0;
	
	int coin500 = n/500;
	n = n-(500*coin500);
		
	int coin100 = n/100;
	n = n-(100*coin100);
	
	int coin50 = n/50;
	n = n-(50*coin50);
	
	int coin10 =n/10;
	n = n-(10*coin10);
	
	if(n==0){
		coin = coin500+coin100+coin50+coin10;
	}
	
	printf("%d", coin);
	
	return 0;
} 
