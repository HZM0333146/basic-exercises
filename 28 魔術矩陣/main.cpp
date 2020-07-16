#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt");
	for(int xx=0;xx<2;xx++){//全部做兩次 
		int n;
		file>>n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				file>>a[i][j];
			}
		}
		bool sum_same=true,all_difference=true;//判斷魔術的變數 
		int is[n],js[n],s1=0,s2=0;//縱總和,橫總和,對角總和 
		for(int i=0;i<n;i++){//初始化 
			is[i]=0;
			js[i]=0;
		}		
		for(int i=0;i<n;i++){//加總 
			for(int j=0;j<n;j++){
				is[i]+=a[i][j];
				js[j]+=a[i][j];
				if(i==j){//對角一 
					s1+=a[i][j];
				}
				if(i+j==n-1){//對角二 
					s2+=a[i][j];
				}
			}
		}	
		if(s1!=s2){//判斷對角 
			sum_same=false;
		}
		for(int i=0;i<n;i++){//判斷其他加總 
			for(int j=0;j<n;j++){
				if(is[i]!=js[j]){
					sum_same=false;
				}
			}
		}
		for(int i=0;i<n;i++){//判斷陣列成員相異 
			for(int j=0;j<n;j++){
				for(int k=i+1;k<n;k++){
					for(int l=j+1;l<n;l++){
						if(a[i][j]==a[k][l]){
							all_difference=false;
						}
					}
				}
			}
		}
		int sum=0,mut=1;
		for(int i=0;i<n;i++){//輸出用 
			sum+=a[0][i];
			mut*=a[0][i];
		}
		if(sum_same==true&&all_difference==true){//魔術 
			cout<<sum<<endl;
		}else{//不是 
			cout<<mut<<endl;
		}
	}	
	return 0;
}
