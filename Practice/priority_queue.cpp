
// Use this if you want to keep inserting data in a queue and want to query the
// min or max element
// priority queue is a container that provides constant time lookup for largest
// or smallest element
// cost of insertion and extraction is logarithmic O(log n)
// O(1) lookup min or max

// Order: O(1), O(log n), O(n), O(n2) O(2^n)

#include <queue>
#include <vector>
#include <iostream>

using namespace std;

typedef std::priority_queue<int> Q_t;

template<typename T> void printQueue(T &q)
{
    while(!q.empty())
    {
        cout << q.top() << "\t";
        q.pop();
    }
    cout<<"\n";
}

int main()
{
    Q_t q;
    std::vector<int> tmp = {1,5,7,7,9,2,10};
    for(int elm: tmp)
        q.push(elm);
    printQueue(q);
    
    std::vector<float> tmp2 = {2.1,4.5,5.6,6.8,7.9,8.1};
    std::priority_queue<float, std::vector<float>, std::greater<float> > q2;
    for(float elm: tmp2)
        q2.push(elm);
    printQueue(q2);
}