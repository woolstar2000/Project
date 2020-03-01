/*
Name: Jonathan Woolverton
Date: 2.28.20
Instructor: Vijayanth (VJ) Tummala and Kleanthis Zisis Tegos
*/
#include <iostream>
#include <stdlib.h> //for rand function
using namespace std;

int main  () {
int entryno, ct, simulation, lotton1, lotton2, lotton3, evenct, sevench, ctin;

//setup loop framework

simulation = 1;
while(simulation==1) {
	evenct = 0; //resets even counter to zero
	sevench = 0; //resets seven counter to zero
	
	//prompts user to input the number of entries
	cout<<"Enter number of lotteries: ";
	cin>>entryno;
	cout<<endl;
	
	if (entryno <= 0) { //checks for the number of entries being entered as negative
	cout<<endl<<"Please re enter number of lotteries as an integer greater than zero."<<endl;	
	} else {
	for (ct = 1;ct <= entryno; ct++) {
	//generates random numbers each time the loop is run
	lotton1 = rand() % 10 + 1;
	lotton2 = rand() % 10 + 1;
	lotton3 = rand() % 10 + 1;
	cout<<"Lottery number is:"<<lotton1<<"-"<<lotton2<<"-"<<lotton3<<endl;
	
	if ((lotton1 % 2 == 0) && (lotton2 % 2 == 0) && (lotton3 % 2 == 0)) {
	evenct++;
	} 
	/*
	checker for even numbers
	adds 1 to the counter each time 3 even numbers occur in the loop
	this will be later used to calculate the % even numbers
	*/
	
	if ((lotton1 == 7) || (lotton2 == 7) || (lotton3 ==7)) {
	sevench++;
	}
	// checker for 7 occuring in the number set
	
	
        if ((lotton1 + lotton2 + lotton3) == 6) {
        ctin++;
        }
        //checks for numbers 1,2,3 in set

        }
        cout<<"Percentage of time the result contains three even numbers:"<<(100 * evenct/entryno)<<endl;
        cout<<"Percentage of time the number 7 occurs in the three numbers:"<<(100 * sevench/entryno)<<endl;
        cout<<"Percentage of time the numbers 1,2,3 occur (not necessarily in order):"<<(100* ctin/entryno)<<endl;

	//prompts user to repeat program
	cout<<endl<<"Another pick? Press 1 for yes =>2"<<endl;
	cin>>simulation;
}
}
return 0;
}
