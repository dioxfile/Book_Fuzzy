//CAR_PROBLEM_SPEED curves class
//file car_problem_speed.h
#ifndef  CAR_PROBLEM_SPEED_H
#define  CAR_PROBLEM_SPEED_H
/// Ux = Membership Function
 
#include "MAX_MIN.h"
class Speed
{
	public:
	///Constructor
	Speed(){}
    ///Destructor
	~Speed(){}
	inline double Low(double x);
	inline double High(double x);
};

inline double Speed :: Low(double X_)///Left
{  
	  double u_x, A = 0.000, B = 0.000, C = 30.000, D = 70.000;
      if(X_< A)
		  u_x = 0;
	   else if((X_ == A) && (X_ == B))
		  u_x = 1;
	   else if((X_ > A) && (X_ < B))
		  u_x = (X_ - A)/(B - A);
	   else if((X_ >= B) && (X_ <= C))
		  u_x = 1;
	  else if((X_ > C) && (X_ < D))
		  u_x = (D - X_)/(D - C);
	  else if(X_ >= D)
		  u_x = 0;
  return u_x;
 }	
 
inline double Speed :: High(double X_)///Right
{  
	  double u_x, A = 30.000, B = 70.000, C = 100.000, D = 100.000;
      if(X_<= A)
		  u_x = 0;
	   else if((X_ > A) && (X_ < B))
		  u_x = (X_ - A)/(B - A);
	   else if((X_ >= B) && (X_ <= C))
		  u_x = 1;
	  else if((X_ > C) && (X_ < D))
		  u_x = (D - X_)/(D - C);
	  else if((X_ == C) && (X_ == D))
		  u_x = 1;
	  else if(X_ > D)
		  u_x = 0;
  return u_x;    
}		
#endif

