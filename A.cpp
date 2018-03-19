#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	do{
		cout<<num<<" ";
		if(num%2==1){num=3*num+1;}
		else{num=num/2;}
	}while(num!=1);
	cout<<1<<endl;
	return 0;
}
