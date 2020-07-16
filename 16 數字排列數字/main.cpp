#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n;
	file>>n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		for(int j=2*n+1;j>=2*i+1;j--){
			cout<<j<<" ";
		}
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
