// Name: Muhammad Ali (BS. Data Science 1st-Semester).
#include <iostream>
using namespace std;
int main(){
			cout<< "       @@@@ @@@@@ @    @@@@ @   @ @     @@@@@ @@@@@ @@@@ @@@@\n";
			cout<< "      @     @   @ @    @    @   @ @     @   @   @   @  @ @  @\n";
			cout<< "      @     @@@@@ @    @    @   @ @     @@@@@   @   @  @ @@@@\n";
			cout<< "      @     @   @ @    @    @   @ @     @   @   @   @  @ @ @ \n";
			cout<< "       @@@@ @   @ @@@  @@@@ @@@@@ @@@@@ @   @   @   @@@@ @  @\n";
			cout<< "\nThis program can perform 5 mathemetical operations for upto 2 numbers.\n";
	int f=0;
	int s=0;
	char o=0;
	while(1){
		while(1){
			//Asks for an Operation to Perform.
			cout<< "\nSelect an Operation you want to perform.\n\n";
			cout<< "1...... Addition.\n";
			cout<< "2...... Subtraction.\n";
			cout<< "3...... Multiplication.\n";
			cout<< "4...... Division.\n";
			cout<< "5...... Remainder.\n";
			cout<< "0...... Exit.\n\n";
			cout<< ">>>";
			cin>> o;
			//Checks for a valid Input
			if(o == '1' or o == '2' or o == '3' or o == '4' or o == '5' ){
				break;
			}
			else if(o == '0'){
				break;	
			}
			else{
				cout<< "\nYou entered invalid number!\n";
				continue;
			}
		}
		if(o == '0'){
			break;
		}
		else{
			//Asks for Integer.
			cout<< "\nEnter first Integer: ";
			cin>> f;
			cout<< "\nEnter Second Integer: ";
			cin>> s;
			//If Adition is Selected.
			if(o == '1'){
				cout<< "\nAddition: ";
				cout<<endl<< f << " + " << s << " = " << f+s<<endl ;
			}
			//If Subtraction is Selected.
			else if(o == '2'){
				cout<< "\nSubtraction: ";
				cout<<endl<< f << " - " << s << " = " << f-s<<endl ;
			}
			//If Multiplication is Selected
			else if(o == '3'){
				cout<< "\nMultiplication: ";
				cout<<endl<< f << " X " << s << " = " << f*s<<endl ;
			}
			//If Division is Selected.
			else if(o == '4'){	
				while(1){
					if(s!=0){
						cout<< "\nDivision: ";
						cout<<endl<<(double)f << " / " << (double)s << " = " << (double)f/s<<endl ;
						break;
					}
					//Checks for Math Error.
					else{
						cout<<"\n\nMath Error! <Cannot divide by O>.\n\n";
						cout<< "Enter Second Integer:(cannot be zero!) ";
						cin>> s;
						continue;
					}
				}
				
			}
			//If Remainder is Selected.
			else if(o == '5'){
				while(1){
					if(s!=0){
						cout<<"\nRemainder: ";
						cout<<"Remainder of "<< f << " / " << s << " is " << f%s<<endl ;
						break;
					}
					//Checks for Math Error.
					else{
						cout<<"\nMath Error! <Cannot divide by O>.\n";
						cout<< "\nEnter Second Integer:(cannot be zero!)\n ";
						cin>> s;
						continue;
					}
				}
			}
		}
		while(1){
			char d=0;
			//Asks to perform another operation for given numbers.
			cout<< "\nDo you want to perform any other operation for numbres: " << f << " and " << s <<"(y/n): ";
			cin>> d;
			if(d =='y'){
				while(1){
					while(1){
						//Asks for an Operation to Perform.
						cout<< "\nSelect an Operation you want to perform.\n\n";
						cout<< "1...... Addition.\n";
						cout<< "2...... Subtraction.\n";
						cout<< "3...... Multiplication.\n";
						cout<< "4...... Division.\n";
						cout<< "5...... Remainder.\n";
						cout<< "0...... Exit.\n\n";
						cout<< ">>>";
						cin>> o;
						//Checks for a valid Input
						if(o == '1' or o == '2' or o == '3' or o == '4' or o == '5' ){
							break;
						}
						else{
							cout<< "\nYou entered invalid number!\n";
							continue;
						}
					}
					if(o == '1'){
						cout<< "\nAddition: ";
						cout<<endl<< f << " + " << s << " = " << f+s<<endl ;
					}
					//If Subtraction is Selected.
					else if(o == '2'){
						cout<< "\nSubtraction: ";
						cout<<endl<< f << " - " << s << " = " << f-s<<endl ;
					}
					//If Multiplication is Selected
					else if(o == '3'){
						cout<< "\nMultiplication ";
						cout<<endl<< f << " X " << s << " = " << f*s<<endl ;
					}
					//If Division is Selected.
					else if(o == '4'){	
						while(1){
							if(s!=0){
								cout<< "\nDivision: ";
								cout<<endl<<(double)f << " / " << (double)s << " = " << (double)f/s<<endl ;
								break;
							}
							//Checks for Math Error.
							else{
								cout<<"\n\nMath Error! <Dividing by O>.\n\n";
								cout<< "Enter Second Integer:(cannot be zero!) ";
								cin>> s;
								continue;
							}
						}
				
					}
					//If Remainder is Selected.
					else if(o == '5'){
						while(1){
							if(s!=0){
								cout<<"\nRemainder: ";
								cout<<"Remainder of "<< f << " / " << s << " is " << f%s<<endl ;
								break;
							}
							//Checks for Math Error.
							else{
								cout<<"\nMath Error! <Dividing by O>.\n";
								cout<< "\nEnter Second Integer:(cannot be zero!)\n ";
								cin>> s;
								continue;
							}
						}
					}
					break;
				}
			}
			else{
				break;
			}
		}
		cout<<"\n\n";
	}
	cout<< "\n\n\nPress any key to Exit this window.";
	return 0;
}
