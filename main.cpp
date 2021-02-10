#include <Personnage.h>
#include <cstdlib>

using namespace std;

int main()
{
    Personnage p1("Bertrand");
    Personnage p2("Georges");
    Personnage p3("Alain");
    p1.showInfos();
    p2.showInfos();
    p3.showInfos();

    Arme a1(10,"epee commune" ,1 ,7.8);
    Arme a2(25,"epee rare" ,2 ,28.1);

    p1.setArme(&a1);
    p2.setArme(&a2);
    p1.getArme()->setDegats(15);
    p2.getArme()->setDegats(30);
    a1.showInfos();
    a2.showInfos();

    cout << "Degats de l'arme = "<<a1.getDegats()<<endl;
    cout << "Degats de l'arme depuis P1 = "<<p1.getArme()->getDegats()<<endl;
    cout << "Degats de l'arme depuis P2 = "<<p2.getArme()->getDegats()<<endl;
    cout << endl;
    //p1.Clear();
    //p2.Clear();





    return 0;
}
