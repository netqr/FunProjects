#pragma once

const int PI;

namespace pmFunc {
	float xVel(float vel, float angle);

	float yVel(float vel, float angle);

	float quadraticEquation(float a, float b, float c, bool sign);

	float calculateAirTime(float initialHeight, float finalHeight, float initialYVelocity, float acceleration);
}
