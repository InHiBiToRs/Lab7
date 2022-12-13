#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string Palindrome(string x,string y){
	int i =0, L = x.size();
	string z= "";
	while(i < L ){
		if(x[i] == y[i]){
			z = "Yes";
		}else{
			z = "No";
		}
		i++;
	}
	return z;
}

int main(){
	string x;
    cout << "Input text: ";
	cin >> x;
	string y = func1(x);

    cout << "Reversed text: " << y << endl;
    cout << "Palindrome: " << Palindrome(func2(x),func2(y));
    return 0;
}
