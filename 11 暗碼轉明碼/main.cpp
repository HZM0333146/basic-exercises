#include <iostream>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
		string inx[2];//宣告兩個字串 
		bool ch=0;
		int scr=0;
		 		
		ifstream file("file.txt",ios::in);
		char n;
		while(file.get(n)){
			if(n=='\n'){
				ch=1;
				continue;
			}
			inx[ch]+=n;
			
		}
		//逐一讀取判斷 
		for(int i=0;i<inx[1].length();i++){
			scr=-1;
			for(int j=0;j<inx[0].length()-1;j++){
				if(inx[1].substr(i,1)==inx[0].substr(j,1)){
					scr=j;
					break;
				}
			}
			if(scr!=-1 && scr%2==0){
				cout<<inx[0].substr(scr+1,1);
			}else{
				cout<<inx[1].substr(i,1);
				}
		}
			return 0;
}
