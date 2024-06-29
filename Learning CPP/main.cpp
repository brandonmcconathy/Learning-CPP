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
    Node* next = nullptr;
    
public:
    Node(int input) {
        val = input;
    };
    
    int get() {
        return val;
    };
    
    void Add(Node input) {
        next = &input;
    }
    
};


class LinkedList {
    Node* head = nullptr;
    int length = 0;
    
public:
    int Length() {
        return length;
    };
    
    int Peek() {
        if (length == 0) {
            return NULL;
        }
        return head->get();
    };
    
    void Add(Node input) {
        if (length == 0) {
            head = &input;
        } else {

        };
    };
};


int main(int argc, const char * argv[]) {
    
    Node firstVal(10);
    Node secondVal(5);
    Node thirdVal(128);
    
    LinkedList list;
    
    std::cout << list.Length() << "\n";
    
    
    
    
    return 0;
}
