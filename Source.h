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

class Shape2D : public Shape {
private:
	float area = 0;
public:
	float Get_Area();
	bool operator >(const Shape2D& other);
	bool operator <(const Shape2D& other);
	bool operator ==(const Shape2D& other);
	void Calculate_Area();
};

class Shape3D : public Shape {
private:
	float volume = 0;
public:
	void Get_Volume();
	bool operator >(const Shape2D& other);
	bool operator <(const Shape2D& other);
	bool operator ==(const Shape2D& other);
	void Calculate_Volume();
};

class Square : public Shape2D {
private:
	float side;
public:

};

class Triangle : public Shape2D {
private:
	float base;
	float height;
public:

};

class Round : public Shape2D {
private:
	float radius;
public:

};

class Triangle_Pyramid : public Shape3D {
private:
	float height;
public:

};

class Cylindr : public Shape3D {
private:
	float height;
public:

};

class Sphere : public Shape3D {
private:
	float radius;
public:

};


#endif // !Source