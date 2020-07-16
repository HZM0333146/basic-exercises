#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	ifstream file("input.txt",ios::in);
	int n,count=0,a;
	file>>n;
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			if(i==j){
				continue;
			}
			for(int k=0;k<10;k++){
				if(i==k||j==k){
					continue;
				}
				count++;
				if(count==n){
					a=i*100+j*10+k;
				}
			}
		}
	}
	cout<<count<<","<<a;
	
	return 0;
}
