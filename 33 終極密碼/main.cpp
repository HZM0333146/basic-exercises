#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n;
	file>>n;
	int max=99,min=1,count=0;
	while(true){
		int guess=(max+min)/2;
		count++;
		if(guess>n){
			max=guess-1;
		}else if(guess<n){
			min=guess+1;
		}else{
			cout<<"all guess¡G "<<count<<" times get "<<guess<<" !"<<endl; 
			break;
		}
	}
	return 0;
}
