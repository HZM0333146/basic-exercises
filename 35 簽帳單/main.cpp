#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n,paynum,month,day,price;
	string cardnum;
	file>>n;
	for(int i=0;i<n;i++){
		file>>paynum;
		file>>cardnum;
		file>>month;
		file>>day;
		file>>price;
		if(month==9){
			if(paynum%10+price/10%10==day%19){
				cout<<cardnum<<"\t"<<month<<"\t"<<day<<endl;
			}
		}
	}
	return 0;
}
