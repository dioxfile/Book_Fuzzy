//IPP curves class
//file curva_pertinencia_ipp.h
#ifndef  CURVA_PERTINECIA_IPP_H
#define  CURVA_PERTINECIA_IPP_H
/// Function legend --> Names
/// T = Triangular
/// Tp = Trapezoidal
/// IPP = Packet Loss Index
/// Al = High
/// Me = Medium
/// Bx = Low
/// Ux = Membership Function
 
//#include <olsr/MAX_MIN.h>
#include "MAX_MIN.h"
class IPP_Curves
{
	public:
	///Constructor
	IPP_Curves(){}
    ///Destructor
	~IPP_Curves(){}
	inline double Ux_IPP_Tp_Bx_50(double x);
	inline double Ux_IPP_Tp_Me_50(double x);
	inline double Ux_IPP_Tp_Al_50(double x);
    ///          FIM
    
};

inline double IPP_Curves :: Ux_IPP_Tp_Bx_50(double X_)///Lower Trapezoidal
{  
	  double u_x, A = 0.000, B = 0.000, C = 20.000, D = 28.000;
		
		///Left Rectangular Trapezoid
      if(X_< A)
		  u_x = 0;
		  //return u_x;
	   else if((X_ == A) && (X_ == B))
		  u_x = 1;
	   else if((X_ > A) && (X_ < B))
		  u_x = (X_ - A)/(B - A);
		  //return u_x;
	   else if((X_ >= B) && (X_ <= C))
		  u_x = 1;
		  //return u_x;
	  else if((X_ > C) && (X_ < D))
		  u_x = (D - X_)/(D - C);
		  //return u_x;
	  else if(X_ >= D)
		  u_x = 0;
  return u_x;
 }	
 
inline double IPP_Curves :: Ux_IPP_Tp_Me_50(double X_)///Trapezoidal Medium
{  
	  Max_Min m;
	  double A = 20.000, B = 30.000, C = 35.000, D = 43.000;

		 //max ( min ( x-a/b-a, 1, d-x/d-c ), 0 ), para a < b < c < d
      double u_x = m.max(m.min(m.min((X_ - A)/(B - A), 1), ((D - X_)/(D - C))), 0);
      return u_x;   
 }	
 
inline double IPP_Curves :: Ux_IPP_Tp_Al_50(double X_)///High Trapezoidal
{  
	  double u_x, A = 35.000, B = 45.000, C = 100.000, D = 100.000;

       ///Right Rectangle Trapezoid
      if(X_<= A)
		  u_x = 0;
		  //return u_x;
	   else if((X_ > A) && (X_ < B))
		  u_x = (X_ - A)/(B - A);
		  //return u_x;
	   else if((X_ >= B) && (X_ <= C))
		  u_x = 1;
		  //return u_x;
	  else if((X_ > C) && (X_ < D))
		  u_x = (D - X_)/(D - C);
		  //return u_x;
	  else if((X_ == C) && (X_ == D))
		  u_x = 1;
	  else if(X_ > D)
		  u_x = 0;
  return u_x;    
}		
///          END
/// END OF FILE
#endif

