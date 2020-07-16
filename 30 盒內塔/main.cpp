#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int count=0;
int Hanoi(int n,int a,int b,int c){
	if(n==1){
		count++;
		return 1;	
	}else{
		return Hanoi(n-1,a,c,b)+1+Hanoi(n-1,b,a,c);
	}
}
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n;
	file>>n;
	cout<<Hanoi(n,1,2,3)<<" , ";
	cout<<count;
	return 0;
}
