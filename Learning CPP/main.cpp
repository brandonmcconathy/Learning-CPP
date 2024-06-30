//
//  main.cpp
//  Learning CPP
//
//  Created by Brandon McConathy on 6/27/24.
//

#include <iostream>

class Node {
    int val;
    Node* next;
    
public:
    Node(int input) {
        val = input;
        next = nullptr;
    };
    
    int Get() {
        return val;
    };
    
    Node* GetNext() {
        return next;
    };
    
    void Add(Node input) {
        next = &input;
    }
    
};


class LinkedList {
    Node* head;
    Node* tail;
    int length;
    
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
        length = 0;
    };
    
    int Length() {
        return length;
    };
    
    int Peek() {
        if (length == 0) {
            return NULL;
        };
        return head->Get();
    };
    
    int Tail() {
        if (length == 0){
            return NULL;
        };
        return tail->Get();
    };
    
    void Add(Node input) {
        if (length == 0) {
            std::cout << "First add: " << &input << "\n";
            head = &input;
            tail = &input;
        } else {
            tail->Add(input);
            tail = &input;
        };
        length++;
    };
    
    void PrintList() {
        if (length == 0) {
            std::cout << "List is empty\n";
        } else {
            Node* curr = head;
            for (int i=0; i<length; i++) {
                std::cout << i << ": " << curr->Get() << "\n";
                curr = curr->GetNext();
            }
        };
        
    };
    
};


int main(int argc, const char * argv[]) {
    
    Node firstVal(10);
    Node secondVal(5);
    Node thirdVal(128);
    
    LinkedList list;
    
    list.Add(firstVal);
    list.Add(secondVal);
    list.Add(thirdVal);
    
    list.PrintList();
    
    std::cout << list.Peek() << "\n";
    std::cout << list.Tail() << "\n";
    
    
    
    
    return 0;
}
