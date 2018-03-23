//
//  lab-exercises.cpp
//
//
//  Created by Brennan Kinnel on 1/21/18.
//

#include <iostream>
#include <string>

int main() {
    
    // ------------------For Loops--------------
    
    int myArray[10];
    
    for(int i=0; i < 10; i++) {
        // Modifying values, then use a regular for-loop
        myArray[i] = i;
        std::cout << i << " ";
    }
    
    std::string s= "Hello World! I can count";
    for(char c : s) {
        std::cout << c;
    }
}
