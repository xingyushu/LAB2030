/*
    Negotiating a consumer loan is not always straightforward. One form of loan is the
    discount installment loan, which works as follows. Suppose a loan has a face value
    of $1,000, the interest rate is 15%, and the duration is 18 months. The interest is
    computed by multiplying the face value of $1,000 by 0.15, yielding $150. That
    figure is then multiplied by the loan period of 1.5 years to yield $225 as the total
    interest owed. That amount is immediately deducted from the face value, leaving 
    the consumer with only $775. Repayment is made in equal monthly installments
    based on the face value. So the monthly loan payment will be $1,000 divided by 18,
    which is $55.56. This method of calculation may not be too bad if the consumer
    needs $775, but the calculation is a bit more complicated if the consumer needs
    $1,000. Write a program that will take three inputs: the amount the consumer needs
    to receive, the interest rate, and the duration of the loan in months. The program
    should then calculate the face value required in order for the consumer to receive
    the amount needed. It should also calculate the monthly payment.
*/

// lab1
#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double interest_rate;
    cout << "Please enter the annual interest rate as a percentage (e.g., 15 for 15%) (enter 0 toquit):";
    // cout << "Enter the interest rate (Enter .15 for 15%, not 15): ";
    cin >> interest_rate;
    interest_rate = interest_rate*0.01;


    double amount_needed;
    cout << "Please enter the amount you would like to receive:";
    cin >> amount_needed;



    double loan_duration;
    cout << "Please enter loan period in months: ";
    cin >> loan_duration;
    loan_duration /= 12;

    double face_value = amount_needed / (1 - (loan_duration * interest_rate));
    cout << "The total amount of your loan  is: $" << face_value << '\n';
    
    double monthly_payment = face_value / 12;
    cout << "Your monthly payment: $" << monthly_payment << '\n';

    return 0;
}


/*Come on,it is a easy question,you can make it perfect such as the structure of grammar,the variable definition.*/
