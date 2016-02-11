#include "Vector3.h"
#include <Math.h>

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Vector3 Vector3::Multiply(Vector3 vec) {
	return Vector3(this->x * vec.x, this->y * vec.x, this->z * vec.z);
}
Vector3 Vector3::Divide(Vector3 vec) {
	return Vector3(this->x / vec.x, this->y / vec.x, this->z / vec.z);
}
Vector3 Vector3::Subtract(Vector3 vec) {
	return Vector3(this->x - vec.x, this->y - vec.x, this->z - vec.z);
}
Vector3 Vector3::Add(Vector3 vec) {
	return Vector3(this->x + vec.x, this->y + vec.x, this->z + vec.z);
}
float Vector3::Magnitude() {
	return sqrtf(powf(this->x, 2) + powf(this->y, 2) + powf(this->z,2));
}
void Vector3::Normalize()
{
	this->x /= this->Magnitude();
	this->y /= this->Magnitude();
	this->z /= this->Magnitude();
}
Vector3 Vector3::Normalized() {
	return Vector3(this->x / this->Magnitude(), this->y / this->Magnitude(), this->z / this->Magnitude());
}