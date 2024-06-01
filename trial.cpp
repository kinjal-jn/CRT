#include<iostream>
using namespace std;

int main() {
	
	int n= 12345;
	int sumEven=0;
	int sumOdd=0;
	while(n>0){
		int ans= n%10;
		n=n/10;
		if(ans/2==0){
			sumEven= sumEven + ans;
		}
		else{
			sumOdd= sumOdd +ans;
		}
	}
	cout<<sumEven<<" "<<sumOdd;

}
