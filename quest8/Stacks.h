// Student ID: 20426991
// TODO - Replace the number above with your actual student ID
//
#ifndef Stacks_h
#define Stacks_h
#include <vector>
#include <sstream>
class Stack_Int {
private:
    std::vector<int> _data;
public:
    // No explicit constructor or destructor
    size_t size() const {
        // TODO - Your code here
        return _data.size();
}
    bool is_empty() const {
        // TODO - Your code here
        return _data.empty();
}
    void push(int val) {
        // TODO - Your code here
        _data.push_back(val);

}
    int top(bool& success) const {
        // TODO - Your code here
        if (_data.size()==0){
            success = false;
            return 0;
        } 
        else{
            success = true;
            return _data.back();
            
        }
}
    bool pop() {
            // TODO - Your code here
        _data.pop_back();
        return true;
    }
    bool pop(int& val) {
        // TODO - Your code here
        if (_data.size()==0){
            return 0;
        } 
        else{
            val = _data.back();
            _data.pop_back();
            return true;
        }

    }
    std::string to_string() const {
        // TODO - Your code here
        std::string info = "";

        size_t i = _data.size();
        info += "Stack (" + std::to_string(_data.size())+ " elements):\n";
        while(i> 0 && i>_data.size()-10){
            
            info += std::to_string(_data.at(i-1)) + "\n";
            i--;
        } 
        if(_data.size()>=10 ){
            info += "...\n";
        }

        info += "Elements, if listed above, are in increasing order of age.";

        return info;
}
    // Don't remove the following line
    friend class Tests;
};

class Stack_String {
    
      // TODO - Your code here. Ask in the forums if you're stuck.
      private:
    std::vector<std::string> _data;
public:
    // No explicit constructor or destructor
    size_t size() const {
        // TODO - Your code here
        return _data.size();
}
    bool is_empty() const {
        // TODO - Your code here
        return _data.empty();
}
    void push(std::string val) {
        // TODO - Your code here
        _data.push_back(val);

}
    std::string top(bool& success) const {
        // TODO - Your code here
        if (_data.size()==0){
            success = false;
            return 0;
            
        } 
        else{
            success = true;
            return _data.back();
            
        }
}
    bool pop() {
            // TODO - Your code here
        _data.pop_back();
        return true;
    }
    bool pop(std::string& val) {
        // TODO - Your code here
        if (_data.size()==0){
            return 0;
        } 
        else{
            _data.pop_back();
            return true;
            
            
        }
        
}
    std::string to_string() const {
        // TODO - Your code here
        std::string info = "";
        for (size_t i = 0; i<_data.size();i++){
           
            info += "Stack (" + std::to_string(_data.size()) + ") :\n" + _data.at(i);
        }
        info += "\nElements, if listed above, are in increasing order of age.";


        return info;
}
    // Don't remove the following line
    friend class Tests;
};
#endif /* Stacks_h */