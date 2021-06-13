// A vector is a combination of linked list and arrays
// Arrays have the advantage of accessing elements at O(1) complexity.
// Eg: arr[80] is O(1)

// LinkedList have the advantage of growing the structure dynamically. Accessing elements is expensive
// Eg ll[100] would mean it would need to traverse from 0th element to 100th to access it.

// Imp: Why should you use vector.reserve() in the code
// From https://www.youtube.com/watch?v=loBmNtiTXd0
// When the size of the vector increases, it dynamically reserves more memory space
// Once more memory space is allocated, the existing resources gets copied to the new memory space.
// This would be costly for larger vectors, so to avoid that we should reserve memory in advance 
// by using vector.reserve(1000)
// If you insert 1001 elements, it would not throw an error. Instead the vector capacity would increase
// to 2000 (double)

#include <vector>
#include <iostream>

using namespace std;
int main()
{
    vector<int> vec;
    vec.reserve(100);
    for(int elm : {1,4,6,8,9})
        vec.push_back(elm);
    cout << vec.size() << "\t" << vec.capacity();
    return 0;
}