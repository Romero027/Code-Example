// C++ program to us priority_queue to implement Min Heap
// for user defined class
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
  
using my_pair_t = std::pair<int,double>;
 
using my_container_t = std::vector<my_pair_t>;

// User defined class, Point
class Point
{
   int x;
   int y;
public:
   Point(int _x, int _y)
   {
      x = _x;
      y = _y;
   }
   int getX() const { return x; }
   int getY() const { return y; }
};
 
// To compare two points
class myComparator
{
public:
    int operator() (const std::pair<int,double>& p1, const std::pair<int,double>& p2)
    {
        return p1.second > p2.second;
    }};
 
// Driver code
int main ()
{
    // Creates a Min heap of points (order by x coordinate)
      std::priority_queue<my_pair_t,
                        my_container_t,
                        myComparator> pq;
 	int i;
    // Insert points into the min heap
    pq.push(std::make_pair(5, 0.1));
    pq.push(std::make_pair(0, 0.3));
    pq.push(std::make_pair(1, 0.9));
    pq.push(std::make_pair(5, 0.6));
	pq.push(std::make_pair(5, 0.4));
	pq.push(std::make_pair(5, 0.32));
    pq.push(std::make_pair(5, 0.42));
    pq.push(std::make_pair(5, 0.1234));
    pq.push(std::make_pair(5, 0.12324));
           pq.push(std::make_pair(5, 0.1343));
           
 
    // One by one extract items from min heap
    while (pq.empty() == false)
    {
        my_pair_t p = pq.top();
        cout << "(" << p.first << ", " << p.second << ")";
        cout << endl;
        pq.pop();
    }
 
    return 0;
}
