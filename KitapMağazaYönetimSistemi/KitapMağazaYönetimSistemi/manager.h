#include <iostream>
#include "Kitap.h"
#include <vector>

using namespace std;

class manager
{
public:
	vector<Kitap> magaza;
	
	void kitapEkle(Kitap kitap);
	
	void kitapBul(string kitap);
	
	void kitapSil(string kitap);
	
	void hepsiniGetir();
};

