// Marco that returns max of two values
#ifndef MAX2 
#define MAX2(x, y)	(x > y ? x : y)
#endif 

// Marco that returns max of three values, uses MAX2 macro
#ifndef MAX3 
#define MAX3(x, y, z) (MAX2(MAX2(x,y), z))
#endif 