#include "Kitap.h"

Kitap::Kitap(string isim, int adet, double ücret)
{
	Isim = isim;
	miktar = adet;
	fiyat = ücret;
}
Kitap::Kitap(string isim)
{
	Isim = isim;
	
}

void Kitap::setIsim(string _Isim)
{
	Isim = _Isim;
}

string Kitap::getIsim()
{
	return Isim;
}

void Kitap::setMiktar(int _Miktar)
{
	miktar = _Miktar;
}

int Kitap::getMiktar()
{
	return miktar;
}

void Kitap::setFiyat(double _Fiyat)
{
	fiyat = _Fiyat;
}

double Kitap::getFiyat()
{
	return fiyat;
}
