#include "Source.h"

void Shape::Scale(float Scale_Factor) {

}

void Shape::Show_Info() {
	std::cout << Get_Name() << "\n";
	//if (type == "Shape2d") std::cout << *this.Get_Area()
}

std::string Shape::Get_Name() {
	return name;
}

float Shape2D::Get_Area() {
	Calculate_Area();
	return area;
}

bool Shape2D::operator>(const Shape2D& other) {
	return this->area > other.area;
}

bool Shape2D::operator<(const Shape2D& other) {
	return this->area < other.area;
}

bool Shape2D::operator ==(const Shape2D& other) {
	return this->area == other.area;
}

void Shape2D::Calculate_Area() {
	
}

float Shape3D::Get_Volume() {
	Calculate_Volume();
	return volume;
}

bool Shape3D::operator>(const Shape3D& other) {
	return this->volume > other.volume;
}

bool Shape3D::operator<(const Shape3D& other) {
	return this->volume < other.volume;
}

bool Shape3D::operator ==(const Shape3D& other) {
	return this->volume == other.volume;
}

//void Shape3d::Calculate_Volume() {
//
//}