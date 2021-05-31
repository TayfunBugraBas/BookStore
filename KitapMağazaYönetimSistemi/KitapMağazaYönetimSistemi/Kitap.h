#pragma once
#include <iostream>

using namespace std;

class Kitap
{
private:
	string Isim;
	int miktar;
	double fiyat;
public:

	Kitap(string, int, double);
	Kitap(string);
	
	void setIsim(string);
	string getIsim();

	void setMiktar(int);
	int  getMiktar();

	void setFiyat(double);
	double getFiyat();


};

