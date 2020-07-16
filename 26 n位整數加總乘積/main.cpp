#include <iostream>
#include <fstream> 
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n,count=0,result[100];
	file>>n;
	for(int i=pow(10,n-1);i<pow(10,n);i++){//pow(n,m) 代表 n 的 m 次方 
		int sum=0,prod=1;
		int s=i;
		while(s!=0){
			int r=s%10;
			sum+=r;
			prod*=r;
			s/=10;
		}
		if(sum==prod){
			result[count]=i;
			count++;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		cout<<result[i]<<" ";
	}
	return 0;
}
