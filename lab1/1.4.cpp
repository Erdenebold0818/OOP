#include <iostream>
using namespace std;

int avg(int arr[], int n){ // sondgoi elementuudiin  dundjiig olno
	int s=0;
 	for(int i=1; i<n; i=i+2){
 		s=s+arr[i];
 	}
 	s = s/(n/2);
 	cout<<s<<"\n";
 	return s; 
}


int main(){
	int n, i, o, a;
	cout<<"heden too oruulahaa oruulna uu= ";
    cin>>n; 
    
    int arr[n];
    cout<<"Toonuudaa oruulna uu: ";
	for(i = 0; i < n; i++){
	cin>>arr[i];
	}
	a = avg(arr, n);
	cout<<"dundaj ="<<a<<"\n";
}

//ugugdsun husnegtiin sondgoi elementuudiin arifmetik dundjiig oloh hereglegchiin funkts bich




