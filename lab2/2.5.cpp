#include<iostream>
using namespace std;

int swap(int *n1, int *n2);

int main(){
	int n1 = 1, n2 = 2;
	cout<<n1<<","<<n2<<"\n";
	swap(&n1, &n2);
	cout<<"utgiig solison ur dun: "<<n1<<","<<n2;

}

int swap(int *n1, int *n2){
	int x;
	x = *n1;
	*n1 = *n2;
	*n2 = x;
}S
