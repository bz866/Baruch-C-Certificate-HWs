#ifndef Array_HPP
#define Array_HPP

#include "Point.hpp"

using namespace std;

namespace BINQIANZENG {
	namespace Containers {
		class Array{
		private:
			int size;
			CAD::Point* m_data;

		public:
			Array();
			Array(const int theSize);
			Array(const Array& arrobj);
			~Array();

			Array& operator = (const Array& arr);
			CAD::Point& operator [](int idx); // index setter
			const CAD::Point& operator [](int idx) const; // index getter

			// Getters
			int Size() const;
			CAD::Point& GetElement(int idx) const;
			// Setters
			void SetElement(int idx, const CAD::Point& p); 

			friend ostream& operator << (ostream& os, const Array& arr);
		};
	}
}


#endif 