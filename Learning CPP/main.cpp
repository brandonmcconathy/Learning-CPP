//
//  main.cpp
//  Learning CPP
//
//  Created by Brandon McConathy on 6/27/24.
//

#include <iostream>
#include <vector>


class Heap {
private:
    int length;
    std::vector<int> heap;
    
public:
    Heap() {
        length = 0;
    }
    
    int size() {
        return length;
    }
};

int main(int argc, const char * argv[]) {
    
    Heap* heap = new Heap();
    
    std::cout << heap->size() << std::endl;
    
    return 0;
}
