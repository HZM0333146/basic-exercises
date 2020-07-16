#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n,k,word,squ,num=0;
	int box[100]={0};
	file>>n;
	//取得第一個方程式 
	for(int i=0;i<n;i++){
		file>>word;
		file>>squ;
		box[squ]=word;
	}
	file>>n;
	//取得第二個方程式並與第一個方程式相加
	for(int i=0;i<n;i++){
		file>>word;
		file>>squ;
		box[squ]+=word;
	}
	 file>>n;
	for(int i=9;i>=0;i--){
		if(box[i]!=0){//找出!=0的數 
			num++;
			if(num==n){
				word=box[i];
				squ=i; 
			}
		}
	} 
	cout<<num<<endl;
	cout<<word<<" "<<squ<<endl;
	
	return 0;
}
