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
	strcpy(name,"");
}

shape::~shape(){
	delete name;
}

class TooDshape : public shape{
	protected:
	 	int *x;
		int *y;
	public:
		float area();
		float primeter();
};
class Toirog: public TooDshape{
	private:
		int r;
	public:
		float area();
		float primeter();
		Toirog(){
		name = new char[7];
		strcpy(name,"Toirog");
		x = new int[1];
		y = new int[1];
		r=0;
	}
	
	~Toirog(){
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

float Toirog::area(){
	return pi*r*r;
}

float Toirog::primeter(){
	return 2*pi*r;
}

class Talbai: public TooDshape{
	private:
		float a;
	public:
		float area();
		float primeter();
		Talbai(){
			name = new char[7];
			strcpy(name,"Talbai");
			x = new int[4];
			y = new int[4];
			a=0;
		}
		
		~Talbai(){ 
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

float Talbai::area(){
	return a*a;
}

float Talbai::primeter(){
	return 4*a;
}

class ZowGurwalchin: public TooDshape{
	private:
		float a;
	public:
		float area();
		float primeter();
	ZowGurwalchin(){
		name = new char[9];
		strcpy(name,"ZowGurwalchin");
		x = new int[3];
		y = new int[3];
	}
	 
	~ZowGurwalchin(){
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

float ZowGurwalchin::area(){
	float h=sqrt(a*a-a/2*a/2);
	return h*a/2;
}

float ZowGurwalchin::primeter(){
	return a*3;
}

int main(){
	Toirog c;
	Talbai s;
	ZowGurwalchin t;
	int r,cx,cy,sx,sy,tx,ty;
	float sa,ta;
	cout<<"Toirog center coordinat x:";
	cin>>cx;
	c.set_x(cx);
	cout<<"Toirog center coordinat y:";
	cin>>cy;
	c.set_y(cy);
	cout<<"Toirog r:";
	cin>>r;
	c.set_r(r);
	cout<<"Toirog area:"<<c.area()<<endl;
	cout<<"Toirog area2:"<<c.area()<<endl;
	cout<<"Toirog primeter:"<<c.primeter()<<endl;
	cout<<"Tal a:";
	cin>>sa;
	s.set_a(sa);
	cout<<"Talbai top left coordinat x:";
	cin>>sx;
	s.set_x(sx);
	cout<<"Talbai top left coordinat y:";
	cin>>sy;
	s.set_y(sy);
	cout<<"Square area:"<<s.area()<<endl;
	cout<<"Square primeter:"<<s.primeter()<<endl;
	cout<<"Gurvaljnii Tal a:";
	cin>>ta;
	t.set_a(ta);
	cout<<"ZowGurwalchin top coordinat x:";
	cin>>tx;
	t.set_x(tx);
	cout<<"ZowGurwalchin top coordinat y:";
	cin>>ty;
	t.set_y(ty);
	cout<<"ZowGurwalchin area:"<<t.area()<<endl;
	cout<<"ZowGurwalchin primeter:"<<t.primeter()<<endl;
}

