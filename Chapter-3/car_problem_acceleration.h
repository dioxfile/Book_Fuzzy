//CAR_PROBLEM_ACCELERATION curves class
//file car_problem_acceleration.h
#ifndef  CAR_PROBLEM_ACCELERATION_H
#define  CAR_PROBLEM_ACCELERATION_H
/// Ux = Membership Function
 
#include "MAX_MIN.h"
class Acceleration
{
	public:
	///Constructor
	Acceleration(){}
    ///Destructor
	~Acceleration(){}
	inline double Decrease(double x);
	inline double Maintain(double x);
	inline double Increase(double x);
};

inline double Acceleration :: Decrease(double X_)///Left
{  
	  double u_x, A = -20.000, B = -20.000, C = -10.000, D = 00.000;
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

inline double Acceleration :: Maintain(double X_)///Center Triangle
	{
	  double u_x, A =-10.000, B = 00.000, C = 10.000;
		if(X_<= A)
		  u_x = 0;
	    else if((X_ > A) && (X_ <= B))
		  u_x = (X_ - A)/(B - A);
	    else if((X_ > B) && (X_ <= C))
		 u_x = (C - X_)/(C - B);
	    else if(X_ > C)
		  u_x = 0;
	return u_x;       
 }	
  
inline double Acceleration :: Increase(double X_)///Right
{  
	  double u_x, A = 00.000, B = 00.000, C = 20.000, D = 20.000;
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

