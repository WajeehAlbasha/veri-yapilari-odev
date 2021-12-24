#ifndef DUGUM_HPP
#define DUGUM_HPP

#include <iostream>
using namespace std;

class Dugum{
	public:	
		string eleman;
		int inde;
		Dugum *ileri;
		Dugum *geri;
		Dugum(const string& eleman,const int& inde,Dugum *ilr,Dugum *gr);
};
#endif