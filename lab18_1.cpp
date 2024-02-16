#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double deltaRight = min(R1.x + R1.w, R2.x + R2.w);
	double deltaLeft  = max(R1.x, R2.x);
	double deltaUp    = min(R1.y, R2.y);
	double deltaDown  = max(R1.y - R1.h, R2.y - R2.h);
	double area       = (deltaRight - deltaLeft) * (deltaUp - deltaDown);
	if (area > 0){
		return (deltaRight - deltaLeft) * (deltaUp - deltaDown);
	}
	else{
		return 0;
	}
}
