#pragma once
class Vector3
{
public:
	float x;
	float y;
	float z;
	Vector3(float x, float y, float z);

	Vector3 Multiply(Vector3 vec);
	Vector3 Add(Vector3 vec);
	Vector3 Subtract(Vector3 vec);
	Vector3 Divide(Vector3 vec);
	Vector3 Normalized();
	void Normalize();
	float Magnitude();
};