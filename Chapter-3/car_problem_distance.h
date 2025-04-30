//CAR_PROBLEM_DISTANCE curves class
//file car_problem_distance.h
#ifndef  CAR_PROBLEM_DISTANCE_H
#define  CAR_PROBLEM_DISTANCE_H
/// Ux = Membership Function
#include "MAX_MIN.h"
class Distance
{
	public:
	///Constructor
	Distance(){}
    ///Destructor
	~Distance(){}
	inline double Short(double x);
	inline double Long(double x);
};

inline double Distance :: Short(double X_)///Left
{  
	  double u_x, A = 0.000, B = 0.000, C = 10.000, D = 30.000;
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
 
inline double Distance :: Long(double X_)///Right
{  
	  double u_x, A = 10.000, B = 30.000, C = 40.000, D = 40.000;
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

