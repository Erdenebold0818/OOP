#include<iostream>
#include<string.h>
#include<math.h>
#define pi 3.14
using namespace std;

class shape{

    protected:
        char *name; 
    
    public:
        shape();
        ~shape();
         // Pure Virtual Function
        virtual float primetr() = 0;
       
};

shape::shape(){
	name = new char[2];
	strcpy(name, "");
}

shape::~shape(){
	delete name;
}

//___________ 2DSHAPE ______________//

class TwoDShape : public shape{

    protected:
    	int *x;
 		int *y;
    
    public:
    	 // Pure Virtual Function
    	virtual float area() = 0;
    	virtual void read() = 0;
	  	virtual void print() = 0;
       
};

//___________ TOIROG ______________//

class toirog: public TwoDShape{
	private:
		int r, tx,ty;
	public:
		float area();
		float primetr();
		
		toirog(){
			name = new char[7];
			strcpy(name, "toirog");
			x = new int[1];
			y = new int[1];
			r = 0;
		}
		
		~toirog(){
			delete name;
			delete x;
			delete y;
		}
		
		void set_x(int _x){
			x=&_x;
			cout<<"x ni "<<*x<<" bolloo.\n";
		}
		
		void set_y(int _y){
			y=&_y;
			cout<<"y ni "<<*y<<" bolloo.\n";
		}
		
		void set_r(int _r){
			r=_r;
		}
		
		void read(){
		
			cout<<"Toirog coordinat x: ";
			cin>>tx;
			set_x(tx);
			cout<<"Toirog coordinat y: ";
			cin>>ty;
			set_y(ty);
			cout<<"Toirognii radius:";
			cin>>r;
			set_r(r);
		}
		void print(){
			cout<<"Toirognii area:"<<area()<<endl;
			cout<<"Toirgnii urt:"<<primetr()<<endl;
		}

};


float toirog::area(){
	return pi * (r * r);
}

float toirog::primetr(){
	return 2*pi*r;
}

//___________ KVADRAT ______________//


class kvadrat: public TwoDShape{
	private:
		float a;
		int r,ka,kx,ky;
	public:	
		float area();
		float primetr();
		
		kvadrat(){
			name = new char[7];
			strcpy(name,"kvadrat");
			x = new int[4];
			y = new int[4];
			a=0;
		}
		
		~kvadrat(){
			delete name;
			delete x;
			delete y;
		}
		
		
		void set_a(float _a){
			a=_a;
		}
		void set_x(int _x){
			x[0] = _x;
			cout<<"x ni "<<x[0]<<" bolloo.\n";
			x[1] = _x + a;
			cout<<"x1 ni "<<x[1]<<" bolloo.\n";
			x[2] = _x + a;
			cout<<"x2 ni "<<x[2]<<" bolloo.\n";
			x[3] = _x;
			cout<<"x3 ni "<<x[3]<<" bolloo.\n";
		 }
		 
		 void set_y(int _y){
			y[0] = _y;
			cout<<"y ni "<<y[0]<<" bolloo.\n";
			y[1] = _y;
			cout<<"y1 ni "<<y[1]<<" bolloo.\n";
			y[2] = y[3] = _y - a;
			cout<<"y2 ni "<<y[2]<<" bolloo.\n";
			cout<<"y3 ni "<<y[3]<<" bolloo.\n";
 		}
 		void read(){
 			
 			cout<<"\nKvadrat a:";
			cin>>ka;
			set_a(ka);
			cout<<"Kvadratnii coordinat x:";
			cin>>kx;
			set_x(kx);
			cout<<"Kvadratnii coordinat y:";
			cin>>ky;
			set_y(ky);
		 }
		 
		 void print(){
		 	cout<<"\nKvadratnii area:"<<area()<<endl;
			cout<<"Kvadratnii primetr:"<<primetr()<<endl;
		 	
		 }

};

float kvadrat::area(){
	return a * a;
}
	
float kvadrat::primetr(){
	return a*4;
}


//___________ GURVALJIN ______________//


class Zgurvaljin: public TwoDShape{
	private:
		float a;
		int ga,gx,gy;
	public:
		float area();
		float primetr();
		
		
		Zgurvaljin(){
			name = new char[9];
			strcpy(name, "ZuwGurvaljin");
			x = new int[3];
			y = new int[3];	
		}
		
		~Zgurvaljin(){
			delete name;
			delete x;
			delete y;
		}
		
		void set_x(int _x){
			x[0] = _x;
			cout<<"x ni "<<x[0]<<" bolloo.\n";
			x[1] = _x + a;
			cout<<"x1 ni "<<x[1]<<" bolloo.\n";
			x[2] = _x;
			cout<<"x2 ni "<<x[2]<<" bolloo.\n";
		}
		void set_y(int _y){
			x[0] = _y;
			cout<<"y0 ni "<<y[0]<<" bolloo.\n";
			x[1] = _y - a;
			cout<<"y1 ni "<<y[1]<<" bolloo.\n";
			x[2] = _y - a;
			cout<<"y2 ni "<<y[2]<<" bolloo.\n";
		}
		void set_a(float _a){ 
			a=_a;
			cout<<"Gurvaljnii tal ni"<<a<<"bolloo.\n"; 
		}
		
		void read(){
			
			cout<<"\nGurvaljnii Tal:";
			cin>>ga;
			set_a(ga);
			cout<<"Zuv Gurvaljnii coordinat x:";
			cin>>gx;
			set_x(gx);
			cout<<"Zuv Gurvaljnii coordinat y:";
			cin>>gy;
			set_y(gy);
			
			
		}
		void print(){
			
			cout<<"\nZuv Gurvaljnii area:"<<area()<<endl;
			cout<<"Zuv Gurvaljnii primetr:"<<primetr()<<endl;
			
		}

	
};


float Zgurvaljin::area(){
	float h = sqrt(a*a-a/2*a/2);
	return h*a/2;
}

float Zgurvaljin::primetr(){
	return a*3;
}

int main(){
	
	int n, c, s, g;
	

	
	TwoDShape * sh[n];

	cout << "Heden toirog oruulah ve: ";
	cin >> c;
   
    cout << "Heden kvadrat oruulah ve: ";
    cin >> s;
    
    cout << "Heden gurvaljin oruulah ve: ";
    cin >> g;
      
	for (int i = 0; i < c; i++) {
		sh[i] = new toirog;
    	cout << "\n" <<i + 1 << " -r Toirgiin medeelel\n";
    	sh[i] -> read();
    	
  	}
  	
  	for (int j = 0; j < s; j++) {
		sh[j] = new kvadrat;
    	cout << "\n" <<j + 1 << " -r kvadratiin medeelel\n";
    	sh[j] -> read();
    
  	}
	
	for (int k = 0; k < g; k++) {
		sh[k] = new Zgurvaljin;
    	cout << "\n" <<k + 1 << " -r gurvaljingiin medeelel\n";
    	sh[k] -> read();
    	
    	
  	}
	
	
	cout << "\ntalbaigaar n eremblev: \n";
	for (int z = 0; z < n; z++){
	    cout << "Durs ";
	    cout << "Dursiin S = " << sh[z] -> area()<< endl;
	    
	    
	  	}
  return 0;
}


