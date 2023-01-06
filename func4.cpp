#include<iostream>
#include<bits/stdc++.h>
using namespace std;

	bool isPrime(int x){
		for(int i=2;i<x;i++){
		   if(x%i==0)
			return false;
	   else
		return true;
	   
	}
}

 int nextPrime(int x){
	while(true){
		x++;
		if(isPrime(x))
			return x;
		}
	}	


   int main(){
	int n;
	cin>>n;
	cout<<nextPrime(n);
return 0;
}
	

