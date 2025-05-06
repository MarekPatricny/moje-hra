#include <iostream>
using namespace std;

int main(){
//------------POSTAVA----------
cout << "Vitejte v textove hre!" << endl;
int clas, menu, rozhodnuti;
int postavaVybrana = 0;

// Statistiky hráče
    int zivot = 0;
    int maxzivot = 0;
    int mana = 0;
    int maxmana = 0;
    int utok = 0;

while (postavaVybrana == 0){
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
    zivot = 7;
    maxzivot = 10;
    mana = 8;
    maxmana = 10;
    utok = 3;
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";
        postavaVybrana = 1;



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
    zivot = 6;
    maxzivot = 10;
    mana = 7;
    maxmana = 10;
    utok = 2;
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";
        postavaVybrana = 1;



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
    zivot = 8;
    maxzivot = 10;
    mana = 5;
    maxmana = 10;
    utok = 5;
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";
        postavaVybrana = 1;



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
    zivot = 10;
    maxzivot = 10;
    mana = 5;
    maxmana = 10;
    utok = 7;
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";
        postavaVybrana = 1;



    }else if (rozhodnuti == 11){
        cout << "Jdes zpet do menu.";
    }
    break;

    default:
    cout << "Vyberte z moznosti 1, 2, 3, 4.";
}



}


//------------VESNICE--------------

 int volbaVesnice;
 int penize = 20;
    cout << "\nDorazil jsi do vesnice - misto odpocinku a vylepseni." << endl;

    while (true) {
        cout << "\n--- VESNICE ---" << endl;
        cout << "Mas " << penize << " zlatych." << endl;
        cout << "Zivoty: " << zivot << "/" << maxzivot
             << ", Mana: " << mana << "/" << maxmana
             << ", Utok: " << utok << endl;

        cout << "Co chces delat?" << endl;
        cout << "1 - Doplneni zivotu (2 zl/1 zivot)" << endl;
        cout << "2 - Vylepsit maximalni zivoty (+1 za 10 zl)" << endl;
        cout << "3 - Vylepsit maximalni manu (+1 za 8 zl)" << endl;
        cout << "4 - Vylepsit utok (+1 za 12 zl)" << endl;
        cout << "5 - Opustit vesnici" << endl;
        cin >> volbaVesnice;

        switch (volbaVesnice) {
            case 1:
                if (zivot < maxzivot) {
                    int chybi = maxzivot - zivot;
                    int maxObnovitelne = penize / 2;
                    int obnovene = (chybi < maxObnovitelne) ? chybi : maxObnovitelne;
                    zivot += obnovene;
                    penize -= obnovene * 2;
                    cout << "Doplnil jsi " << obnovene << " zivotu." << endl;
                } else {
                    cout << "Mas plne zivoty!" << endl;
                }
                break;

            case 2:
                if (penize >= 10) {
                    maxzivot += 1;
                    penize -= 10;
                    cout << "Maximalni zivoty zvyseny na " << maxzivot << "." << endl;
                } else {
                    cout << "Nemas dost zlatych!" << endl;
                }
                break;

            case 3:
                if (penize >= 8) {
                    maxmana += 1;
                    penize -= 8;
                    cout << "Maximalni mana zvysena na " << maxmana << "." << endl;
                } else {
                    cout << "Nemas dost zlatych!" << endl;
                }
                break;

            case 4:
                if (penize >= 12) {
                    utok += 1;
                    penize -= 12;
                    cout << "Tvuj utok je nyni " << utok << "." << endl;
                } else {
                    cout << "Nemas dost zlatych!" << endl;
                }
                break;

            case 5:
                cout << "Opoustis vesnici a vydavas se na dalsi dobrodruzstvi..." << endl;
                break;

            default:
                cout << "Neplatna volba." << endl;
        }

        if (volbaVesnice == 5) {
            break;
        }
    }


}



