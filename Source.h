#pragma once
#ifndef Source
#define Source
#include <iostream>

class Shape {
protected:
	std::string name;
	std::string type;
public:
	virtual void Scale(float Scale_Factor);
	virtual void Show_Info();
	void Info();
	virtual std::string Get_Name();
};

class Shape2D : public Shape {
protected:
	float area = 0;
	virtual void Calculate_Area();
public:
	Shape2D();
	float Get_Area();
	bool operator >(const Shape2D& other);
	bool operator <(const Shape2D& other);
	bool operator ==(const Shape2D& other);
};

class Shape3D : public Shape {
protected:
	float volume = 0;
	virtual void Calculate_Volume();
public:
	Shape3D();
	float Get_Volume();
	bool operator >(const Shape3D& other);
	bool operator <(const Shape3D& other);
	bool operator ==(const Shape3D& other);	
};

class Square : public Shape2D {
private:
	float side;
public:
	Square(float side);
	Square();
	void Show_Info();
	void Calculate_Area();
};

class Triangle : public Shape2D {
private:
	float base;
	float height;
public:
	Triangle(float base, float height);
	Triangle();
	void Show_Info();
	void Calculate_Area();
};

class Round : public Shape2D {
private:
	float radius;
public:
	Round(float radius);
	Round();
	void Show_Info();
	void Calculate_Area();
};

class Triangle_Pyramid : public Shape3D {
private:
	float height;
	Triangle triangle;
public:
	Triangle_Pyramid(Triangle triangle, float height);
	Triangle_Pyramid();
	void Show_Info();
	void Calculate_Volume();
};

class Cylindr : public Shape3D {
private:
	float height;
	Round round;
public:
	Cylindr(Round round, float height);
	Cylindr();
	void Show_Info();
	void Calculate_Volume();
};

class Sphere : public Shape3D {
private:
	float radius;
public:
	Sphere(float radius);
	Sphere();
	void Show_Info();
	void Calculate_Volume();
};

#endif // !Source