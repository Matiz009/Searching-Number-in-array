#include<iostream>
using namespace std;
int main(){
	int a[10]={12,34,33,22,37,88,99,111,222,31};
	int i;
	int num;
		cout<<"Enter the number you want to find:\t";
		cin>>num;
		for(i=0;i<4;i++){
			if(a[i]==num){
				cout<<"Number found at "<<i<<" position";
			}
			
		}
		return 0;
		
}
