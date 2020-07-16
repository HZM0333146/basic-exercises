#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int f(int n){
	if(n>2){
		return f(n-1)+f(n-3); 
	}else{
		if(n==0){
			return 0;
		}else{
			return 1;
		}
	}
		
	
}
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int m=0;
	file>>m;
	for(int i=0;i<m;i++){
		int store=0;
		file>>store;
		cout<<f(store);
		if(m-i>1){
			cout<<", ";
		}
		
			
	}
	return 0;
}
