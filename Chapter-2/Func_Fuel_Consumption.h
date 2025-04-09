//Curves class
//file Func_Fuel_Consumption.h
#ifndef  FUNC_FUEL_CONSUMPTION_H
#define  FUNC_FUEL_CONSUMPTION_H
/// Function legend --> Names
/// T = Triangle
/// Tp = Trapezoidal
/// Al = High
/// Me = Medium
/// Bx = Low
/// Ux = Membership Function
 
#include "MAX_MIN.h"
class Curves
{
	public:
	///Constructor
	Curves(){}
    ///Destructor
	~Curves(){}
	inline double Ux_Triangle_Low(double x);
	inline double Ux_Gaussian_Medium(double x);
	inline double Ux_Bell_High(double x);
    ///          END   
};

inline double Curves :: Ux_Triangle_Low(double X_)///Low Triangle
{  
	  double u_x, A = 0.000, B = 0.000, C = 40.000;
	  if(X_< A)
		  u_x = 0;
		  //return u_x;
	   else if((X_ > A) && (X_ <= B))
		  u_x = (X_ - A)/(B - A);
		  //return u_x;
	   else if((X_ > B) && (X_ <= C))
		 u_x = (C - X_)/(C - B);
		  //return u_x;
	   else if((X_ == B) && (X_== C))
		  u_x = 1;
	   else if(X_ > C)
		  u_x = 0;
   return u_x;     
 }		
 
inline double Curves :: Ux_Gaussian_Medium(double X_)///Medium Gaussian 
{  
	  Max_Min m;
	  double u_x;
	  if (X_ > 100 || X_ <= 0)
		 u_x = 0;
	  else
	     u_x = exp(-pow((X_ - 50), 2) / (2 * pow(15, 2))); //exp(-((x - 50)**2)/(2*15**2)) Veusz Code
   return u_x;
 }	
 
inline double Curves :: Ux_Bell_High(double X_)///High Bell
{  
	  double u_x;
	  //1 / (1 + exp(-0.5*(x - 70))) * (1 - 1/ (1000+ exp(-10*(x - 100)))) Veusz Code
	  double part1 = 1.0 / (1.0 + exp(-0.5 * (X_ - 70)));
      double part2 = 1.0 - 1.0 / (1000.0 + exp(-10.0 * (X_ - 100)));
      if (X_ > 100 || X_ <= 0)
		 u_x = 0;
	  else
	     u_x = part1 * part2;  
   return u_x;  
}		
///          END
/// END OF FILE
#endif

