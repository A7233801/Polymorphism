#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
#include <iostream>
#include<iomanip>
using namespace std;


// A function for displaying a geometric object
void display(const GeometricObject& g)
{
	cout << " ,area: " << g.getArea()
		 << ",volume: " << g.getVolume()
		 <<",color:"<<g.getColor()<< endl;
}

int main()
{
	int a, b;
	string c1, c2;
	cin >> a >> c1 >> b >> c2;


	Ball ball(a);
	ball.setColor(c1);
	ball.setFilled(false);
	cout << ball.toString() << endl
		<< "radius: " << fixed << setprecision(1) << ball.getRadius() ;
	display(ball);

	Cube cube(b);
	cube.setColor(c2);
	cube.setFilled(true);
	cout << cube.toString() << endl
		<< "length: " << fixed << setprecision(1) << cube.getLength() ;
	display(cube);

	system("pause");
	return 0;

}