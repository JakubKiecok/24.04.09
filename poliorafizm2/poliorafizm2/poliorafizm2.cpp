#include <iostream>
using namespace std;

class Kształt {
public:
	virtual void oblicz() = 0;
};
class Trojkot :public Kształt {
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

void przeloczObiekt(Kształt& ob) {
	ob.oblicz();
}

int main()
{
	Trojkot tr;
	Prostokot pr;
	Kwadrat kw;
	Kolo kol;

	cout << "Teraz trojkot chlopie " << endl;
	przeloczObiekt(tr);
	cout << "Teraz prostokot chlopie " << endl;
	przeloczObiekt(pr);
	cout << "Teraz kwadrat chlopie " << endl;
	przeloczObiekt(kw);
	cout << "Teraz kolo chlopie " << endl;
	przeloczObiekt(kol);

	return EXIT_SUCCESS;
}