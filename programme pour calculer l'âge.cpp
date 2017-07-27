
#include <iostream>

using namespace std;

int main()

{

cout << "Nous sommes en 2017 quel age avez vous ?" << endl;
int agePresent(0);
cin >> agePresent;
cout << "En 2017 vous avez " << agePresent << " ans !" << endl;
cout << "Ecrivez une annee pour connaitre l age que vous aurez alors" << endl;
int anneeFutur(0), ageFutur(0);
cin >> anneeFutur;
ageFutur = agePresent + (anneeFutur-2017);
cout << ageFutur << endl;
cout << "En " << anneeFutur << " vous aurez " << ageFutur << endl;


return 0;
}
