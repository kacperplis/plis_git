//Programowanie obiektowe i inżyniera oprogramowania 
//Kacper Pliś – 411619
//Jakub Popielecki – 410321
//Grupa projektowa nr 3

#include <iostream>

using namespace std;
//obsługa wypożyczalni samochodów

class Uzytkownicy{


};

class Administrator : public Uzytkownik{
	
};

class Wypozyczajacy : public Uzytkownik{
	
};

class Samochod{
	
};

class BazaDanych{
	
	void zaloguj{} //dostęp Admin i Wypozyczajacy
	
	void dodaj_Uzytkownika{} //dostęp Admin
	
	void usun_Uzytkownika{} //dostęp Admin
	
	void dodaj_Samochod{} //dostęp Admin

	void edytuj_Samochod{} //dostęp Admin

	void wypozycz_Samochod{} //dostęp Wypozyczajacy

	void wyswietl_liste_Samochodow{} //dostęp Admin i Wypozyczajacy
	
	void wyswietl_wypozyczone_Samochody{} //dostęp Admin (dla wszystkich Wypozyczajacy) i Wypozyczajacy
	
	void wyswietl_liste_Uzytkownikow{} //dostęp Admin
	
	void Menu_Wypozyczajacego{} //dostęp Wypozyczajacy
	
	void Menu_Administratora{} //dostęp Admin
	
};

int main()
{
	return 0;
}