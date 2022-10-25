// Name: Muhammad Ali (BS. Data Science 1st-Semester).
#include <iostream>
using namespace std;
int main()
{
	int a;
   int b;
   char c;
   while(true){
		cout<<"Please enter your first number and press enter: ";
		cin>> a;
		cout<<"\n\n"<<"Please enter your second number and press enter: ";
		cin>> b;
		cout<<"\n\n"<<"Please Select an operation.\n1....Adition\n2....Subtraction\n3....Multiplication\n4....Division\n5....Remainder";
		cout<<"\n\n>>>";
		cin>> c;
		cout<<"\n\n";
   		if (c=='1'){
			cout<<"Addition: "<<a<< " + " <<b<<" = "<<a+b;
		}
		else if(c=='2'){
			cout<<"Subtraction: "<< a<<" - "<<b<<" = "<<a-b;
		}
		else if(c=='3'){
			cout<<"Multiplication: "<<a<<" * "<<b<<" = "<<a*b;
		}
		else if(c=='4'){
			if(b==0){
				cout<<"Math Error!Cannot divide by zero.";		    
			}
			else{
				cout<<"Division: "<< a<<" / "<<b<<" = "<<a/b;
			}
		}
		else if(c=='5'){
 	    	if(b==0){
				cout<<"Math Error! Cannot divide by zero.";		    
			}
			else{
				cout<<"Remainder: "<<a<<" % "<<b<<" = "<< a%b;
			}
		}
		else{
			cout<<"That operation is not available.";
		}
		cout<<"\n\n";
	} 
	return 0;
}
