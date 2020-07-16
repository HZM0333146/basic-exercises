#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int inx,iny,ser,num=0;
	file>>inx>>iny;
	int **A,**sor;
	A=new int*[iny];
	for(int i=0;i<iny;i++){
		A[i]=new int[inx];
	}
	for(int i=0;i<2;i++){
		sor[i]=new int[inx*iny];
	}
	for(int i=0;i<iny;i++){
		for(int j=0;j<inx;j++){
			file>>A[i][j];
			sor[0][num]=A[i][j];
			sor[1][num]=inx*iny;
			num++;
		}
		
	}
	file>>ser;
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(sor[0][i]>sor[0][j]){
				sor[1][i]--;
			}
		}
	}
	for(int i=0;i<num;i++){
		if(sor[1][i]==ser){
			cout<<(sor[0][i])<<",("<<(i/inx)<<","<<(i%inx)<<")";
		}
		
	}
	return 0;
}
