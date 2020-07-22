#include "Visitor.hpp"

Visitor::Visitor() : boost::static_visitor<void>(), m_x(0), m_y(0) {}

Visitor::Visitor(int x, int y) : boost::static_visitor<void>(), m_x(x), m_y(y) {}

Visitor::Visitor(const Visitor& source) : boost::static_visitor<void>(source) {
	if (this != &source) {
		m_x = source.m_x;
		m_y = source.m_y;
	}
}

Visitor::~Visitor() {};

void Visitor::operator () (Point& p) const {
	p.X(p.X() + m_x);
	p.Y(p.Y() + m_y);
}

void Visitor::operator () (Line& l) const {
	Point p1 = l.start();
	Point p2 = l.end();

	p1.X(p1.X() + m_x);
	p1.Y(p1.Y() + m_y);
	p2.X(p2.X() + m_x);
	p2.Y(p2.Y() + m_y);

	l.start(p1);
	l.end(p2);
}

void Visitor::operator () (Circle& circle) const {
	Point c = circle.C();
	c.X(c.X() + m_x);
	c.Y(c.Y() + m_y);
	circle.C(c);
}

