#include <iostream>
using namespace std;

int main(){
//------------POSTAVA----------
cout << "Vitejte v textove hre!" << endl;
int clas, menu, rozhodnuti;
cout << "Aby jste zacali hru, vyberte si postavu :" << endl;
cout << "Paladin (1)\n";
cout << "Mag (2)\n";
cout << "Lovec (3)\n";
cout << "Warlock (4)\n";
cin >> menu;

switch (menu){
    case 1:
    cout << "Vyborne! Jste Paladin, statistiky: " << endl;
    cout << "Zivot - 7/10" << endl;
    cout << "Utok - 3" << endl;
    cout << "Mana  - 8/10" << endl;
    cout << "Vzdalenost utoku - 3" << endl;
    cout << "Schopnosti:" << endl;
    cout << "Uder za 3 poskozeni" << endl;
    cout << "Uder svetlem - 1 poskozeni vsem nepratelum (stoji 3 many)" << endl;
    cout << "Oziveni - hrac si prida 1 zivot (nesmi prekrocit max. zivot)(stoji 2 many)" << endl;
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";



    }else if (rozhodnuti == 11){
        cout << "Jdes zpet do menu.";
    }
    break;

    case 2:
    cout << "Skvele! Jste Mag, statistiky: " << endl;
    cout << "Zivot - 6/10" << endl;
    cout << "Utok - 2" << endl;
    cout << "Mana  - 7/10" << endl;
    cout << "Vzdalenost utoku - 4" << endl;
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";



    }else if (rozhodnuti == 11){
        cout << "Jdes zpet do menu.";
    }
    break;

    case 3:
    cout << "Vytecne! Jste Lovec, statistiky: " << endl;
    cout << "Zivot - 8/10" << endl;
    cout << "Utok - 5" << endl;
    cout << "Mana  - 5/10" << endl;
    cout << "Vzdalenost utoku - 5" << endl;
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";



    }else if (rozhodnuti == 11){
        cout << "Jdes zpet do menu.";
    }
    break;

    case 4:
    cout << "Vynikajici! Jste Warlock, statistiky: " << endl;
    cout << "Zivot - 10/10" << endl;
    cout << "Utok - 7" << endl;
    cout << "Mana  - 5/10" << endl;
    cout << "Vzdalenost utoku - 1" << endl;
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";



    }else if (rozhodnuti == 11){
        cout << "Jdes zpet do menu.";
    }
    break;

    default:
    cout << "Vyberte z moznosti 1, 2, 3, 4.";
}


//maxzivot, zivot, penize, maxmana, mana;

}



