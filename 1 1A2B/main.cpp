#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream iof("input.txt",ios::in);
	int n,t=0,f=0;
	string a,b;
	iof>>n>>a>>b;
	cout<<n<<"  "<<a<<"  "<<b<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a.at(i)==b.at(j)){
				if(i!=j){
					f++;
				}else{
					t++;
				}		
			}	
		}		
	}
	cout<<t<<"A"<<f<<"B"<<endl;
	/*
		ifstream file("1.txt",ios::in);
		
		int a[10];
		int b[10];
		int n,na,nb;
		int ca=0;cb=0;
		
		file>>n>>na>>nb;
		
		for(int i=0;i<n;i++){
			a[i]=na%10;
			b[i]=nb%10;
			na=na/10;
			nb=nb/10;
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i]==b[j]){
					if(i==j){
						ca++;
					}else{
						cb++;
					}
				}
		}
	*/ 
	return 0;
}
