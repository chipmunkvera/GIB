#include <iostream>
#include <cmath>
using namespace std;

class  Box {
	public:
		Box() {
			length=0;
			height=0;
			width=0;
			cout << "Created!\n";
		}
		~Box() {
			cout << "Peace out\n";
		}
      void  setNumbers(  double , double , double);  // set base, height  
			double  volume_of_box();      
	private: 
       double  length;      
       double  height;
			 double  width;
};

void Box::setNumbers(  double a,  double  b, double c) {
  length = a;
  height = b;
	width = c;
}
  
double Box::volume_of_box() {
  return ( length * height * width);
}
   


int main() {
	Box a; //instantiate object a of class Box
	cout << "Uninitialized values for base and height: \n";
	cout << "\tThe volume of the box "<<	a.volume_of_box() << endl;
	
	double x, y, z;
	cout << "Please enter 3 doubleegers: ";
	cin >> x;
	cin >> y;
	cin >> z;
		
	a.setNumbers(x, y, z);// a is initialized by using proper values for its data members

	cout << "Updated values for base and height: \n";
	cout << "\tThe volume of the box "<<	a.volume_of_box() << endl;
	

	return 0;
}



