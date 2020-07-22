#ifndef ArrayExceptinon_HPP
#define ArrayExceptinon_HPP

using namespace std;

class ArrayException {
public:
	ArrayException(){};
	virtual ~ArrayException(){};

	virtual string GetMessage() const = 0;
};

#endif 