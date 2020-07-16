#include <iostream>
#include <fstream>
#include <cstdlib> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	string a;
	int m,n,s;
	getline(file,a);
	file>>s;
	m=(int)a[0]-48;
	n=(int)a[2]-48;
	int begin=4;
	int data[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			data[i][j]=(int)a[begin]-48;
			begin+=2;
		}
	}
	int left=0,right=m-1,midI,midJ,count=0,findI,findJ;
	while(left<right){
		midI=(left+right)/2;
		if(data[midI][0]>s){
			right=midI-1;
			findI=right;
		}else{
			if(data[midI][n-1]<s){
				left=midI+1;
				findI=left;
			}else{
				findI=midI;
				count++;
				break;
			}
		}
		count++;
		
	}
	cout<<count<<","<<findI<<",";
	left=0;right=n-1;
	while(left<right){
		midJ=(left+right)/2;
		if(data[findI][midJ]<s){
			left=midJ+1;
			findJ=left;
		}else{
			if(data[findI][midJ]>s){
				right=midJ-1;
				findJ=right;
			}else{
				findJ=midJ;
				count++;
				break;
			}
		}
		count++;
	}
	if(data[findI][findJ]==s){
		cout<<count<<","<<findJ;
	}else{
		cout<<count<<","<<"§ä¤£¨ì"<<endl; 
	}
	return 0;
}
