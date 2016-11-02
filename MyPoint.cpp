#include <iostream>
#include <cmath>
using namespace std;

class MyPoint {
	int x=0;
	int y=0;
	public:
		MyPoint();
		MyPoint(int x,int y){
			this->x=x;
			this->y=y;
		}
		int getX(){
			return x;
		}
		void setX(int x){
			this->x=x;
		}
		int getY(){
			return y;
		}
		void setY(int y){
			this->y=y;
		}
		int getXY(){
			return xy[2];
		}
		void setXY(int x,int y){
			int xy[]={x,y};
		}
		string toString(){
			return "("+to_string(x) + "," + to_string(y)+")";
		}
		double distance(int x,int y){
			return sqrt(pow(this->x-x,2)+pow(this->y-y,2));
		}
		double distance(){
			return sqrt(x*x + y*y);
		}
};

int main(){
	MyPoint dot(4,5);
	cout << "x= " << dot.getX() << endl;
		 << "y= " << dot.getY() << endl;
		 << "distance from 0 point = " << dot.distance() << endl;
		 << "distance from other point " << dot.distance(4,5) << endl;
}
