#include<iostream>

using namespace std;

bool isSu(int n){
	if(n==1) return false;
	bool isok=true;
	for(int i=2;i<n;i++){
		if(n%i==0) isok=false;
	}
	return isok;
}

int main(){
	int stack[100],top=-1;
	for(int i=1;i<=100;i++){
		if(isSu(i)) stack[++top]=i;
	}
	int count=0;
	for(int i=0;i<top;i++){
		if(stack[i]+2==stack[i+1]){
			cout<<stack[i]<<"-"<<stack[i+1]<<endl;
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
} 
