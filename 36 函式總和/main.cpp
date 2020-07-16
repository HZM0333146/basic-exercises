#include <iostream>
#include <fstream>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float k,z;
double f(double x){
	return 1 / (1 + exp( -k * (x - z)));
}
int main(int argc, char** argv) {
	ifstream file("file.txt",ios::in);
	int n;
	double *x,sum;
	file>>n;
	x=new double[n];
	for(int i=0;i<n;i++){
		file>>x[i];
	}
	file>>k>>z;
	for(int i=0;i<n;i++){
		sum+=f(x[i]);
	}
	cout<<sum;
	return 0;
}
