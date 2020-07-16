#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int total=0;
void test(string* source,string* select,int num,int m,int n){
	for(int i=m-1;i>=n-1;i--){
		select[n-1]=source[i];
		if(n>1){
			test(source,select,num,i,n-1);
		}else{
			total++;
			for(int j=num-1;j>=0;j--){
				cout<<select[j];
			}
			cout<<",";
		}
	}	
}
int main(int argc, char** argv) {
	int m,n;
	ifstream file("file.txt",ios::in);
	file>>m>>n;
	string ans="";
	string *source=new string[m];
	string *select=new string[n];
	for(int i=0;i<m;i++){
		source[m-i-1]=(char)(65+i);
	}
	test(source,select,n,m,n);
	cout<<total;
	return 0;
}
