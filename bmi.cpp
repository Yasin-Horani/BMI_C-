#include <iostream>
using namespace std;

int main(){
    double lingte ;
    cout << "Lengte in CM:\n" ;
    cin >> lingte ;
    lingte = lingte / 100;
    lingte  = (lingte * lingte);
    double gewicht; 
    cout << "Gewicht in KG:\n" ;
    cin >> gewicht ;
    double bmi = gewicht / lingte ; 
    int result= bmi;
    cout << "Jouw BMI : " <<   result << "\n";
    return 0;
}