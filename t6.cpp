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
		if(M==0) break;	//����С�� 
		if(site[M]!=-1) break;	//��ʼѭ�� 
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
		cout<<" ����ѭ��С�����ӵ�"<<site[M]+1<<"λ��ʼѭ��"<<endl;
	}
	return 0;
} 
