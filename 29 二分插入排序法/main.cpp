#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n;
	file>>n;
	int *a;
	a=new int[n];
	for(int i=0;i<n;i++){
		file>>a[i];
	}
	int min,max,mid,index;//最小、最大、 插入值 
	int temp,count;
	for(int i=1;i<n;i++){
		temp=a[i];
		min=0;
		max=i-1;
		while(min<=max){
			mid=(min+max)/2;
			if(temp>a[mid]){
				min=mid+1;
			}else{
				max=mid-1;
			}
			count++;		
		}
		index=min;
		for(int j=i;j>index;j--){//從愈插入的位子騰出 依序往後移 
			a[j]=a[j-1];
		}
		a[index]=temp;
	}
	cout<<count<<endl;
	return 0;
}
