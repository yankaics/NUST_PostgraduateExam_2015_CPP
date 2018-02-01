#include<iostream>

using namespace std;

int main(){
	int M,N;
	cin>>M>>N;
	cout<<M<<"/"<<N<<"=0.";
	int result[100],site[100];
	for(int i=0;i<100;i++) site[i]=-1;
	int flag;
	for(flag=0;flag<100;flag++){
		site[M]=flag;
		M*=10;
		result[flag]=M/N;
		M=M%N;
		if(M==0) break;	//有限小数 
		if(site[M]!=-1) break;	//开始循环 
	}
	if(M==0){
		for(int i=0;i<=flag;i++){
			cout<<result[i];
		}
		cout<<endl;
	} else{
		for(int i=0;i<=flag;i++){
			cout<<result[i];
		}
		cout<<" 无限循环小数，从第"<<site[M]+1<<"位开始循环"<<endl;
	}
	return 0;
} 
