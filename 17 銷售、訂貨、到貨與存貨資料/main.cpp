#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int m,n,s,t;//m程秖n夹非秖s11ぱ砯秖tㄢぱ璹砯秖
	int box[5][13]={0};
	 string out[4]={"綪砯秖","璹砯计","砯计","砯秖"};
	 file>>m>>n>>s>>t;
	 box[1][12]=t;
	 box[1][11]=t;
	 box[3][11]=s;
	 cout<<"玡秅计";
	 for(int i=10;i>=1;i--){
	 	cout<<","<<i;
	 	file>>box[0][i];
	 	box[2][i]=box[1][i+2];//砯计=ㄢぱ玡璹砯计 
	 	box[3][i]=box[3][i+1]-box[0][i]+box[2][i];//砯秖=玡ぱ砯-さぱ綪砯+さぱ砯 
	 	if(box[3][i]<m){
	 		box[1][i]=n-box[3][i];//狦砯程秖玥璹砯秖=夹非秖-砯秖 
	 	}
	 }
	 cout<<"\n";
	  for(int j=0;j<4;j++){
	  	cout<<out[j];
	  	for(int i=10;i>=1;i--){
	  		cout<<","<<box[j][i];
	  	}
	  	cout<<"\n";
	  }
	return 0;
}
