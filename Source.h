#pragma once
#ifndef Source
#define Source
#include <iostream>

class Shape {
private:

public:
	void Scale(float Scale_Factor);
	void Show_Info();
	std::string Get_Name();
};

class Shape2D {
private:
	float area = 0;
public:
	float Get_Area();
	bool operator >(const Shape2D& other);
	bool operator <(const Shape2D& other);
	bool operator ==(const Shape2D& other);
	void Calculate_Area();
};

class Shape3D {
private:
	float volume = 0;
public:

};

class Square {
private:
	float side;
public:

};

class Triangle {
private:
	float base;
	float height;
public:

};

class Round {
private:
	float radius;
public:

};

class Triangle_Pyramid {
private:
	float height;
public:

};

class Cylindr {
private:
	float height;
public:

};

class Sphere {
private:
	float radius;
public:

};

#endif // !Source
