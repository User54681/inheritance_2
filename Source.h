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
	virtual std::string Get_Name();
};

class Shape2D : public Shape {
protected:
	float area = 0;
	virtual void Calculate_Area();
public:
	Shape2D() {
		type = "Shape2d";
	}
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
	Shape3D() {
		type = "Shape3d";
	}
	float Get_Volume();
	bool operator >(const Shape3D& other);
	bool operator <(const Shape3D& other);
	bool operator ==(const Shape3D& other);	
};

class Square : public Shape2D {
private:
	float side;
public:
	Square(float side){
		name = "Square";
	};
	Square() {
		name = "Square";
		side = 5;
	}
	void Calculate_Area() {
		area = side * side;
	}
};

class Triangle : public Shape2D {
private:
	float base;
	float height;
public:
	Triangle(float base, float height) {
		name = "Triangle";
	}
	Triangle() {
		name = "Triangle";
		base = 3;
		height = 6;
	}
	void Calculate_Area() {
		area = 0.5 * base * height;
	}
};

class Round : public Shape2D {
private:
	float radius;
public:
	Round(float radius) {
		name = "Round";
	}
	Round() {
		name = "Round";
		radius = 3;
	}
	void Calculate_Area() {
		area = 3.14 * radius * radius;
	}
};

class Triangle_Pyramid : public Shape3D {
private:
	float height;
	Triangle triangle;
public:
	Triangle_Pyramid(Triangle triangle, float height) {
		name = "Triangle Pyramid";
		this->triangle = triangle;
		this->height = height;
	}
	void Calculate_Volume() {
		volume = (1.0 / 3.0) * triangle.Get_Area() * height;
	}
};

class Cylindr : public Shape3D {
private:
	float height;
	Round round;
public:
	Cylindr(Round round, float height) {
		name = "Cylindr";
		this->round = round;
		this->height = height;
	}
	void Calculate_Volume() {
		volume = round.Get_Area() * height;
	}
};

class Sphere : public Shape3D {
private:
	float radius;
public:
	Sphere(float radius) {
		name = "Sphere";
		this->radius = radius;
	}
	void Calculate_Volume() {
		volume = 4 / 3 * 3.14 * radius * radius * radius;
	}
};

#endif // !Source