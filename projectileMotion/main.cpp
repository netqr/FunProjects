#include <iostream>

#include "include/pmFunc.h"


int main() {
	float initialHeight;
	float finalHeight;
	float angle;
	float velocity;

	std::cout << "Enter the initial height: ";
	std::cin >> initialHeight;
	std::cout << "\n";

	std::cout << "Enter the final height: ";
	std::cin >> finalHeight;
	std::cout << "\n";

	std::cout << "Enter the angle: ";
	std::cin >> angle;
	std::cout << "\n";

	std::cout << "Enter the velocity: ";
	std::cin >> velocity;
	std::cout << "\n\n";

	float yVelocity = pmFunc::yVel(velocity, angle);
	float xVelocity = pmFunc::xVel(velocity, angle);

	float time = pmFunc::calculateAirTime(initialHeight, finalHeight, yVelocity, -9.8);
	float xDistance = xVelocity * time;

	std::cout << "The time to fall is " << time << " seconds.\n";
	std::cout << "The distance travelled horizontally is " << xDistance << " meters,\n";

	return 0;
}
