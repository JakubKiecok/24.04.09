#include <iostream>
using namespace std;

class Postac{
public:
	virtual void prezentacjaPostaci() = 0;
	virtual void krainaPostaci() = 0;
};
class Lucznik:public Postac{
public:
	virtual void prezentacjaPostaci() {
		cout << "Prezentacja Lucznika" << endl;
	};
	virtual void krainaPostaci() {
		cout << "Kraina Lucznika" << endl;
	};
};
class Palladyn :public Postac {
public:
	virtual void prezentacjaPostaci() {
		cout << "Prezentacja Palladyna" << endl;
	};
	virtual void krainaPostaci() {
		cout << "Kraina Palladyna" << endl;
	};
};
class Droid :public Postac {
public:
	virtual void prezentacjaPostaci() {
		cout << "Prezentacja Droida" << endl;
	};
	virtual void krainaPostaci() {
		cout << "Kraina Droida" << endl;
	};
};
class Kosmita :public Postac {
public:
	virtual void prezentacjaPostaci() {
		cout << "Prezentacja Kosmity" << endl;
	};
	virtual void krainaPostaci() {
		cout << "Kraina Kosmity" << endl;
	};
};

void przeloczPostac(Postac& p) {
	p.prezentacjaPostaci();
	p.krainaPostaci();
}

int main()
{
	Lucznik L;
	Palladyn P;
	Droid D;
	Kosmita K;

	cout << "Tera Lucznik many" << endl;
	przeloczPostac(L);
	cout << "Tera Palladyn many" << endl;
	przeloczPostac(P);
	cout << "Tera Droid many" << endl;
	przeloczPostac(D);
	cout << "Tera Kosmita many" << endl;
	przeloczPostac(K);

	return EXIT_SUCCESS;
}