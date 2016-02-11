#include "Vector2.h"
#include <Math.h>

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}
Vector2 Vector2::Multiply(Vector2 vec) {
	return Vector2(this->x * vec.x, this->y * vec.x);
}
Vector2 Vector2::Divide(Vector2 vec) {
	return Vector2(this->x / vec.x, this->y / vec.x);
}
Vector2 Vector2::Subtract(Vector2 vec) {
	return Vector2(this->x - vec.x, this->y - vec.x);
}
Vector2 Vector2::Add(Vector2 vec) {
	return Vector2(this->x + vec.x, this->y + vec.x);
}
float Vector2::Magnitude() {
	return sqrtf(powf(this->x, 2) + powf(this->y, 2));
}
void Vector2::Normalize()
{
	this->x /= this->Magnitude();
	this->y /= this->Magnitude();
}
Vector2 Vector2::Normalized() {
	return Vector2(this->x / this->Magnitude(), this->y / this->Magnitude());
}