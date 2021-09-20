#include <gtest/gtest.h>
#include "pch.h"
#include <math.h>
# define M_PI          3.141592653589793238462643383279502884L /* pi */


class Circle {
private:
	double radius;
public:
	void set_radius(double);
	double area();
	double perimeter();
};

void Circle::set_radius(double r) {
	radius = r;
}
double Circle::area() {
	return M_PI * radius * radius;
}
double Circle::perimeter() {
	return 2 * M_PI * radius;
}



TEST(Area, AreaIsCorrect)
{
	Circle circ;
	circ.set_radius(3);
	
	EXPECT_DOUBLE_EQ(circ.area(), 3 * 3 * M_PI);
	

}

int main(int ac, char* av[])
{
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}