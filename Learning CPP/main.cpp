//
//  main.cpp
//  Learning CPP
//
//  Created by Brandon McConathy on 6/27/24.
//

#include <iostream>
#include <vector>


class MinHeap {
private:
    int length;
    std::vector<int> heap;
    
public:
    MinHeap() {
        length = 0;
    }
    
    int get(int index) {
        return heap[index];
    }
    
    int size() {
        return length;
    }
    
    void add(int val) {
        heap.push_back(val);
        
        int index = length;
        int parentIdx = (index - 1) / 2;
        
        while (index != 0 && heap[parentIdx] < val) {
            int temp = heap[parentIdx];
            heap[parentIdx] = val;
            heap[index] = temp;
            index = parentIdx;
            parentIdx = (index - 1) / 2;
        }
        length++;
    }
};



void printList(MinHeap vals) {
    for (int i = 0; i < vals.size(); ++i) {
        std::cout << vals.get(i) << " ";
    }
    std::cout << std::endl;
}


int main(int argc, const char * argv[]) {
    
    MinHeap heap;
    
    heap.add(10);
    heap.add(12);
    heap.add(2);
    heap.add(1);
    heap.add(15);
    heap.add(5);
    
    printList(heap);
    
    return 0;
}
