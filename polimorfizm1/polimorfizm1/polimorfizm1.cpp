#include <iostream>
using namespace std;

class Kształt {
public:
	virtual void oblicz() = 0;
};
class Trojkot:public Kształt {
public:
	virtual void oblicz() {
		cout << "Obliczm trojkot" << endl;
	};
};
class Prostokot :public Kształt {
public:
	virtual void oblicz() {
		cout << "Obliczm prostokot" << endl;
	};
};
class Kwadrat :public Kształt {
public:
	virtual void oblicz() {
		cout << "Obliczm kwadrat" << endl;
	};
};
class Kolo :public Kształt {
public:
	virtual void oblicz() {
		cout << "Obliczm kolo" << endl;
	};
};

int main()
{
	Kształt* wsk;

	Trojkot tr;
	Prostokot pr;
	Kwadrat kw;
	Kolo kol;

	cout << "Teraz trojkot chlopie " << endl;
	wsk = &tr;
	wsk->oblicz();
	cout << "Teraz prostokot chlopie " << endl;
	wsk = &pr;
	wsk->oblicz();
	cout << "Teraz kwadrat chlopie " << endl;
	wsk = &kw;
	wsk->oblicz();
	cout << "Teraz kolo chlopie " << endl;
	wsk = &kol;
	wsk->oblicz();

	return EXIT_SUCCESS;
}