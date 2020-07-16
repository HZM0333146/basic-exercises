#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int m;
	int *a;
	file>>m;
	a=new int[m];
	for(int i=0;i<m;i++){
		file>>a[i];
	}
	for(int i=0;i<m;i+=3){
		if(a[i]%2==0){
			cout<<2; 
		}else{
			cout<<a[i]*2;
		}
		if(m-i>3){
			cout<<"¡A";
		}
	}
	return 0;
}
