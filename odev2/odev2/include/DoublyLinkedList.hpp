#ifndef DoublyLinkedList_HPP
#define DoublyLinkedList_HPP

#include "Iterator.hpp"
#include "Dugum.hpp"

class DoublyLinkedList{
	private:
		Dugum *basDugum; // icinde eleman olmayan sadece listenin basini tutan dugum.
		int size;
		
		Iterator OncekiniKonumuIleBul(int konum){
			if(konum < 0 || konum > Count());
			int index=0;
			Iterator iterator(basDugum);
			
			while(!iterator.canMove() && konum != index++) iterator.next();
			return iterator;
		}		
		/// Listenin ilk dugumunu dondurur
		Iterator FirstNode(){
			if(isEmpty());
			return Iterator(basDugum->ileri);
		}
	public:
		DoublyLinkedList();

		const string& atEleman(int konum);

		const int& atIndex(int konum);
	
		bool isEmpty() const;

		int Count() const;

		void add(const string& yeni,const int& inde);/// Listenin sonuna verilen elemani ekler

		void insert(int konum,const string& yeni,const int& inde);/// Listenin istenen konumuna verilen elemani ekler

		void remove(const string aranan);/// Verilen elemani listede bulur ve siler.

		void removeAt(int konum);

		bool find(const string& aranan) const;

		int indexOf(const string& aranan);
		
		friend ostream& operator<<(ostream& screen, DoublyLinkedList &right);
		
		void clear();/// Listedeki elemanlari temizler
	
		~DoublyLinkedList();
};
#endif