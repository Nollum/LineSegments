
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <vector>
#include "Vector.h"
#include <iostream>

Vector::Vector(std::vector<double> starting_point, std::vector<double> ending_point, int circle_radius) {
	start_p = { sf::Vector2f(starting_point[0], starting_point[1]) };
	end_p = { sf::Vector2f(ending_point[0], ending_point[1]) };
	c_start.setRadius(circle_radius);
	c_start.setFillColor(sf::Color::White);
	c_start.setOrigin(circle_radius, circle_radius);
	c_start.setPosition(start_p.position.x, start_p.position.y);
	c_end.setRadius(circle_radius);
	c_end.setFillColor(sf::Color::White);
	c_end.setOrigin(circle_radius, circle_radius);
	c_end.setPosition(end_p.position.x, end_p.position.y);
}

sf::Vertex Vector::getStartPoint() {
	return start_p;
}

sf::Vertex Vector::getEndPoint() {
	return end_p;
}

void Vector::setStartPoint(const double &x, const double &y) {
	start_p.position.x = x;
	start_p.position.y = y;
	c_start.setPosition(start_p.position.x, start_p.position.y);
}

void Vector::setEndPoint(const double &x, const double &y) {
	end_p.position.x = x;
	end_p.position.y = y;
	c_end.setPosition(end_p.position.x, end_p.position.y);
}

int Vector::getCircleRadius() {
	return circle_radius;
}

void Vector::setCircleRadius(const int& radius) {
	circle_radius = radius;
	c_start.setRadius(circle_radius);
	c_start.setFillColor(sf::Color::White);
	c_start.setOrigin(circle_radius, circle_radius);
	c_start.setPosition(start_p.position.x, start_p.position.y);
	c_end.setRadius(circle_radius);
	c_end.setFillColor(sf::Color::White);
	c_end.setOrigin(circle_radius, circle_radius);
	c_end.setPosition(end_p.position.x, end_p.position.y);
}