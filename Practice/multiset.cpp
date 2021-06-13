#include <iostream>
#include <functional>
#include <string>
#include <set>
#include <unordered_set>

using namespace std;

// Use multiset when you want ordered dataset with duplicates
// Insertion, removal and search happens to logarithmic complexity

int main()
{
    // unordered_multiset<int> M = {2,3,4,5,2,1,5};
    multiset<int, greater<>> M = {2,3,4,5,2,1,5};
    for(auto &elm : M)
        cout<< elm << "\t";
    cout << "\n";

    // search and print using the pointer
    auto itr = M.find(3);
    for (auto i = itr; i != M.end(); i++)
    {
        cout << *i <<"\t";
    }
    cout << "\n";
    
    // count and search
    int count = M.count(10);
    cout << "10 occurs " << count << " times";
    // Can also be used to check if 5 exists. 

    return 0;
}
