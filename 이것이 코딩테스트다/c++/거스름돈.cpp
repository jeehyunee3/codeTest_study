#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	int coin = 0;
	
	int arr[] = { 500,100,50,10 };
    int arr_num = sizeof(arr) / sizeof(arr[0]);
    
    vector<int> coin_list(arr, arr + arr_num);

    
    for(int i=0; i<coin_list.size(); i++){
    	//printf("%d \n", n);
    	coin += n/coin_list[i];
    	n = n%coin_list[i];
	}
	
	printf("%d",coin);
}

