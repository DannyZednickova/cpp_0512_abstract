#include <iostream>
#include <Vector.h>
#include <Point.h>

using namespace std;

int main() {

auto ev = Point(2,3);
ev = ev.add(Point(1,3));
auto subev = ev.subs(Point(1,3));

cout << ev << endl;
cout << subev << endl;

Point p1 = Point(1,2);
Point p2 = Point(3,4);

float dist = p1.distancePoint(p2);
cout << dist<< endl;


Point point2 = Point(2, 10);
Vector v1 = Vector(10,11);
cout << point2.add(Vector(10, 0)) << std::endl;


}
