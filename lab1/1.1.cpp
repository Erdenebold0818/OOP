#include <iostream>
#include <conio.h>
using namespace std; 

int max(int, int, int);
int main(){
	int a, b, c;
	cout << "a, b, c= ";
    cin >> a >> b >> c;
	int d = max(a,b,c);
	cout<<"Hamgiin ih too n: "<<d;
	getch();
	return 0;
}

int max(int a, int b, int c){
	int n;
	if(a >= b && a >= c){
        n = a;
    }
    else if(b >= a && b >= c){
         n = b;
    }
    else{
	n = c; 
    }
    return n;
}

//a,b,c gurvan tooni hamgiin ihiig oloh hereglegchiin funkts bich

