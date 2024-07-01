//
//  main.cpp
//  Learning CPP
//
//  Created by Brandon McConathy on 6/27/24.
//

#include <iostream>

struct Node {
    
    int val;
    Node* next;
    
    Node(int input) {
        val = input;
        next = nullptr;
    };
    
};


class LinkedList {
    Node* head;
    Node* tail;
    int length = 0;
    
public:
    int Length() {
        return length;
    };
    
    int Peek() {
        if (length == 0) {
            return NULL;
        };
        return head->val;
    };
    
    int Tail() {
        if (length == 0){
            return NULL;
        };
        return tail->val;
    };
    
    void Add(Node input) {
        if (length == 0) {
            head = &input;
            tail = &input;
            std::cout << head << "\n";
        } else {
            tail->next = &input;
            tail = &input;
        };
        length++;
    };
    
    void PrintList() {
        if (length == 0) {
            std::cout << "List is empty\n";
        } else {
            std::cout << "head: " << head->val << "\n";
            Node* curr = head;
            std::cout << "curr: " << curr << "\n";
            for (int i=0; i<length; i++) {
                std::cout << i << " curr: " << curr->val << "\n";
                curr = curr->next;
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
    
    std::cout << "Final Head: " << list.Peek() << "\n";
    std::cout << "Final Tail: " << list.Tail() << "\n";
    
    
    
    
    return 0;
}
