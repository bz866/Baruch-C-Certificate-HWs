#ifndef FuncObj_HPP
#define FuncObj_HPP

template <typename T>
class FuncObj {
private:
	T limit;

public:
	FuncObj(const T& limit);
	FuncObj(const FuncObj& source);
	~FuncObj();
	
	FuncObj<T>& operator = (const FuncObj& source);
	int operator () (const T& target) const;
};

#endif 