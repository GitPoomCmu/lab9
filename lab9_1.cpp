#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan, interest, pay;
    
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	cout << fixed << setprecision(2); 
	
    for (int year = 1; ; year++) {
	    cout << setw(13) << left << year; 
	    cout << setw(13) << left << loan;
	    
	    cout << setw(13) << left << interest/100 * loan;
	    loan += interest/100 * loan;
	    cout << setw(13) << left << loan;
	    
	    pay = (pay>loan)?loan:pay;
	    cout << setw(13) << left << pay;
	    loan -= pay;
	    
            cout << setw(13) << left << loan;
	    if(loan <= 0) break;
	    
	    cout << "\n";	
    }
    
	return 0;
}
