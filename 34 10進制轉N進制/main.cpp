#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string strary[16]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int num,ary;
	file>>num>>ary;
	int *a;
	a=new int[ary];
	for(int i=0;i<ary;i++){//結果先設為0 
		a[i]=0;
	}
	string result="";
	while(num!=0){
		int r;
		r=num%ary;
		num/=ary;
		result=strary[r]+result;
		a[r]++;//計算每個值的次數 
	}
	cout<<result<<", ";
	cout<<"{";
	for(int i=0;i<ary;i++){//列出所有結果不為0的數值及個數 
		if(a[i]!=0){
			cout<<strary[i]<<"："<<a[i]<<", "; 
		}
	}
	cout<<"}";
	return 0;
}
