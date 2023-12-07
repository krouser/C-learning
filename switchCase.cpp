#include <iostream>
int main(){
	using namespace std;
	char grade = 'B';
	
	///In switch...case, the value of the expression enclosed in the brackets ( ) following switch is checked.
	
  	switch ( grade )
  	{
	
	///If the value of the expression matches the value of the constant in case, 
	///the statement(s) corresponding to that case will be executed.
		case 'A':
      		cout << " Excellent ! " << endl;
    		 break ;
    	case 'B':
    		 cout << " Outstanding ! " << endl;
      		break ;
    	case 'C':
      		cout << " Good ! " << endl;
      		break ;
    	case 'D':
      		cout << " Can do better " << endl;
      		break ;
    	case 'E':
      		cout << " Just passed " << endl;
      		break ;
    	case 'F':
      		cout << " You failed " << endl;
      		break ;
			
	///If the expression does not match any of the constant values, 
	///then the statements corresponding to default are executed.		
			
    	default :
      		cout << " Invalid grade " << endl;
  	}
	return 0;
}