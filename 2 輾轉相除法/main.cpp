#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int x,y,r,count=0;
	file>>x>>y;
	if(x<y){
		r=x;
		x=y;
		y=r;
	}
	while(y!=0){
		r=x%y;
		x=y;
		y=r;
		count++;
	}
	cout<<count<<" , "<<x;
	return 0;
}
