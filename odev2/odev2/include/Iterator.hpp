#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "Dugum.hpp"

class Iterator{
	public:
		Dugum *current; // Listede o anki bulunan konumu ifade eder.
		Iterator();
		Iterator(Dugum *dugum);
		bool canMove();
		void next();
		void prev();
		const string getCurrent()const;
};
#endif