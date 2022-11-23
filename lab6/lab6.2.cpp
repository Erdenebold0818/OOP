#include<iostream>
#include <string.h>
#include <math.h>

using namespace std;

class matrix {
	private:
	    int m, n;
	    float values[20][20];
      
  	public:
		matrix();
	  	matrix(int r, int c);
		~matrix();
		
		void print(){
			for( int i=0; i < m; i++){
				for ( int j=0 ; j < n; j++){
					cout << values[i][j]<<"";
				}
				cout << "|/n";
			}
		}
		
	    void setRow(int r);    
	    void setColumn(int c);
	    int getRow();
	    int getColumn();
		void nuutsluh();
		void utgaOnooh();
	 	matrix operator +(float f);
		matrix operator *(matrix  a);
		matrix operator -(matrix  a);
		matrix operator =(matrix  a);
		matrix operator ++(int a);
		matrix operator --(int a);
		matrix operator +=(int a);
	 	matrix operator -=(int a);
    	matrix operator *=(int a);
    	matrix operator &();
    	
};

void matrix::setRow(int r){
    delete values;
    matrix::m=r;
    nuutsluh();
}
void matrix::setColumn(int c){
    delete values;
    matrix::n=c;
    nuutsluh();
}

int matrix::getRow(){  //rowiin utga butsaah
    return m;
    
}
int matrix::getColumn(){ //columniin utga butsaah
    return n;
    
}


matrix::matrix(int r, int c){
	matrix::m=r;
	matrix::n=c;
	nuutsluh();
	utgaOnooh();
	
}

void matrix::nuutsluh(){
	int i;
	values = new float *[m];
	for(i=0; i<m; i++){
		values[i]=new float[n];
	}
}

void matrix::utgaOnooh(){
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){	
			values[i][j]=rand(n)%10;
		}
	}
}

matrix::~matrix(){
	delete values;
}

//--------2----------
//urjih

matrix matrix::operator *(matrix a){
	int i, j, k;
	matrix t(m, a.n);
	if(n==a.m){
		for(i=0; i<m; i++){
			for(j=0; j<a.n; j++){	
				for(k=0; k<n; k++){
					t.values[i][j] += values[i][k] * a.values[k][j];
				}
			}
		}
		return t;		
	}
	else{
		cout<<"urjuuleh bolomjgui"<<endl;
		return -1;
	}
}

int main(){
	srand(time(NULL));
	matrix m1(3, 4), m2(4, 4), m3(3, 4);
	m1.print();
	cout<<"*"<<endl;
	m2.print();
	cout<<"="<<endl;
	m3=m1*m2;
	m3.print();
	return 0;
}
