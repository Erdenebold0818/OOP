#include <iostream>
using namespace std; 


int main(){
	int max = 0, min = 0, n, a[10], i;
	cout<<"heden too oruulahaa oruulna uu= ";
    cin>>n; 
	
	cout<<"Toonuudaa oruulna uu: ";
	for(i = 0; i < n; i++)
	cin>>a[i];
	max = a[0];
	
	for(i = 0; i < n; i++){
		if(max < a[i])
		max = a[i];
    }
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    cout << "Hamgiin ih too: " << max;
    cout << "\nHamgiin baga too: " << min;
    return 0;
}

//ugugdsun n shirheg tooni hamgiin ih/ hamgiin bagiig oloh 

