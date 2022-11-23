#include<iostream>
#include<stdio.h>
#include<conio.h>
#include <cstring>

using namespace std;

class sudlaach {
  	public:
    	int id;
	  	char name[20];
	  	int age;
	  	char degree[20];
	  	char * oguulel[10];
	  	int oguulel_too;

  sudlaach(void); 
  void read();
  void print();
  void add_oguulel(char n[]);
  void search_oguulel(char n[]);

};

sudlaach::sudlaach() {
  id = 0;
  strcpy(name, " ");
  age = 28;
  strcpy(degree, "Doctor");
  oguulel_too = 0;

}

void sudlaach::read() {
  cout << "\n ID: ";
  cin >> id;
  cout << "\n Name: ";
  cin >> name;
  cout << "\n Age: ";
  cin >> age;
  cout << "\n Degree: ";
  cin >> degree;

}

void sudlaach::print() {
  cout << "\n ID: " << id;
  cout << "\n Name: " << name;
  cout << "\n Age: " << age;
  cout << "\n Degree: " << degree;
  cout << "\n Oguulel: \n";

  int i;
  for (i = 0; i < oguulel_too; i++) {
    cout << "\t" << oguulel[i] << endl;
  }

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



int main(){
  char oguulel1[10] = "oguulel1";
  char oguulel2[10] = "oguulel2";
  char oguulel3[10];
  
  
  sudlaach s;
  s.read();
  cout << "\n oguulel oruulna uu: ";
  cin >> oguulel3;
  s.add_oguulel(oguulel1);
  s.add_oguulel(oguulel2);
  s.add_oguulel(oguulel3);

  s.print();

  cout << "\n Haigaad oldson oguulel: \n";
  s.search_oguulel(oguulel1);
  s.search_oguulel(oguulel2);
  s.search_oguulel(oguulel3);

}
