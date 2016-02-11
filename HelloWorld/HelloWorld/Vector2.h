#pragma once
#include <math.h>

class Vector2
{
public:
	float x;
	float y;
	Vector2(float x, float y);

	Vector2 Multiply(Vector2 vec);
	Vector2 Add(Vector2 vec);
	Vector2 Subtract(Vector2 vec);
	Vector2 Divide(Vector2 vec);
	Vector2 Normalized();
	void Normalize();
	float Magnitude();
};