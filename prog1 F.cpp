#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float getHypotenuse(int x,int y){
int t;
float z;
t=((x*x+y*y));
z=sqrt(t);
return z;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<getHypotenuse(a,b);
	return 0;
}
