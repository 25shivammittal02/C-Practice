//Heaps->
// range heap example
#include <iostream>     // std::cout
#include <algorithm>    // std::make_heap, std::pop_heap, std::push_heap, std::sort_heap
#include <vector>       // std::vector

int main () {
  int myints[] = {10,20,30,5,15};
  std::vector<int> v(myints,myints+5);

  std::make_heap (v.begin(),v.end()); //Heapify function
  std::cout << "initial max heap   : " << v.front() << '\n';

  std::pop_heap (v.begin(),v.end()); //moves the top element to last
  v.pop_back(); //pop the last element
  std::cout << "max heap after pop : " << v.front() << '\n';

  v.push_back(99); //push element to last
  std::push_heap (v.begin(),v.end()); //heapify the pushed element
  std::cout << "max heap after push: " << v.front() << '\n';

  std::sort_heap (v.begin(),v.end()); //heap sort

  std::cout << "final sorted range :";
  for (unsigned i=0; i<v.size(); i++)
    std::cout << ' ' << v[i];

  std::cout << '\n';

  return 0;
}

