#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n;
	int *a,*b,*c;
	file>>n;
	a=new int[n];
	b=new int[n];
	c=new int[n];
	for(int i=0;i<n;i++){
		file>>a[i];
	}
	for(int i=0;i<n;i++){
		file>>b[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		c[i]=(a[i]+b[i])%7;
		cout<<c[i];
		if(n-i>1){
			cout<<"¡A";
		}
		sum+=c[i];
	}
	cout<<endl<<sum;
	return 0;
}
