#include<stdio.h>
#include <iostream>
using namespace std;

int even(int arr[], int n);

int main(){
   int i, n, t;
   cout<<"heden too oruulahaa oruulna uu= ";
   cin>>n; 
   int arr1[n];
   for(i = 0; i < n; i++){
   cin>>arr1[i];
   }
   t = even(arr1, n);
   cout<<"tegsh elementuud: "<<t;
   
}

int even(int arr[], int n){ 
	int t=0;
	for(int i=0; i<n ; i++){
		if(arr[i]%2 == 0){
		t++;
		} 
	}
 return t; 
	
}

//ugugdsun husnegtiin tegsh elementuudin toog oloh hegerlegchiin funkts bich

