#include<iostream>
#include<stdio.h>
#include<conio.h>
#include <cstring>

using namespace std;

class sudlaach {
	private:
	    int id;
		char name[20];
		int age;
		char degree[20];
		char * oguulel[10];
		int oguulel_too;
		
	public:  		
		sudlaach(int idnum, char n, int a, char d){
			id = idnum;
			name[20] = n;
			age = a;
			degree[20] = d;
		}
		sudlaach(){
			id = 0;
			strcpy(name, " ");
			age = 28;
			strcpy(degree, "Doctor");
			oguulel_too = 0;
		}
		
		void setIdnumber(int idnum){
		id = idnum;
		}
		void setName(char n){
		name[20] = n;
		}
		void setAge(int a){
		age = a;
		}
		void setDegree(char d){
		degree[20] = d;
		}
		int const getIdnumber(){
		return id;
		}
		char const getName(){
		return name[20] ;
		}
		int const getAge(){
		return age;
		}
		char const getDegree(){
		return degree[20];
		}

	  	
	  	void add_oguulel(char n[]);
	  	void search_oguulel(char n[]);
	  	~sudlaach();
	  	void print();

};


void sudlaach::add_oguulel(char n[]) {
  	if (oguulel_too < 10) {
    	oguulel[oguulel_too] = new char[strlen(n) + 1];
    	oguulel[oguulel_too] = n;
    	oguulel_too++;
	  	} else {
	    cout << "Oguulel duursen." << endl;
	}
}


sudlaach::~sudlaach(){
	delete []name;
	cout<<"obyekt ustlaa\n";

}

void print(){
	sudlaach s1,s2;
	cout <<"\nsudlaach1-iin id: "<<s1.getIdnumber();
	cout <<"\nsudlaach1-iin ner: "<<s1.getName();
	cout <<"\nsudlaach1-iin nas: "<<s1.getAge();
	cout <<"\nsudlaach1-iin degree: "<<s1.getDegree();
	
	cout <<"\nsudlaach2-iin id: "<<s2.getIdnumber();
	cout <<"\nsudlaach2-iin ner: "<<s2.getName();
	cout <<"\nsudlaach2-iin nas: "<<s2.getAge();
	cout <<"\nsudlaach2-iin degree: "<<s2.getDegree();
}


int main(){
  	char oguulel1[10] = "oguulel1";
  	char oguulel2[10] = "oguulel2";
  	char oguulel3[10] = "aaa";
  
  	int i, n, a, idnum; 
	char n[20], d[20];
	
	sudlaach s1, s2;
  	/// sudlaach 1
  	cout <<"\n sudlaach1-iin id oruulna uu ";
  	s1.setIdnumber(id);
  	cout <<"\n sudlaach1-iin neriig oruulna uu ";
	s1.setName(n);
	cout <<"\n sudlaach1-iin nasiig oruulna uu ";
	s1.setAge(a);
	cout <<"\n sudlaach1-iin degree oruulna uu ";
	s1.setDegree(d);
	s1.add_oguulel(oguulel1);
  	s1.add_oguulel(oguulel2);
	
	/// sudlaach 2
	cout <<"\n sudlaach2-iin id oruulna uu ";
  	s2.setIdnumber(idnum);
  	cout <<"\n sudlaach2-iin neriig oruulna uu ";
	s2.setName(n);
	cout <<"\n sudlaach2-iin nasiig oruulna uu ";
	s2.setAge(a);
	cout <<"\n sudlaach2-iin degree oruulna uu ";
  	
  	s2.add_oguulel(oguulel3);

  	s1.print();


}
