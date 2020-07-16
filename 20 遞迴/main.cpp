#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int f(int n,int m){
	if(n>m&&m>0){
		return f(n-1, m-1) + f(n-1, m) ;
	}
	if(m==n||m==0){
		return 1;
	}
}
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int num,m,n;
	file>>num;
	if(num<1||num>100){
		cout<<"½d³ò¿ù»~"<<endl; 
	}else{
		for(int i=0;i<num;i++){
			file>>n>>m;
			cout<<"f("<<n<<","<<m<<")= "<<f(n,m)<<endl;
		}
	}
	return 0;
}
