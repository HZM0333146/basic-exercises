#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int m,d;
	file>>m>>d;
	int *a;
	a=new int[m];
	for(int i=0;i<m;i++){
		file>>a[i];
	}
	for(int i=0;i<m;i+=d){
		if(a[i]%2==0){
			a[i]=a[i]/2;
		}
		if(a[i]%3==0){
			a[i]=a[i]/3;
		}
		cout<<a[i]<<" ";
	}
	return 0;
}
