#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include <cstring>

using namespace std;
int r;
class sudlaach {
	private:
	    int id;
		char *name;
		int age;
		char *degree;
		char * oguulel[10];
		int oguulel_too;
	public:	  		
		sudlaach();
		sudlaach(int a, char *b, int c, char *d);
		~sudlaach();
		void getdata(sudlaach sud[], int n);
	  	void setdata();
	  	void print();
	  	void add_oguulel(char n[]);
	  	void search_oguulel(char n[]);
	  	int id_check(sudlaach  *b[], int n);
	  	void name_sort(sudlaach sud[], int n);
	  

};
void sudlaach::getdata(sudlaach sud[], int n){
	int i, g;
	for(i = 0; i< n; i++){
		cout<<"ID: ";
		cin>>sud[i].id;
		for(g = 0; g < i; g++){
			if(sud[i].id == sud[g].id){
				cout<<"Id davhtsj baina\n";
				cout<<"Ahij id oruulna uu: \n";
				cout<<"ID: ";
				cin>>sud[i].id;
			}
		}
		
	cout << "\n Name: ";
	cin >> sud[i].name;
	cout << "\n Age: ";
	cin >> sud[i].age;
	cout << "\n Degree: ";
	cin >> sud[i].degree;
	print();
	}
}

/*void sudlaach::setdata(){
	
}*/
void sudlaach::print() {
	cout << "\n ID: " <<setw(8)<< id;
	cout << "\n Name: " <<setw(8)<< name;
	cout << "\n Age: " <<setw(8)<< age;
	cout << "\n Degree: " <<setw(8)<< degree;
	cout << "\n Oguulel: \n"<<setw(8);
	
	int i;
	for (i = 0; i < oguulel_too; i++) {
		cout << "\t" << oguulel[i] << endl;
	}

}

sudlaach::sudlaach(){
	id = 0;
	name = new char[20];
	strcpy(name, "test");
	age = 28;
	degree = new char[20];
	strcpy(degree, "Doctor");
	oguulel_too = 0;
	r++;
	cout<<"obyekt"<<r<<"uuslee\n";

}

sudlaach::sudlaach(int a, char *b, int c, char *d){
	id = a;
	name = new char[strlen(b)+1];
	strcpy(name, b);
	degree = new char[strlen(d)+1];
	strcpy(degree, d);
	age = c;	
	r++;
	cout<<"obyekt"<<r<<"uuslee\n";
}



void sudlaach::add_oguulel(char n[]) {
  	if (oguulel_too < 10) {
    	oguulel[oguulel_too] = new char[strlen(n) + 1];
    	oguulel[oguulel_too] = n;
    	oguulel_too++;
	  	} else {
	    cout << "Oguulel duursen." << endl;
	}
}

void sudlaach::search_oguulel(char n[]) {
  	int i;

	for (i = 0; i < oguulel_too; i++) {
		if (strcmp(n, oguulel[i]) == 0) {
	    cout << "\t" << oguulel[i] << endl;
    }
  }
}

sudlaach::~sudlaach(){
	cout<<endl;
	delete name;
	delete degree;
	cout<<"obyekt"<<r<<" ustlaa\n";
	r--;
	getch();

}

void sudlaach::name_sort(sudlaach sud[], int n){
	int i, j;
	sudlaach t;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if(strcmp(sud[i].name, sud[j].name)){
				t = sud[j];
				sud[j] = sud[i];
				sud[i] = t;
			}
		}
		print();
	}
}


int main(){
  	char oguulel1[10] = "oguulel1";
  	char oguulel2[10] = "oguulel2";
  	char oguulel3[10] = "aaa";
  
  	int i, n;
  	
  	cout<<"\nHeden sudlaach oruulhaa bichne uu: ";
	cin>>n;
	
	sudlaach nomin(112, "nomin", 18, "Bachelor"), *sudlaach1 = new sudlaach;
	sudlaach *sud = new sudlaach[n];
	
	sudlaach1->print();
	nomin.print();
	sud->getdata(sud, n);
	cout<<"nereer sort hiisen: ";
	sud->name_sort(sud, n);
	

	
	
	/*sudlaach s;
  	
  

  	cout << "\n Haigaad oldson oguulel: \n";
  	s.search_oguulel(oguulel1);
  	s.search_oguulel(oguulel2);
  	s.search_oguulel(oguulel3);*/

}
