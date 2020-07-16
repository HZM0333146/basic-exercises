#include <iostream>
#include <fstream> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void preorder(int nodecolumn,int noderow,string **tree,int n ){
	cout<<tree[nodecolumn][noderow];
	if(nodecolumn+1<n&&tree[nodecolumn+1][noderow*2]!="@@"){
		preorder(nodecolumn+1,noderow*2,tree,n);
	}
	if(nodecolumn+1<n&&tree[nodecolumn+1][noderow*2+1]!="@@"){
		preorder(nodecolumn+1,noderow*2+1,tree,n);
	}
}
void inorder(int nodecolumn,int noderow,string **tree,int n ){
	if(nodecolumn+1<n&&tree[nodecolumn+1][noderow*2]!="@@"){
		inorder(nodecolumn+1,noderow*2,tree,n);
	}
	cout<<tree[nodecolumn][noderow];
	if(nodecolumn+1<n&&tree[nodecolumn+1][noderow*2+1]!="@@"){
		inorder(nodecolumn+1,noderow*2+1,tree,n);
	}
}
void postorder(int nodecolumn,int noderow,string **tree,int n ){
	if(nodecolumn+1<n&&tree[nodecolumn+1][noderow*2]!="@@"){
		postorder(nodecolumn+1,noderow*2,tree,n);
	}
	if(nodecolumn+1<n&&tree[nodecolumn+1][noderow*2+1]!="@@"){
		postorder(nodecolumn+1,noderow*2+1,tree,n);
	}
	cout<<tree[nodecolumn][noderow];
}
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);//前序 = 中左右 ； 中序 = 左中右 ； 後序 =  左右中 
	int n;
	string **tree;
	file>>n;
	tree=new string*[n];
	for(int i=0;i<n;i++){
		int num=1;
		for(int j=0;j<i;j++){
			num*=2;
		}
		tree[i]=new string[num];
		for(int j=0;j<num;j++){
			file>>tree[i][j];
		}
	}
	cout<<"pre-order： ";
	preorder(0,0,tree,n);
	cout<<endl;
	
	cout<<"in-order： ";
	inorder(0,0,tree,n);
	cout<<endl;
	
	cout<<"post-order： ";
	postorder(0,0,tree,n);
	cout<<endl;
	return 0;
}
