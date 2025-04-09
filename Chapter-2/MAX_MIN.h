//File MAX_MIN.h
#ifndef  MAX_MIN_H
#define  MAX_MIN_H

class Max_Min {

public:
	inline Max_Min(){
		X = 0;
		Y = 0;
	}
	
	inline ~Max_Min(){}
	
private:
	double X;
	double Y;

public:
	inline double min(double x, double y);
	inline double max(double x, double y);
};
	
///Function MIN
inline double Max_Min::min(double x, double y){
		X = x;
		Y = y;
		return (X < Y ? X: Y);
}

///Function MAX
inline double Max_Min:: max(double x, double y)
{
		X = x;
		Y = y;
		return (X > Y ? X: Y);
}

#endif
