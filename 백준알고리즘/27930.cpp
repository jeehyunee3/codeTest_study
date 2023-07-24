#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	string korea="KOREA";
	int kIdx=0;
	
	string yonsei="YONSEI";
	int yIdx=0;
	
	for(int i=0; i<str.size(); i++){
		char tmp=str[i];
		if(korea[kIdx]==tmp) kIdx++;
		if(yonsei[yIdx]==tmp) yIdx++;
		
		if(kIdx==korea.size()){
			cout<<korea;
			break;
		}else if(yIdx==yonsei.size()){
			cout<<yonsei;
			break;
		}
	} 
}
