#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int **T;
	int **P;
	T=new int*[3];//宣告T 給空間 
	for(int i=0;i<3;i++){
		T[i]=new int[3];
	}
	P=new int*[7];//宣告P 給空間
	for(int i=0;i<7;i++){
		P[i]=new int[7];
	}
	for(int i=0;i<3;i++){//讀入T 
		for(int j=0;j<3;j++){
			file>>T[i][j];
		}
	}
	for(int i=0;i<5;i++){//讀入P
		for(int j=0;j<7;j++){
			file>>P[i][j];
		}
	}
	for(int i=0;i<=(5-3);i++){//讀入T 
		for(int j=0;j<=(7-3);j++){
			for(int k=0;k<3;k++){
				if(P[i][j+k]!=T[0][k]||P[i+1][j+k]!=T[1][k]||P[i+2][j+k]!=T[2][k]){
			   		break;
			   }
				if(k==2){//小陣列的長度，此為3，3-1代表到最後一格都是正確的 
					cout<<i<<","<<j;
				}
			}
		}
	}
	return 0;
}
