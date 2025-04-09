#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
#include "curva_pertinencia_ipp.h"
	
int main(int argc, char **argv)
{
	
	IPP_Curves IPP; 
	double x1=0.000; //IPP (x1)
		
	if (argc ==2) {
		x1 = atof(argv[1]); //IPP.
		if (x1 <= 0 || x1 > 100)
			cout<<"\tUsage.: Input must be greater than 0 or less than or equal to 100!!!"<<endl;
		else {	 
		cout<<setprecision(3)<<fixed<<"Linguistic Variable IPP: u("<<x1<<")Low "<<IPP.Ux_IPP_Tp_Bx_50(x1)
		<< ", u("<<x1<<")Medium " <<IPP.Ux_IPP_Tp_Me_50(x1)<<", and u("<<x1<<")High: "
		<<IPP.Ux_IPP_Tp_Al_50(x1)<<endl;
	   } 
	} else 
		cout<<"\tUsage.: ./main <IPP>"<<endl;			
} 
	

