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
  	matrix(int row, int col);
	~matrix();
    void setRow(int r);    // gishuun ugugdluudiig tohiruulah
    void setColumn(int c);
    int getRow();
    int getColumn();
	void nuutsluh();
	void utgaOnooh();
    
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

int matrix::getRow(){
    return m;
    
}
int matrix::getColumn(){
    return n;
    
}

void print(){
	for( int i=0; i < this->getRow(); i++){
		for ( int j=0 ; j< this->getColumn(); j++){
			cout << this->value[i][j]<<"";
		}
		cout << "|/n";
	}
}

matrix(){
    this -> setRow(0);
    this -> setColumn(0);
}
  
matrix::matrix(int row, int col){
	matrix::m=row;
	matrix::n=col;
	nuutsluh();
	utgaOnooh();
	
}

void matrix::nuutsluh(){
	int i;
	values = new float *[m];
	for(i=0; i<m; i++){
		values[i]=new float(n);
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

//--------1----------
//nemeh b) R = R1 + R2

matrix matrix::operator +(matrix a){
	int i, j;
	matrix t(m,n);
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){	
			t.values[i][j] = values[i][j] + a.values[i][j];
		}
	}
	return t;
}

int main(){
	srand(time(NULL));
	matrix m1(3, 4), m2(3, 4);
	m1.print();
	cout<<"+"<<endl;
	m1.print();
	cout<<"="<<endl;
	m1=m1+m2;
	m1.print();
	return 0;
}
