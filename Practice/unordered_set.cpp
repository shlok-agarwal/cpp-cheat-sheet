
// std::set
// std::set contains only UNIQUE elements. If you try to push duplicates, it will still only have the unique element
// sets are ORDERED by default

// std::unordered_set
// UNIQUE but not ordered
// Search, insertion and removal happens at average constant-time complexity
// Unordered set used for fast insertion and removal and when unique elements are needed.

#include <unordered_set>
#include <set>
#include <iostream>
using namespace std;

int main()
{
    // use this for ordered set
    // set<int> uset = {1,5,7,2,7,5,2};

    unordered_set<int> uset = {1,5,7,2,7,5,2};
    auto search = uset.find(10); // returns address pointer
    if(search != uset.end())
        cout << "Found " << *search << "\n";
    else cout << "Not Found \n";

    for(auto &elm: uset)
    {
        cout<< elm <<"\t";
    }
    cout<<"\n";
}