#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int m,n,num,**arr;
	file>>m>>n>>num;
	arr=new int*[num];
	for(int i=0;i<num;i++){
		arr[i]=new int [3];
		file>>arr[i][0];
		file>>arr[i][1];
		file>>arr[i][2];
	}
	cout<<n<<"\t"<<m<<"\t"<<num<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<num;k++){
				if(i==arr[k][1]&&j==arr[k][0]){
					cout<<arr[k][1]<<"\t"<<arr[k][0]<<"\t"<<arr[k][2]<<endl;
				}
			}
		}
	}
	return 0;
}
