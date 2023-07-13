// Student ID: 20426991
//
// Branching-Functions.cpp
// 2a-Lab-03
//
#include <iostream>

// This function returns the mean the three numbers passed
// in as parameters. Note that the mean may not be a round
// number. So you must use the double datatype for it.
double mean_of_3(int n1, int n2, int n3) {
    double average = (n1 + n2 + n3) / 3.0;
    return average;
}

// This function returns the maximum of the 5 given numbers
int max_of_5(int n1, int n2, int n3, int n4, int n5) {

    int max1, max2, max3, max_final;
    if (n1 < n2)
        max1 = n2;
    else
        max1 = n1;
    
    if(n4 < n3)
        max2 = n3;
    else
        max2 = n4;

    if(max1 > max2)
        max3 = max1;
    else
        max3 = max2;

    if (max3 > n5)
        max_final = max3;
    else
        max_final = n5;
    
    return max_final;
}

// This function returns the minimum of the 5 given numbers
int min_of_5(int n1, int n2, int n3, int n4, int n5) {
        int min1, min2, min3, min_final;
    if (n1 > n2)
        min1 = n2;
    else
        min1 = n1;
    
    if(n4 > n3)
        min2 = n3;
    else
        min2 = n4;

    if(min1 < min2)
        min3 = min1;
    else
        min3 = min2;

    if (min3 < n5)
        min_final = min3;
    else
        min_final = n5;
    
    return min_final;

}

// Given three lengths, this function should return whether they can be the
// sides of some triangle. The heuristic you code should check if the
// sum of the two smallest sides is greater than or equal to the third side.
// Treat extreme cases as valid trianges. E.g. a+b == c means valid triangle.
// The challenge is to do it without using arrays
bool sides_make_triangle(int a, int b, int c) {
    int small1, small2,other;


    if ((a<b) && (b<c)){
        small1 = a;
        small2 = b;
        other = c;
        
    }
    else if ((a<b) && (c<b)){
        small1 = a;
        small2 = c;
        other = b;
    }
    else if ((a>b) && (a>c)){
        small1 = b;
        small2 = c;
        other = a;
    }
    else if ((a>b) && (c>a)){
        small1 = b;
        small2 = a;
        other = c;
    }
    else if ((c<b) && (b<a)){
        small1 = c;
        small2 = b;
        other = a;
    }
    else if ((c<b) && (a<b)){
        small1 = c;
        small2 = a;
        other = b;

    }

    
    if ((small1+small2) >= other){
        return true;
    }
    else{
        return false;
    }

}

// Given three angles as integer degrees, this function should return whether
// they can be internal angles of some triangle. Treat extreme cases as
// valid triangles. E.g. (0, 0, 180) is a valid triangle
bool angles_make_triangle(int A, int B, int C) {
    bool result = ((A+B+C)==180) ? true : false;
    return result;
}

// Return true if the year yyyy is a leap year and false if not.
bool is_a_leap_year(int yyyy) {
    if ((yyyy%400) == 0){
        return true;
    }
    else if ((yyyy % 100) == 0){
        return false;
    }
    else if ((yyyy%4) == 0){
        return true;
    }
    else {
        return false;
    }

}
