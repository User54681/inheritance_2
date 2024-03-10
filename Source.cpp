#include "Source.h"

Shape2D::Shape2D() {
	type = "Shape2d";
}

Shape3D::Shape3D() {
	type = "Shape3d";
}

Square::Square(float side) {
	name = "Square";
	this->side = side;
};
Square::Square() {
	name = "Square";
	side = 5;
}

Triangle::Triangle(float base, float height) {
	name = "Triangle";
	this->base = base;
	this->height = height;
}
Triangle::Triangle() {
	name = "Triangle";
	base = 3;
	height = 6;
}

Round::Round(float radius) {
	name = "Round";
	this->radius = radius;
}
Round::Round() {
	name = "Round";
	radius = 3;
}

Triangle_Pyramid::Triangle_Pyramid(Triangle triangle, float height) {
	name = "Triangle Pyramid";
	this->triangle = triangle;
	this->height = height;
}
Triangle_Pyramid::Triangle_Pyramid() {
	name = "Triangle Pyramid";
	height = 2;
}

Cylindr::Cylindr(Round round, float height) {
	name = "Cylindr";
	this->round = round;
	this->height = height;
}
Cylindr::Cylindr() {
	name = "Cylindr";
	height = 3;
}

Sphere::Sphere(float radius) {
	name = "Sphere";
	this->radius = radius;
}
Sphere::Sphere() {
	name = "Sphere";
	radius = 2;
}

void Shape::Scale(float Scale_Factor) {

}

void Shape::Info() {
	std::cout << "The figure is a " << Get_Name() << "\n";
	if (type == "Shape2d") std::cout << "Area: " << static_cast<Shape2D*>(this)->Get_Area() << "\n";
	else if (type == "Shape3d") std::cout << "Volume: " << static_cast<Shape3D*>(this)->Get_Volume() << "\n";
}

std::string Shape::Get_Name() {
	return name;
}

float Shape2D::Get_Area() {
	Calculate_Area();
	return area;
}

float Shape3D::Get_Volume() {
	Calculate_Volume();
	return volume;
}

void Shape::Show_Info(){
	Info();
}

void Square::Show_Info() {
	Info();
	std::cout << "The side of square is " << side << "\n";
}

void Triangle::Show_Info() {
	Info();
	std::cout << "The base of the triangle is " << base << " and its height is " << height << "n";
}

void Round::Show_Info() {
	Info();
	std::cout << "The radius of the round is " << radius << "\n";
}

void Triangle_Pyramid::Show_Info() {
	Info();
	std::cout << "The area of the triangle at the base is " << triangle.Get_Area() << " and the height of the pyramid is " << height << "\n";
}

void Cylindr::Show_Info() {
	Info();
	std::cout << "The area of the circle at the base is equal to " << round.Get_Area() << " and the height of the cylindr " << height << "\n";
}

void Sphere::Show_Info() {
	Info();
	std::cout << "The radius of the sphere is " << radius << "\n";
}

bool Shape2D::operator>(const Shape2D& other) {
	if (this->area > other.area) std::cout << "the expression is true" << "\n";
	else std::cout << "the expression is false" << "\n";
	return this->area > other.area;
}

bool Shape2D::operator<(const Shape2D& other) {
	if (this->area < other.area) std::cout << "the expression is true" << "\n";
	else std::cout << "the expression is false" << "\n";
	return this->area < other.area;
}

bool Shape2D::operator ==(const Shape2D& other) {
	if (this->area == other.area) std::cout << "the expression is true" << "\n";
	else std::cout << "the expression is false" << "\n";
	return this->area == other.area;
}

bool Shape3D::operator>(const Shape3D& other) {
	if (this->volume > other.volume) std::cout << "the expression is true" << "\n";
	else std::cout << "the expression is false" << "\n";
	return this->volume > other.volume;
}

bool Shape3D::operator<(const Shape3D& other) {
	if (this->volume < other.volume) std::cout << "the expression is true" << "\n";
	else std::cout << "the expression is false" << "\n";
	return this->volume < other.volume;
}

bool Shape3D::operator ==(const Shape3D& other) {
	if (this->volume == other.volume) std::cout << "the expression is true" << "\n";
	else std::cout << "the expression is false" << "\n";
	return this->volume == other.volume;
}

void Shape2D::Calculate_Area() {

}

void Shape3D::Calculate_Volume() {

}

void Square::Calculate_Area() {
	area = side * side;
}

void Triangle::Calculate_Area() {
	area = 0.5 * base * height;
}

void Round::Calculate_Area() {
	area = 3.14 * radius * radius;
}

void Triangle_Pyramid::Calculate_Volume() {
	volume = (1.0 / 3.0) * triangle.Get_Area() * height;
}

void Cylindr::Calculate_Volume() {
	volume = round.Get_Area() * height;
}

void Sphere::Calculate_Volume() {
	volume = 4 / 3 * 3.14 * radius * radius * radius;
}