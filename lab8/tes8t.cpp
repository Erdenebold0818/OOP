#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<string>
#include <cstring> 
#include <vector>

using namespace std;

class person{
	public:
		char * name;
		char * SSNum;
		int age;
	    
	 		
		person();
		~person();
		void getName();
		void getSSNum();
		int getAge();
		void setName(char * a);
		void setSSNum(char * b);
		void setAge(int c);
	  	void printPersonInfo();
};

person::person(){
	name = new char;
	strcpy(name, "ner");
	SSNum = new char;
	strcpy(SSNum, " ");
	age = 28;
}

person::~person(){
	cout<<endl;
	delete name;
	delete SSNum;

}

void person::getName(){
	cout<<"name: ";
	cin>>name;
}

void person::getSSNum(){
	cout<<"SSnum: ";
	cin>>SSNum;
}

int person::getAge(){
	cout<<"age: ";
	cin>>age;
}


void person::setName(char * a){
	name = new char[strlen(a)+1];
	strcpy(name, a);
}
void person::setSSNum(char * b){
	SSNum = new char[strlen(b)+1];
	strcpy(SSNum, b);
}
void person::setAge(int c){
	age = c;
}



void person::printPersonInfo() {
	cout << "\n Name: " <<setw(8)<< name;
	cout << "\n Ssnum: " <<setw(8)<< SSNum;
	cout << "\n Age: " <<setw(8)<< age;

}



//---------SPOUSE------------//
class spouse : virtual public person {
	public:
		int anniversaryDate;
			    
		
		spouse(){
		anniversaryDate = 2000;
		}

		int getAnniversaryDate();
		void setAnniversaryDate(int ad);
		
		void printSpouseInfo(){
			cout<<"Anniversary date: "<<anniversaryDate<<endl;
		}
	
};

int spouse::getAnniversaryDate(){
	cout<<"Anniversary Date: ";
	cin>>anniversaryDate;
}

void spouse::setAnniversaryDate(int ad){
	anniversaryDate = ad;
}



//---------CHILD------------//

class child : virtual public person{
	public:
		char * favoriteToy;
		
		child(){
			favoriteToy = new char;
			strcpy(favoriteToy, "mashin");
		}
		~child(){
			delete favoriteToy;
		}
		char getfavoriteToy();
		void setfavoriteToy(char *ft);
		
		void printChildInfo(){
			cout<<"Child's fav toy: "<<favoriteToy<<endl;
		}
};

char child::getfavoriteToy(){
	cout<<"huuhdiih n favorite Toy: ";
	cin>>favoriteToy;
}

void child::setfavoriteToy(char * ft){
	favoriteToy = new char[strlen(ft)+1];
	strcpy(favoriteToy, ft);
}



//---------DIVISION------------//
class division{
	public:	
		char *divisionName;
			    
  		
		division(){
			divisionName = new char;
			strcpy(divisionName, " ");
		}
		~division(){
			cout<<endl;
			delete divisionName;
		}
		char getDivisionName();
		void setDivisionName(char *div);
	
};


char division::getDivisionName(){
	cout<<"division Name: ";
	cin>>divisionName;
}

void division::setDivisionName(char *div){
	divisionName = new char[strlen(div)+1];
	strcpy(divisionName, div);
}



//---------JOB DESCRIPTION--------//
class jobDescription {
	public:
		char *description;
			    
 		
		jobDescription(){
			description = new char;
			strcpy(description, "intern");
		}
		~jobDescription(){
			delete description;
		}
		char getDescription();
		
		void setDescription(char *jd);
	
};

char jobDescription::getDescription(){
	cout<<"description: ";
	cin>>description;
}

void jobDescription::setDescription(char *jd){
	description = new char[strlen(jd)+1];
	strcpy(description, jd);
}


//--------EMPLOYEE--------------------------//

class employee :  public division, public jobDescription, public spouse, public child {
	public:
		char *companyId;
		char *title;
		int startDate;	
					    
			
		employee(){
			companyId = new char;
			strcpy(companyId, "c1");
			title = new char;
			strcpy(title, "worker");
			startDate = 2018;
		}
		~employee(){
		
			delete companyId;
			delete title;

		}
		char getCompanyId(){
			cout<<"company Id: ";
			cin>>companyId;
		}
		char getTitle(){
			cout<<"title: ";
			cin>>title;
		}
		int getStartDate(){
			cout<<"start Date: ";
			cin>>startDate;
		}
		
		char setCompanyId(char * cid){
			companyId = new char[strlen(cid)+1];
			strcpy(companyId, cid);
		}
		void setTitle(char * t){
			title = new char[strlen(t)+1];
			strcpy(title, t);
		}
		void setStartDate(int d){
			startDate = d;
		}
		
		
		
		void getEmployeeInfo(){
			cout<< "\nEmployeegiin basic infog oruulna uu: \n";
			getName();
			getSSNum();
			getAge();
			
			cout<< "\nEmployeegiin companygiin infog oruulna uu: \n";
			getCompanyId();
			getTitle();
			getStartDate();
			
			getDivisionName();
			getDescription();
		
			
		}
		
		void printEmployeeInfo(void){
			cout<<"\nemployeegin info: "<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"SSNum: "<<SSNum<<endl;
			cout<<"age: "<<age<<endl;
			
			cout<<"\nemployeegin companygiin info: "<<endl;
			
			cout<<"company Id: "<<companyId<<endl;
			cout<<"title: "<<title<<endl;
			cout<<"startDate: "<<startDate<<endl;
			cout<<"job Description: "<<description<<endl;

		
		}
};



//---------MAIN--------//

int main(){
	int n, d;
	int i;
	employee p;
	child ch1;
	child ch2;
	spouse s1;
	
	vector<child> NChild;
	
	p.getEmployeeInfo();
	cout<<"emoployee huuhedtei yu (1-yes/0-no): ";
	cin>>d;
	
	cout<<"emoployee heden huuhedtei ve: ";
	cin>>n;
	
	if (d==1){
		for(i=0; i<n; i++){
		NChild[i].getfavoriteToy();
//		NChild.push_back( NChild[i] );
	}
	
	}else{
		cout<<"employee huuhedgui";
	}
	
	cout<<"emoployee spousetai yu (1-yes/0-no)?";
	cin>>d;
	if (d==1){
		s1.getAnniversaryDate();
	}else{
		cout<<"employee spousegui\n";
	}

	
	p.printEmployeeInfo();		
	cout<< "\nEmployeegiin ger buliin info: ";
	s1.printSpouseInfo();
	
	for(i=0; i<n; i++){
	NChild[i].printChildInfo();

}
	
}
