#include <iostream>
// The following library needs to be included to use std::sort()
#include <algorithm>
#include <functional>
using namespace std;
// Custom comparator to sort in descending order
bool comparator(string &a, string &b){
  return a > b;
}
int main() {
  string coffee[] = {"latte", "cappuccino", "americano", "espresso"}; 
  int size = 4;
//   std::sort(coffee, coffee + size, less<>()); // Ascending
  std::sort(coffee, coffee + size, greater<>()); // Descending
//   std::sort(coffee, coffee + size, comparator); // Custom
  for (int i = 0; i < 4; i++){
    cout<<coffee[i]<<endl;
  }
  return 0;
}