#ifndef Visitor_HPP
#define Visitor_HPP

#include "Point.hpp"
#include "Circle.hpp"
#include "Line.hpp"
#include <boost/variant/static_visitor.hpp>

class Visitor : public boost::static_visitor<void> {
private:
	// offsets
	int m_x;
	int m_y;
public:

	Visitor();
	Visitor(int x, int y);
	Visitor(const Visitor& source);
	virtual ~Visitor();

	void operator () (Point& p) const;
	void operator () (Line& l) const;
	void operator () (Circle& circle) const;
};

#endif