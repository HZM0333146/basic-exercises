#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream iof("file.txt",ios::in);
	int **a,n,m,sum=0;
	iof>>n>>m;
	a=new int*[m];
	for(int i=0;i<m;i++){
		a[i]=new int [n+1];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			iof>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		a[i][n]=0;
		for(int j=0;j<n;j++){
			if(a[i][j]>a[i][n]){
				a[i][n]=a[i][j];
			}
		}
		sum=sum+a[i][n];
	}
	float ave=(float)sum/(float)m;
	cout<<sum<<" , "<<ave<<endl;
	return 0;
}
