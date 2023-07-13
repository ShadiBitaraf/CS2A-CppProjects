//Sine.cpp
//Sine
//Class code for 4/14/22


//creted by Shadi on 4/14/22

#include <iostream>
#include <cmath> 

using namespace std;

// we are going to define a function for the sine of an angle
//well use the expansion series for sine from the Taylor series.
//Use google: sinx = 1 - x^3/3! + x^5/5! - x^7/7! + x^9/9! - ...
//this function will return the value of the sine of x
//In this function we are going to do something unconventional(not recommended), cause
//its an internal function and not to the external world. 

double my_sine(double x) {
    //first, printing out the value of sinx according to the system library.
    //cout << "Sine of " << x << " radians (from system library) = " << sin(x) << endl;

    //calculating only using the first term
    double val = x;
    //cout << "Sine of " << x << " radians (using 1 term) = " << val << endl;

    //calculating only using two terms
    //val = x -x*x*x/(1*2*3);
    //cout << "Sine of " << x << " radians (using two terms) = " << val << endl;
 
    //calculating only using three terms
    //val = x -x*x*x/(1*2*3) + x*x*x*x*x /(1*2*3*4*5);
    //cout << "Sine of " << x << " radians (using three terms) = " << val << endl;

 
   //calculating only using four terms
    //val = x -x*x*x/(1*2*3) + x*x*x*x*x /(1*2*3*4*5) - x*x*x*x*x*x*x /(1*2*3*4*5*6*7);
    //cout << "Sine of " << x << " radians (using four terms) = " << val << endl;

    return val; //0.0 is just a sub-return to be replaced later

}

int main(int argc, const char * argv[]) {
    int degrees;

    cout << "Enter the angle in degrees: ";
    cin >> degrees;
    //convert radians to degrees
    double radians = degrees/180.0 * M_PI;

    cout << "my_sine of your angle (using 4 terms) = \a" << my_sine(radians)<< endl;

    return 0;
}


