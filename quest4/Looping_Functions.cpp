// Student ID: 20426991
//
// Looping_Functions.cpp
//
// Created by Anand Venkataraman on 8/9/19.
// Copyright © 2019 Anand Venkataraman. All rights reserved.
//
#include <iostream>
#include <sstream>
using namespace std;
// Give the user 6 chances to guess the secret number n (0-10). If they get it,
// say so and return true. Else say so and return false.
bool play_game(int n) {

        while(true){
            cout << "Welcome to my number guessing game\n\n";
            int counter = 0;
            int response;

            for (int i=0; i<6; i++){
                counter+=1;
                
                cout << "Enter your guess: \n";
                cin >> response;
                cout << "You entered: " << response <<"\n";

                if(n == response){
                    cout << "You found it in " << counter << " guess(es).\n";
                    return true;
                }
            }
                cout << "\nI'm sorry. You didn't find my number.\nIt was \n" <<n;
                return false;
                

        }
        
    
    return 0;



}



// Calculate e^x using the series summation up to exactly the first
// n terms including the 0th term.
double etox(double x, size_t n) {
// TODO - Your code here
    
    double sum = 0;
      if (n == 0) 
            return 0;

      if (n == 1) 
            return 1;
        
      for (size_t i = 0; i < n; i++) {
        double cur_elem = 1;
        double factorial = 1;

        for (size_t j = 0; j < i; j++) 
          cur_elem *= x;
        
        for (size_t k = 1; k <= i; k++) 
          factorial *= k; 
        
        sum += double (cur_elem) / factorial;
      }
      return sum;
}
// Return the number of occurrences of char c in string s
size_t count_chars(string s, char c) {
// TODO - Your code here
    size_t counter = 0;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == c) 
            counter++;
    }
    return counter;
}

// Use Euclid's algorithm to calculate the GCD of the given numbers
size_t gcd(size_t a, size_t b) {
// TODO - Your code here
    while (a != b){
        if (a > b) 
            a = a - b;
        else 
            b = b - a;
        }
        return a;
}
// Return a string of the form n1,n2,n3,... for the given AP.
string get_ap_terms(int a, int d, size_t n) {
// TODO - Your code here
    string s = "";
    long cur_elem;
    for (size_t i = 0; i < n; i++) {
        cur_elem = a + (i) * d;
        s = s + to_string(cur_elem) + ',';
    }
    s = s.substr(0,s.size()-1);
    return s;

}
// Return a string of the form n1,n2,n3,... for the given GP.
string get_gp_terms(double a, double r, size_t n) {
// TODO - Your code here

    string s = "";
    double cur_elem;
    double cur_power = 1;
    //bool first = true;

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < i; j++) {
            cur_power *= r;
        }
        
        cur_elem = a*cur_power;
        cur_power = 1;
        // if (cur_elem == i){
        //     if(!first){
        //         s = ", " + s + to_string(cur_elem) ;
        //     }
        //     else{
        //         first=false;
        //         s = s + to_string(cur_elem) ;

        // }
        // }
        s = s + to_string(cur_elem);
        s +=" ,";
        
    }
    return s;
}

double get_nth_fibonacci_number(size_t n) {
// TODO - Your code here   
    if (n <= 1)
          return n;
    return get_nth_fibonacci_number(n-1) + get_nth_fibonacci_number(n-2);

}