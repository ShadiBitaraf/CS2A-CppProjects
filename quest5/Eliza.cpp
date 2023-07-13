// Student ID: 20426991
// TODO - Replace the number above with your actual Student ID
// Eliza.cpp
// 2a.Lab-05-Eliza
//
//

#include <iostream>
#include <sstream>
#include "Eliza.h"
using namespace std;

string lispify(string s) {

    // TODO - Your code here

    string stri = "";

    for(size_t i = 0; i < s.length(); i++) {
        if(s[i] == 's') {
            stri += "th";
        }
        else if(s[i] == 'S') {
            stri += "Th";
        }
        else {
            stri += s[i];
        }
    }
    return stri;
}

string rotate_vowels(string &s) {

    // TODO - Your code here

    for(size_t i = 0; i <= s.length(); i++) {
        if(s[i] == 'a')
            s[i] = 'e';
        else if(s[i] == 'e')
            s[i] = 'i';
        else if(s[i] == 'i')
            s[i] = 'o';
        else if(s[i] == 'o')
            s[i] = 'u';
        else if(s[i] == 'u')
            s[i] = 'a';
    }
    return s;
}

void enter() {
    bool yes = false;
    cout << "What?" << endl;
    while(true) {
        
        string s;
        getline(cin, s);
        if(s.empty())
            //continue;
        // chech for '!'
        
        for(size_t i = 0; i <= s.length(); i++) {
            if(s[i] == '!') {
                yes = true;
                break;
            }
        }
        else if(yes) {
            cout << "OMG! You don't say!!   ";
            cout << s << "!!!!!" << endl << endl;
            //continue;
        }

        // check for "why" or "what" in string

        else if(s.find("why") != string::npos || s.find("what") != string::npos) {
            cout << "I'm sorry, I don't like questions that contain what or why." << endl << endl;
            //continue;
        }

        // check for 's'
        else if(s.find('s') != string::npos) {
            cout << lispify(s) << endl;
            cout << "!Sheesh! Now what ?" << endl;
            string input;
            cin >> input;
            if(input == "bye" || input == "Bye" || input == "Quit" || input == "quit") {
                cout << "Ok Bye.  Nice being a force of change in your life." << endl;
                break;
            }
        }

        // generating random no
        int randoms = rand() % 10;
        if(randoms == 8 || randoms == 9) {
            cout << "Huh? Why do you say: "<< s << "?" << endl;
        }
        else {
            cout << rotate_vowels(s) << "?" << endl;
        }
    }
}