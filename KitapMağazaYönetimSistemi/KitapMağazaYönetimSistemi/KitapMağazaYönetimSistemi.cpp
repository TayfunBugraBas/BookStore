#include <iostream>
#include <Windows.h>
#include <string>
#include "Kitap.h"
#include "manager.h"

using namespace std;


void menu() {
	manager yonetici;
	char x;

	int secim;
	string isim;
	int miktar=0;
	double fiyat=0;

	cout << "Kitap Yonetim sistemine giris yapiliyor lutfen bekleyiniz..." << endl;
	Sleep(1000);
	system("cls");


	cout << "Lutfen secim yapiniz\n\n" << "1)Kitap Kaydetme\t\t" << "2)Listeleme\n\n" << "3)Kitap Bulma\t\t\t" << "4)Kitap Silme" << endl<<endl<<"5)cikis";
	cin >> secim;

	switch (secim) {

	case 1:
	  {
		system("cls");
		cout << "Kitap adi, fiyati ve miktarini giriniz" << endl;
		system("cls");
		cout << "isim" << endl;
		getline(cin >> ws, isim);
		cout << "fiyat" << endl;
		cin >> fiyat;
		cout << "miktar" << endl;
		cin >> miktar;
		Kitap kitap(isim, miktar, fiyat);

		yonetici.kitapEkle(kitap);
		cout << "eklendi" << endl;

		Sleep(1000);
		system("cls");

		menu();

		break;
	  }
	case 2:
	  {
		
		system("cls");
		yonetici.hepsiniGetir();
		cout << "cikmak icin bir harf giriniz" << endl;
		cin >> x;
		system("cls");
		menu();
		break;


	  }
	case 3:
	  {
		system("cls");
		cout << "kitap ismiyle kitap bulmaya hoşgeldiniz" << endl << "lutfen istediginiz kitabin ismini girin" << endl;
		getline(cin >> ws, isim);

		yonetici.kitapBul(isim);
		cout << "cikmak icin bir harf giriniz" << endl;
		cin >> x;
		menu();


	  }
	case 4: 
	   {
		system("cls");
		cout << "kitap ismiyle kitap silmeye hoşgeldiniz" << endl << "lutfen istediginiz kitabin ismini girin" << endl;
		getline(cin >> ws, isim);

		yonetici.kitapSil(isim);
		menu();

	   }

	case 5: {
		break;
	    }
	default: {
		cout << "yanlis giris yaptiniz sistem yenilenecek" << endl;
		menu();
	  }
	}
	
	
	
	

}











int main()
{
	
	menu();
	
}



