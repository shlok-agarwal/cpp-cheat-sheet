
#include <map>
#include <unordered_map>
#include <iostream>

using namespace std;

// to search in map
// auto itr = table.find(make_pair(startStation, endStation));
// if(itr != table.end())
//     return itr->second;
// else return null;

int main()
{
    // ORDERED O(log n)
    // map <string, int, less<>> M;
    multimap <string, int, less<>> M; // add greater to change sort order; default is less
    // M["dog"] = 3; // this is not supported in multimap, so better to avoid
    M.insert(make_pair("cat", 1));
    M.insert(make_pair("dog", 2));
    M.insert(make_pair("dog", 3));
    M.insert(make_pair("elephant", 4));
    
    cout <<"ORDERED \n";
    for(auto &elm: M)
        cout<<elm.first <<"\t" << elm.second <<"\n";
    cout <<"\n";
    
    // UNORDERED O(1)
    // unordered_map<string, int> N; 
    unordered_multimap<string, int> N; 
    // in map, this will overwrite the previous key. To not overwrite, check if already exists
    // N["dog"] = 3; // this is not supported in multimap, so better to avoid
    N.insert(make_pair("cat", 1));
    N.insert(make_pair("dog", 2));
    N.insert(make_pair("dog", 3));
    N.insert(make_pair("elephant", 4));
    
    cout <<"UNORDERED \n";
    for(auto &elm: N)
        cout<<elm.first <<"\t" << elm.second <<"\n";

    // SEARCH is the same for ordered and unordered.
    if(N.find("cat") != N.end())
        cout<<N.find("cat")->second; // better to access elements this way
    if(N.count("cat") > 0)
        cout<<N.find("cat")->second << "\n";
    
    // find max or min; does not work for unordered
    cout<<"Max key val pair is " << M.begin()->first << "\t" << M.begin()->second <<"\n";
    cout<<"Min key val pair is " << M.rbegin()->first << "\t" << M.rbegin()->second <<"\n";
    
    return 0;
}