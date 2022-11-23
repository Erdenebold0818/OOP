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
    	float area();
    	float primetr();
       
};

//___________ TOIROG ______________//

class toirog: public TwoDShape{
	private:
		int r;
		
	public:
		float area();
		float urt();
		
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

};


float toirog::area(){
	return pi * (r * r);
}

float toirog::urt(){
	return 2*pi*r;
}

//___________ KVADRAT ______________//


class kvadrat: public TwoDShape{
	private:
		float a;
		
	public:	
		double area();
		double primetr();
		
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

};

double kvadrat::area(){
	return a * a;
}
	
double kvadrat::primetr(){
	return a*4;
}


//___________ GURVALJIN ______________//


class Zgurvaljin: public TwoDShape{
	private:
		float a;
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
		

	
};


float Zgurvaljin::area(){
	float h = sqrt(a*a-a/2*a/2);
	return h*a/2;
}

float Zgurvaljin::primetr(){
	return a*3;
}

int main(){
	toirog t;
	kvadrat k;
	Zgurvaljin zg;
	
	int r,tx,ty,kx,ky,gx,gy;
	float ka,ga;
	cout<<"Toirog coordinat x: ";
	cin>>tx;
	t.set_x(tx);
	cout<<"Toirog coordinat y: ";
	cin>>ty;
	t.set_y(ty);
	cout<<"Toirognii radius:";
	cin>>r;
	t.set_r(r);
	cout<<"Toirognii area:"<<t.area()<<endl;
	cout<<"Toirgnii urt:"<<t.urt()<<endl;
	
	
	cout<<"\nKvadrat a:";
	cin>>ka;
	k.set_a(ka);
	cout<<"Kvadratnii coordinat x:";
	cin>>kx;
	k.set_x(kx);
	cout<<"Kvadratnii coordinat y:";
	cin>>ky;
	k.set_y(ky);
	
	cout<<"\nKvadratnii area:"<<k.area()<<endl;
	cout<<"Kvadratnii primetr:"<<k.primetr()<<endl;
	
	
	cout<<"\nGurvaljnii Tal:";
	cin>>ga;
	zg.set_a(ga);
	cout<<"Zuv Gurvaljnii coordinat x:";
	cin>>gx;
	zg.set_x(gx);
	cout<<"Zuv Gurvaljnii coordinat y:";
	cin>>gy;
	zg.set_y(gy);
	
	cout<<"\nZuv Gurvaljnii area:"<<zg.area()<<endl;
	cout<<"Zuv Gurvaljnii primetr:"<<zg.primetr()<<endl;
}


