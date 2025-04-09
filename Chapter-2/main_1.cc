#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;
#include "Func_Fuel_Consumption.h"
	
int main(int argc, char **argv)
{
	
	Curves Sin; 
	double x1=0.0000; //FC (x1)
	if (argc ==2) {
		x1 = atof(argv[1]); //FC.
		if (x1 <= 0 || x1 > 100)
			cout<<"\tUsage.: Input must be greater than 0 or less than or equal to 100!!!"<<endl;
		else{	 
			cout<<setprecision(3)<<fixed<<"Linguistic Variable Fuel Consumption: u("<<x1<<")Low "<<Sin.Ux_Triangle_Low(x1)
			<< ", u("<<x1<<")Medium " <<Sin.Ux_Gaussian_Medium(x1)<<", and u("<<x1<<")High: "
			<<Sin.Ux_Bell_High(x1)<<endl;
		}
	} else 
	    cout<<"\tUsage.: ./main <Fuel Consumption>"<<endl;		 
} 
	

