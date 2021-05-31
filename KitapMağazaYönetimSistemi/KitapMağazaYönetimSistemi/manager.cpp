#include "manager.h"
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;




void nesneDoldur(vector<Kitap>& kitaplar)
{

	string isim;
	string miktar;
	string fiyat2;

	int mik;
	double fyt;

	int i;


	string alici;
	vector<string> tempBook;
	fstream dosya;
	dosya.open("Depo.txt");

	while (getline(dosya, alici)) {

		tempBook.push_back(alici);

	}




	for (i = 0; i < tempBook.size(); i++) {

		isim = tempBook[i];
		i++;

		miktar = tempBook[i];
		stringstream degistir(miktar);
		degistir >> mik;
		i++;


		fiyat2 = tempBook[i];
		fyt = stod(fiyat2);



		Kitap tempKitap(isim, mik, fyt);
		kitaplar.push_back(tempKitap);
	}


}

void Kaydet(vector<Kitap>& kitap) {
	fstream dosya("Depo.txt", ios::app | ios::in | ios::out);
	if (!dosya.is_open()) {

		cout << "opsss... birseyler eksik!!!" << endl;

	}
	else
	{
		for (auto icerik : kitap) {

			dosya << icerik.getIsim() << endl << icerik.getFiyat() << endl << icerik.getMiktar() << endl;
		}
	}

}

void manager::kitapEkle(Kitap kitap)
{
	magaza.clear();
	magaza.push_back(kitap);
	Kaydet(magaza);
	
}

void manager::kitapBul(string kitap)
{
	vector<Kitap> findHelper;

	nesneDoldur(findHelper);
    
	for (auto kitap2 : findHelper) {

		if (kitap  == kitap2.getIsim()) {

			cout << "kitabiniz bulundu" << endl << endl;
			cout << kitap2.getIsim() << kitap2.getFiyat() << kitap2.getMiktar()<< endl;
		}
		
	}



}

void manager::kitapSil(string kitap)
{
	long i = 0;
	vector<Kitap> deleteHelper;

	nesneDoldur(deleteHelper);

	for (i = 0; i < deleteHelper.size(); i++) {

		if (kitap == deleteHelper[i].getIsim()) {

			deleteHelper.erase(deleteHelper.begin() + (i));

			remove("Depo.txt");

			Kaydet(deleteHelper);

		}
	}

}

void manager::hepsiniGetir()
{
	vector<Kitap> kitapGetir;
	
	nesneDoldur(kitapGetir);

	for (auto kitap : kitapGetir) {
		cout << kitap.getIsim() << kitap.getFiyat() << kitap.getMiktar()<<endl;
	}

}