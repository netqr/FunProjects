#include "pmFunc.h"
#include <math.h>

namespace pmFunc {
	float xVel(float vel, float angle){
		return vel * cos(angle);
	}

	float yVel(float vel, float angle){
		return vel * sin(angle);
	}

	float quadraticEquation(float a, float b, float c, bool sign) {
		switch sign {
			case 0:
				return (-b + sqrt(pow(b, 2), - 4 * a * c)) / (2 * a);
			case 1:
				return (-b - sqrt(pow(b, 2), - 4 * a * c)) / (2 * a);
		}
	}

	float calculateAirTime(float initialHeight, float finalHeight, float initialVelocity, float acceleration){
		float A = 0.5 * acceleration;
		float B = initialYVelocity;
		float C = initialHeight - finalHeight;
		float time = quadraticEquation(A, B, C, 1);

		return time;
	}
}
