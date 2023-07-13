
#include <iostream>

using namespace std;

int main() {
    string name;
    int number_of_units_enrolled;

    cout << "Hello! What is your name? \n";
    cin >> name;
    cout << "Welcome, " << name << ", to MyPortal!\n";
    cout << "How many units are you enrolled in?";
    cin >> number_of_units_enrolled;
    
    return 0;
}