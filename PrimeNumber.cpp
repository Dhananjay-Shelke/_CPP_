//Prime Number 
#include<iostream>
using namespace std;
int main(){
	int n,flag=0;
	cout << "Enter Number : ";
	cin >> n;
	
	for(int i=2; i<n/2 ; i++){
		if(n%i==0){
			cout << "Number is a Non Prime Number ";
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout << "Number is Prime";
}

