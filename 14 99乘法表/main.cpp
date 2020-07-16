#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int m,n;
	file>>m>>n;
	for(int i=2;i<=m;i+=n){
		for(int j=1;j<=m;j++){
			for(int k=i;k<i+n&&k<=m;k++){
				cout<<k<<" * "<<j<<" = "<<k*j<<"\t";
			}
			cout<<endl;				
		}
		cout<<endl;
	}
	return 0;
}
