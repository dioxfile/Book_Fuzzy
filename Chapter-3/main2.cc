#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;
#include "car_problem_distance.h"
#include "car_problem_speed.h"
#include "car_problem_acceleration.h"
#include "MAX_MIN.h"
	
int main(int argc, char **argv)
{
	
	Distance D;
	Speed S;
	Acceleration A; 
	double x1=0.0000, x2=0.0000; 
	if (argc ==3) {
		x1 = atof(argv[1]); 
		x2 = atof(argv[2]);
		if ((x1 <= 0 || x1 > 40) && (x2 <= 0 || x2 > 100)){
			cout<<"\tUsage.: Distance must be greater than 0 or less than or equal to 40"<<endl;
			cout<<"and Speed must be greater than 0 or less than or equal to 100!!!"<<endl;
	     } else {	 
			cout<<setprecision(3)<<fixed<<"Distance: u("<<x1<<")Short "<<D.Short(x1) << " and u("<<x1<<")Long: "<<D.Long(x1)<<endl;
			cout<<setprecision(3)<<fixed<<"Speed: u("<<x2<<")Low "<<S.Low(x2) << " and u("<<x2<<")High: "<<S.High(x2)<<endl;
     		cout<<"Rule 1: IF Distance is Short("<<D.Short(x1)<<") AND Speed("<<S.Low(x2)<<") is Low ⇒ Maintain Speed"<<endl;
    		cout<<"Rule 2: IF Distance is Short("<<D.Short(x1)<<") AND Speed("<<S.High(x2)<<") is High ⇒ Decrease Speed"<<endl;
        	cout<<"Rule 3: IF Distance is Long("<<D.Long(x1)<<") AND Speed("<<S.Low(x2)<<") is Low ⇒ Increase Speed"<<endl;
        	cout<<"Rule 4: IF Distance is Long("<<D.Long(x1)<<") AND Speed("<<S.High(x2)<<") is High ⇒ Maintain Speed"<<endl; 
	    } 
	  }else 
	    cout<<"\tUsage.: ./main <Distance> <Speed>"<<endl;		 
} 
	

