#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include <cmath>


class Vector {
	sf::Vertex start_p;
	sf::Vertex end_p;
	double angle;
	double length;
	int circle_radius = 5;
public:

	sf::CircleShape c_start;
	sf::CircleShape c_end;

	Vector(std::vector<double>, std::vector<double>, int);

	sf::Vertex getStartPoint();

	sf::Vertex getEndPoint();

	void setStartPoint(const double&, const double&);

	void setEndPoint(const double&, const double&);

	int getCircleRadius();

	void setCircleRadius(const int&);

};