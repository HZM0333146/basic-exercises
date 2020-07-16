#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// bool prim(int); 
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
	int n=0;
	file>>n;
	for(int i=2;i<=n;i++){//最小的質數是2 
		if(prim(i)==true){
			cout<<i<<", ";
		}
	}
	return 0;
}
