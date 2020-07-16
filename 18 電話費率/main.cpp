#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);//第一次讀檔為了找到目標號碼 
	int time1=0,time2=0;
	string target="";
	while(true){
		file>>target;
		if(target=="#"){
			file>>target;
			break;
		}
	}
	file.close();
	ifstream file1("file.txt",ios::in);
	while(true){
		string nowphonenum="";
		int starhour=0,starmin=0,endhour=0,endmin;
		file1>>nowphonenum;
		if(nowphonenum=="#"){
			break;
		}
		file1>>starhour>>starmin>>endhour>>endmin;
		if(nowphonenum==target){
			while(starhour*100+starmin!=endhour*100+endmin){
				if(starhour>=8&&starhour<18){
					time1++;
				}else{
					time2++;
				}
				starmin++;
				if(starmin==60){
					starmin=0;
					starhour++;
					if(starhour==24){
						starhour=0;
						
					}
				}
			}
		}
	}
	int totalprice=(time1*5.4+time2*3.6)*10;
	if(totalprice%10>4){
		totalprice=totalprice/10+1;
	}else{
		totalprice=totalprice/10;
	}
	cout<<"電話號碼"<<"\t"<<"時段 8am ~ 6pm"<<"\t"<<"時段 6pm ~ 8am"<<"\t"<<"應繳金額"<<endl;
	cout<<"========"<<"\t"<<"========"<<"\t"<<"========"<<"\t"<<"========"<<endl;
	cout<<target<<"\t"<<time1<<"\t\t"<<time2<<"\t\t"<<totalprice<<endl;
	
	return 0;
}
