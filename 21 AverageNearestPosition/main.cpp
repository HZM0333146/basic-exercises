#include <iostream>
#include <fstream> 
#include <math.h>
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
			sum=sum+a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		a[i][n]=0;
		for(int j=0;j<n;j++){
			if(a[i][j]>a[i][n]){
				a[i][n]=a[i][j];
			}
		}
		
	}
	float ave=(float)sum/(float)(m*n);
	
	int near=999,x,y;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(abs(near-ave)>abs(a[i][j]-ave)){
				near=a[i][j];
				x=i;
				y=j;
			}
		}
	}
	
	cout<<"Average: "<<ave<<endl;
	cout<<"Nearest: "<<near<<endl;
	cout<<"Position: "<<x<<" , "<<y<<endl;
	return 0;
}
