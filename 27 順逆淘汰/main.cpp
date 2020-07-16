#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n,m;
	file>>n>>m;
	string *name;//名稱 
	bool *islive;//是否存活
	name=new string[n];
	islive=new bool[n];
	for(int i=0;i<n;i++){
		file>>name[i];
		islive[i]=true;//預設存活狀態 
	} 
	int count=0,local=0;//計算死亡人數；local相當於座號 由0開始 
	int num=n;//計算剩餘人數 
	while(num>1){//當遊戲人數大於一時，則繼續遊戲 
		if(islive[local]){//如果存活在計算人數 
			count++;
			if(count==m){//m決定第幾個淘汰，如果相等表示淘汰 
				islive[local]=false;
				count=0;//重新計算存活人數 
				num--;
			}
		}
		local++; 
		if(local==n){
			local=0;//重頭(0)計算n個 
		} 
	}
	for(int i=0;i<n;i++){
		if(islive[i]){
			cout<<"Winner is ： "<<name[i]; 
		}
	}
	return 0;
}
