
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
cout << "En " << anneeFutur << " vous aurez " << ageFutur << " ans" << endl; // Je pense que le programme est bien
cout << ageFutur - agePresent << endl;

return 0;
}
