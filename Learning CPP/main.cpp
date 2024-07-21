//
//  main.cpp
//  Learning CPP
//
//  Created by Brandon McConathy on 6/27/24.
//

#include <iostream>

class ArrayList {
private:
    int capacity;
    int length;
    int* array;
    
public:
    ArrayList(int initCapacity) {
        capacity = initCapacity;
        length = 0;
        array = new int[capacity];
    }
    
    int Get(int index) {
        return array[index];
    }
    
    void Set(int index, int val) {
        array[index] = val;
    }
    
    void Pushback(int val) {
        if (length == capacity) {
            Resize();
        }
        array[length] = val;
        ++length;
    }
    
    int Popback() {
        --length;
        return array[length + 1];
    }
    
    void Resize() {
        capacity *= 2;
        int* newArray = new int[capacity];
        for (int i = 0; i < length; ++i) {
            newArray[i] = array[i];
        }
        delete [] array;
        array = newArray;
    }
    
    int GetSize() {
        return length;
    }
    
    int GetCapacity() {
        return capacity;
    }
    
    void PrintList() {
        for (int i = 0; i < length; ++i) {
            std::cout << i << ": " << array[i] << std::endl;
        }
    }
};


int main(int argc, const char * argv[]) {
    
    ArrayList* arr = new ArrayList(5);
    
    arr->Pushback(10);
    arr->Pushback(5);
    arr->Pushback(2);
    arr->Pushback(20);
    arr->Pushback(15);
    
    arr->PrintList();
    
    return 0;
}
