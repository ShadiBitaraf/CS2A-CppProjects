//  Pet.cpp
//  2a-Lab-06-Pets
//
#include <iostream>
#include <sstream>
#include <vector>
#include "Pet.h"
using namespace std;
// This is a way to properly initialize (out-of-line) a static variable.
size_t Pet::_population = 0;
Pet::Pet(string name, long id, int num_limbs) {
    // TODO - Your code here
    _name = name;
    _id = id;
    _num_limbs = num_limbs;
    _population+=1;
}
Pet::~Pet() {
    // TODO - Your code here
    _population-=1;

}
string Pet::get_name() const { return _name; }
long Pet::get_id() const {
    // TODO - Your code here
    return _id;
}
int Pet::get_num_limbs() const {
    // TODO - Your code here
    return _num_limbs;
}
bool Pet::set_name(string name) {
    // TODO - Your code here
    if (name == "")
        return false;
    _name = name;
    return true;

}
bool Pet::set_id(long id) {
    // TODO - Your code here
    if (id<0)
        return false;
    _id = id;
    return true;
}
bool Pet::set_num_limbs(int num_limbs) {
    // TODO - Your code here
    if (num_limbs<0)
        return false;
    _num_limbs = num_limbs;
    return true;

}
string Pet::to_string() const {
    // TODO - Your code here
    return "(Name: "+ _name + ", ID: "+ std::to_string(_id) +", Limb Count: "+ std::to_string(_num_limbs) +")";

}
// Fill in the supplied pets vector with n pets whose
// properties are chosen randomly.
// Don't mess with this method more than necessary.
void Pet::get_n_pets(size_t n, std::vector<Pet>& pets, int name_len) {
    // TODO - Resize pets as necessary
    
    pets.resize(n);
    long prev_id = 0;
    for (size_t i = 0; i < n; i++) {
        long id = prev_id + 1 + rand() % 10;
        pets[i].set_id(id);
        pets[i].set_num_limbs(rand() % 9); // up to arachnids
        // TODO - make and set a name of the requested length
        string new_name = pets[i].make_a_name(name_len);
        pets[i].set_name(new_name);
        // TODO - adjust prev_id as necessary
        prev_id = id;

} }
// ---------------------------------------------------------------------
string Pet::make_a_name(int len) {
    // TODO - Your code here

    string vowel = "aeiou";
    string consonants = "bcdfghjklmnpqrstvwxyz";
    string name = "";

    int first_letter = rand();

    if (first_letter%2==0) { //even
        for(int i =0; i<len; i++){
            int other_letters = rand();
            int vowel_letter = (other_letters% (vowel.length()));
            int con_letter = (other_letters% (consonants.length()));
            if (i%2==0){
                name += consonants[con_letter];
            }
            else{
                name += vowel[vowel_letter];}
        }

    }
    else if (first_letter%2!=0){
            for(int i =0; i<len; i++){
            int other_letters = rand();
            int vowel_letter = (other_letters% (vowel.length()));
            int con_letter = (other_letters% (consonants.length()));
                if (i%2==0){
                    name += vowel[vowel_letter];
                }
                else{name += consonants[con_letter];}
            }


    }


    return name;
}





// // Global helpers
bool operator==(const Pet& pet1, const Pet& pet2) {
//     // TODO - Your code here
    if (pet1.get_num_limbs() == pet2.get_num_limbs() && 
    pet1.get_id() == pet2.get_id() && pet1.get_name() == pet2.get_name())
        return true;
    return false;
}
bool operator!=(const Pet& pet1, const Pet& pet2) {
//     // TODO - Your code here
    if (operator==(pet1, pet2)== false)
        return true;
    return false;

}
ostream& operator<<(ostream& os, const Pet& pet) {
//     // TODO - Your code here
    os<<pet.to_string();
    return os;


}