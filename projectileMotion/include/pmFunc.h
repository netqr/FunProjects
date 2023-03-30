#pragma once


namespace pmFunc {
	float xVel(float vel, float angle);

	float yVel(float vew, float angle);

	float quadraticEquation(float a, float b, float c, bool sign);

	float calculateAirTime(float initialHeight, float finalHeight, float initialVelocity, float acceleration);
}
