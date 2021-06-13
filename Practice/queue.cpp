#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<int> q)
{
    while(!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }
}

int main()
{
    // test queue
    std::queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    
    printQueue(q);

    return 0;
}
