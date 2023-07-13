// Student ID: 20426991
//
//  Etox.cpp
//  2a-Lab-01
//
#include <iostream>
#include <sstream>
#include <cmath>   // needed for sqrt
#include <cstdlib> // for exit()
using namespace std;
double etox_5_terms(double x) {

    double val = x;
    return val;
}
int main(int argc, char **argv) {
    string user_input;
    double x;
    cout <<"Enter a value for x: ";
    getline(cin, user_input);
    istringstream(user_input) >>x;
    // Your code here
    float factorial = 1 + x + (x*x)/2 + (x*x*x)/6 + (x*x*x*x)/24;
    
    cout << etox_5_terms(factorial)<<"\n";

    return 0; 
    
}