#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool prim(int x){
	int count=0;
	for(int i=1;i<=x;i++){
		if(x%i==0){
			count++;
		}
	}
	if(count>2){
			return false;
		}else{
			return true;
		}	
}
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n,a=0,b=0;
	file>>n;
	for(int i=0;i<n;i++){
		file>>a>>b;
		int count=0,sum=0;//宣告變數：個數、加總
		for(int j=a;j<=b;j++){
			if(prim(j)==true){
				count++;
				sum+=j;
			}
		}
		cout<<count<<" , "<<sum<<endl;
	}
	
	
	return 0;
}
