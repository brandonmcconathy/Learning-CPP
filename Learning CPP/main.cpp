//
//  main.cpp
//  Learning CPP
//
//  Created by Brandon McConathy on 6/27/24.
//

#include <iostream>
#include "ExternalFunction.hpp"

class Node {
    int val;
    
public:
    
    Node(int input) {
        val = input;
    };
    
    int Peek() {
        return val;
    };
    
    void Output() {
        std::cout << "This is the value: " << val << "\n";
    };
    
    void Add(int input) {
        val = val + input;
    };
    
    void Multiply(int input) {
        val = val * input;
    };
};

int main(int argc, const char * argv[]) {
    
    Node firstVal(10);
    Node secondVal(5);
    Node thirdVal(128);
    
    
    for (int i=0; i < 10; i++) {
        firstVal.Multiply(i + 1);
        firstVal.Output();
    }
    
    
    return 0;
}
