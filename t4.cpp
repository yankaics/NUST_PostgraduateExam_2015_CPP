#include<iostream>

using namespace std;

int main(){
	int a,n;
	cin>>a>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		int tuple=0;
		for(int j=0;j<i;j++){
			tuple=tuple*10+a;
		}
		sum+=tuple;
	}
	cout<<sum<<endl;
	return 0;
}
