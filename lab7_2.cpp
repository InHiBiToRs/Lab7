#include<iostream>

using namespace std;

int main(){
	
	int i = 0, P[5000], k;
	while(i < 5000){
		P[i] = 2*i+1;
		i++;
	}
	cout << "Please input k: ";
	cin >> k;
	if(k>0){
		int l = 0,result = 0;
		while(l < 5000){
			if(P[l]%k == 0){
				result = result - P[l];
			}else{
				result = result + P[l];
			}
			l++;
		}
		cout << "Result = " <<result;
	}else{
		cout << "Invalid input!!!";
	}
	return 0;
}