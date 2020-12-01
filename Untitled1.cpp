#include <iostream>
#include <math.h>

using namespace std;

class Point {
private :
	double x;
	double y;
public :
	Point (){
		cin >> x;
		cin >> y;
	}
	
	Point (double x, double y){
		this->x = x;
		this->y = y;
	}
	
	void setX(double x){
		this->x= x;
	}
	
	void setY(double y){
		this->y = y;
	}
	
	double getX(){
		return x;
	}
	
	double distance(double x, double y){
		return sqrt((x-this->x)*(x-this->x) + (y -this->y)*(y -this->y));
	}
	
	double distance (Point another){
		return  sqrt((another.getX()-this->x)*(another.getX()-this->x) + (another.getY()-this->y)*(another.getY()-this->y));
	}
};

