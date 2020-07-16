#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n;
	int **a,**c;
	file>>n;
	a=new int*[n];
	c=new int*[n];
	for(int i=0;i<n;i++){
		a[i]=new int[n];
		c[i]=new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			file>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>j){
				c[i][j] = a[i][j] - a[j][i];
			}else{
				c[i][j]=0;
			}
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
