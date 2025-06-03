#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

// ----------------------- FUNKCE ------------------------
void soubojJednoho(int &zivot, int maxzivot, int &mana, int maxmana, int utok, int &penize, int nepritelZivot, int nepritelUtok) {
    while (zivot > 0 && nepritelZivot > 0) {
        int akce;
        cout << "\nZivoty: " << zivot << "/" << maxzivot << ", Mana: " << mana << "/" << maxmana << endl;
        cout << "Nepritel ma " << nepritelZivot << " zivotu.\n";
        cout << "Zvol akci: 1 - Utok, 2 - Leceni (stoji 3 many, +3 zivoty): ";
        cin >> akce;

        if (akce == 1) {
            cout << "Zautocil jsi za " << utok << " utoku!" << endl;
            nepritelZivot -= utok;
        } else if (akce == 2 && mana >= 3) {
            mana -= 3;
            zivot += 3;
            if (zivot > maxzivot) zivot = maxzivot;
            cout << "Vylecil jsi se na " << zivot << "/" << maxzivot << "!" << endl;
        } else {
            cout << "Spatna volba nebo malo many!" << endl;
        }

        if (nepritelZivot > 0) {
            zivot -= nepritelUtok;
            cout << "Nepritel zautocil za " << nepritelUtok << "!" << endl;
        }

        if (zivot <= 0) {
            cout << "Byl jsi porazen!" << endl;
            return;
        }
    }

    cout << "Porazil jsi nepratele!" << endl;
    penize += 10;
}

void soubojDvou(int &zivot, int maxzivot, int &mana, int maxmana, int utok, int &penize) {
    int nepritel1 = 6, nepritel2 = 6, nepritelUtok = 3;

    while (zivot > 0 && (nepritel1 > 0 || nepritel2 > 0)) {
        int cil, akce;
        cout << "\nZivoty: " << zivot << "/" << maxzivot << ", Mana: " << mana << "/" << maxmana << endl;
        cout << "Nepritel 1: " << nepritel1 << " HP, Nepritel 2: " << nepritel2 << " HP\n";
        cout << "Zvol akci: 1 - Utok, 2 - Leceni (3 many): ";
        cin >> akce;

        if (akce == 1) {
            cout << "Na ktereho nepritele zautocis? (1 nebo 2): ";
            cin >> cil;
            if (cil == 1 && nepritel1 > 0) {
                nepritel1 -= utok;
                cout << "Zasahl jsi nepratele 1 za " << utok << "!" << endl;
            } else if (cil == 2 && nepritel2 > 0) {
                nepritel2 -= utok;
                cout << "Zasahl jsi nepratele 2 za " << utok << "!" << endl;
            } else {
                cout << "Netrefil ses!" << endl;
            }
        } else if (akce == 2 && mana >= 3) {
            mana -= 3;
            zivot += 3;
            if (zivot > maxzivot) zivot = maxzivot;
            cout << "Vylecil jsi se na " << zivot << "/" << maxzivot << "!" << endl;
        } else {
            cout << "Spatna volba nebo malo many!" << endl;
        }

        // Nepratele utoci
        if (nepritel1 > 0) {
            zivot -= nepritelUtok;
            cout << "Nepritel 1 zautocil za " << nepritelUtok << "!" << endl;
        }
        if (nepritel2 > 0) {
            zivot -= nepritelUtok;
            cout << "Nepritel 2 zautocil za " << nepritelUtok << "!" << endl;
        }

        if (zivot <= 0) {
            cout << "Byl jsi porazen!" << endl;
            return;
        }
    }

    cout << "Zvitezil jsi nad obema neprateli!" << endl;
    penize += 25;
}
void soubojTri(int &zivot, int maxzivot, int &mana, int maxmana, int utok, int &penize) {
    int nepritel1 = 5, nepritel2 = 5, nepritel3 = 5;
    int nepritelUtok = 3;

    while (zivot > 0 && (nepritel1 > 0 || nepritel2 > 0 || nepritel3 > 0)) {
        int cil, akce;
        cout << "\nZivoty: " << zivot << "/" << maxzivot << ", Mana: " << mana << "/" << maxmana << endl;
        cout << "Nepritel 1: " << nepritel1 << " HP, Nepritel 2: " << nepritel2 << " HP, Nepritel 3: " << nepritel3 << " HP\n";
        cout << "Zvol akci: 1 - Utok, 2 - Leceni (3 many): ";
        cin >> akce;

        if (akce == 1) {
            cout << "Na ktereho nepritele zautocis? (1, 2 nebo 3): ";
            cin >> cil;
            if (cil == 1 && nepritel1 > 0) {
                nepritel1 -= utok;
                cout << "Zasahl jsi nepratele 1 za " << utok << "!" << endl;
            } else if (cil == 2 && nepritel2 > 0) {
                nepritel2 -= utok;
                cout << "Zasahl jsi nepratele 2 za " << utok << "!" << endl;
            } else if (cil == 3 && nepritel3 > 0) {
                nepritel3 -= utok;
                cout << "Zasahl jsi nepratele 3 za " << utok << "!" << endl;
            } else {
                cout << "Netrefil ses!" << endl;
            }
        } else if (akce == 2 && mana >= 3) {
            mana -= 3;
            zivot += 3;
            if (zivot > maxzivot) zivot = maxzivot;
            cout << "Vylecil jsi se na " << zivot << "/" << maxzivot << "!" << endl;
        } else {
            cout << "Spatna volba nebo malo many!" << endl;
        }

        // Nepratele utoci
        if (nepritel1 > 0) {
            zivot -= nepritelUtok;
            cout << "Nepritel 1 zautocil za " << nepritelUtok << "!" << endl;
        }
        if (nepritel2 > 0) {
            zivot -= nepritelUtok;
            cout << "Nepritel 2 zautocil za " << nepritelUtok << "!" << endl;
        }
        if (nepritel3 > 0) {
            zivot -= nepritelUtok;
            cout << "Nepritel 3 zautocil za " << nepritelUtok << "!" << endl;
        }

        if (zivot <= 0) {
            cout << "Byl jsi porazen!" << endl;
            return;
        }
    }

    cout << "Zvitezil jsi nad vsemi tremi neprateli!" << endl;
    penize += 35;
}

void soubojHexara(int &hracZivot, int maxzivot, int &mana, int maxmana, int utok, int &penize) {
    srand(time(0));

    int hexaraZivot = 60;
    int hexaraStandardUtok = 7;
    int hexaraKritickyUtok = 14;
    int hexovaSmrst = 15;

    vector<string> vsechnaKouzla = {"fireball", "led", "stin", "vitr", "jed", "lecive"};
    vector<string> pouzitaKouzla;
    string posledniKouzlo = "";

    bool hexovaSmrstAktivovana = false;
    int kolo = 1;

    cout << "\n--- FINALNI BOJ: HEXARA, CARODEJKA CHAOSU ---\n";

    while (hracZivot > 0 && hexaraZivot > 0 && kolo <= 7) {
        cout << "\nKolo " << kolo << ":\n";

        // Pauza mezi utoky
        if (kolo % 3 == 0) {
            cout << "Hexara si potrebuje oddychnout a v tomto kole neutoci.\n";
        } else if (hexovaSmrstAktivovana) {
            cout << "HEXOVA SMRST! Hexara rozpoutava chaos a zpusobuje " << hexovaSmrst << " poskozeni!\n";
            hracZivot -= hexovaSmrst;
            hexovaSmrstAktivovana = false;
        } else {
            int akce = rand() % 100;
            if (akce < 30) {
                string kouzlo = vsechnaKouzla[rand() % vsechnaKouzla.size()];
                bool kriticky = (kouzlo == posledniKouzlo);
                posledniKouzlo = kouzlo;

                cout << "Hexara pouziva kouzlo: " << kouzlo;
                if (kriticky) {
                    cout << " (KRITICKE)";
                    hracZivot -= hexaraKritickyUtok;
                } else {
                    hracZivot -= hexaraStandardUtok;
                }
                cout << " a zpusobuje " << (kriticky ? hexaraKritickyUtok : hexaraStandardUtok) << " poskozeni!\n";

                if (find(pouzitaKouzla.begin(), pouzitaKouzla.end(), kouzlo) == pouzitaKouzla.end()) {
                    pouzitaKouzla.push_back(kouzlo);
                }

                if (pouzitaKouzla.size() == vsechnaKouzla.size()) {
                    cout << "Hexara pouzila vsech 6 ruznych kouzel! Pripravuje HEXOVOU SMRST!\n";
                    hexovaSmrstAktivovana = true;
                    pouzitaKouzla.clear();
                }

            } else {
                // Normalni utok
                int kritickaSance = rand() % 100;
                bool kriticky = kritickaSance < 20;
                int dmg = kriticky ? hexaraKritickyUtok : hexaraStandardUtok;
                cout << "Hexara utoci svymi dlanemi a zpusobuje " << dmg << " poskozeni!\n";
                hracZivot -= dmg;
            }
        }

        // Kontrola, jestli hrac nezemrel
        if (hracZivot <= 0) {
            cout << "Byl jsi porazen Hexarou...\n";
            return;
        }

        // Hracuv tah
        cout << "Mas " << hracZivot << "/" << maxzivot << " zivotu. Mana: " << mana << "/" << maxmana << ".\n";
        cout << "Zautocis (1) nebo se vylecis (2)? ";
        int volba;
        cin >> volba;
        if (volba == 1) {
            cout << "Utocis na Hexaru a zpusobujes " << utok << " poskozeni!\n";
            hexaraZivot -= utok;
        } else if (volba == 2 && mana >= 5) {
            int leceni = 10;
            hracZivot += leceni;
            if (hracZivot > maxzivot) hracZivot = maxzivot;
            mana -= 5;
            cout << "Pouzil jsi lecive kouzlo a obnovil " << leceni << " zivotu!\n";
        } else {
            cout << "Neplatna volba nebo nedostatek many.\n";
        }

        if (hexaraZivot <= 0) {
            cout << "Porazil jsi Hexaru, carodejku chaosu!\n";
            penize += 60;
            cout << "Ziskavas 60 penez. Mas celkem " << penize << " penez.\n";
            cout << "Zivoty: " << hracZivot << "/" << maxzivot << ", Mana: " << mana << "/" << maxmana << "\n";
            return;
        }

        kolo++;
    }

    if (hexaraZivot > 0) {
        cout << "\nHexara ustoupila, ale prezila. Boj skoncil neuspesne.\n";
    }
}
//---------------HLAVNI CAST-----------
int main(){
//------------POSTAVA----------
cout << "Vitejte v textove hre!" << endl;
int clas, menu, rozhodnuti;
int postavaVybrana = 0;
int etapaHry = 1;
int penize = 20;

// Statistiky hrace
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
   case 1: // Paladin
    cout << "Vyborne! Jste Paladin, statistiky: " << endl;
    maxzivot = 14; zivot = 14;
    utok = 4;
    maxmana = 10; mana = 10;
    cout << "Zivot - " << zivot << "/" << maxzivot << endl;
    cout << "Utok - " << utok << endl;
    cout << "Mana  - " << mana << "/" << maxmana << endl;
    cout << "Vzdalenost utoku - 2" << endl;
    cout << "Schopnosti:\n";
    cout << "- Silovy uder (4 utok)\n";
    cout << "- Leceni (+3 zivoty, stoji 3 many)\n";
    cout << "- Svetelna salva (2 utok vsem, stoji 5 many)\n";
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";
        postavaVybrana = 1;

    }else if (rozhodnuti == 11){
        cout << "Jdes zpet do menu.";
    }
    break;

    case 2: // Mag
    cout << "Skvele! Jste Mag, statistiky: " << endl;
    maxzivot = 10; zivot = 10;
    utok = 3;
    maxmana = 14; mana = 14;
    cout << "Zivot - " << zivot << "/" << maxzivot << endl;
    cout << "Utok - " << utok << endl;
    cout << "Mana  - " << mana << "/" << maxmana << endl;
    cout << "Vzdalenost utoku - 4" << endl;
    cout << "Schopnosti:\n";
    cout << "- Magicky projektil (3 utok)\n";
    cout << "- Ohniva koule (5 utok, stoji 6 many)\n";
    cout << "- Teleport (unik z boje, stoji 4 many)\n";
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";
        postavaVybrana = 1;

    }else if (rozhodnuti == 11){
        cout << "Jdes zpet do menu.";
    }
    break;

    case 3: // Lovec
    cout << "Vytecne! Jste Lovec, statistiky: " << endl;
    maxzivot = 12; zivot = 12;
    utok = 5;
    maxmana = 8; mana = 8;
    cout << "Zivot - " << zivot << "/" << maxzivot << endl;
    cout << "Utok - " << utok << endl;
    cout << "Mana  - " << mana << "/" << maxmana << endl;
    cout << "Vzdalenost utoku - 5" << endl;
    cout << "Schopnosti:\n";
    cout << "- Presna strela (5 utok)\n";
    cout << "- Past na nepratele (zamezi utok nepratele, stoji 4 many)\n";
    cout << "- Lovci instinkt (+2 utok na 2 kola, stoji 3 many)\n";
    cout << "Chcete doopravdy vybrat tuto postavu (ano - 10, ne - 11): ";
    cin >> rozhodnuti;
    if (rozhodnuti == 10){
        cout << "Dobre, pokracujes dal.";
        postavaVybrana = 1;

    }else if (rozhodnuti == 11){
        cout << "Jdes zpet do menu.";
    }
    break;

    case 4: // Warlock
    cout << "Vynikajici! Jste Warlock, statistiky: " << endl;
    maxzivot = 18; zivot = 18;
    utok = 6;
    maxmana = 6; mana = 6;
    cout << "Zivot - " << zivot << "/" << maxzivot << endl;
    cout << "Utok - " << utok << endl;
    cout << "Mana  - " << mana << "/" << maxmana << endl;
    cout << "Vzdalenost utoku - 1" << endl;
    cout << "Schopnosti:\n";
    cout << "- Temny zasah (6 utok)\n";
    cout << "- Kradez zivota (+2 zivoty, stoji 3 many)\n";
    cout << "- Vyvolani stinu (2 utok navic na 1 kolo, stoji 4 many)\n";
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
vesnice:
 int volbaVesnice;
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

// SOUBOJE 1.0
if (etapaHry == 1){
// Souboj 1
cout << "\n--- SOUBOJ 1 ---\n";
soubojJednoho(zivot, maxzivot, mana, maxmana, utok, penize, 5, 2);
if (zivot <= 0) return 0;

// Souboj 2
cout << "\n--- SOUBOJ 2 ---\n";
soubojJednoho(zivot, maxzivot, mana, maxmana, utok, penize, 10, 4);
if (zivot <= 0) return 0;

// Souboj 3
cout << "\n--- SOUBOJ 3: DVA NEPRATELE ---\n";
soubojDvou(zivot, maxzivot, mana, maxmana, utok, penize);
if (zivot <= 0) return 0;

// Konec souboju
cout << "\nZvitezil jsi ve vsech soubojich!" << endl;
cout << "Zivoty: " << zivot << "/" << maxzivot << ", Mana: " << mana << "/" << maxmana << ", Penize: " << penize << endl;
cout << "ted pujdes do souboje s mini bossem, priprav se" << endl;

// SOUBOJ S MINI BOSSEM
cout << "\n--- MINI BOSS ---\n";
soubojJednoho(zivot, maxzivot, mana, maxmana, utok, penize, 13, 6);
if (zivot <= 0) return 0;

cout << "\nGratuluji! Porazil jsi mini bosse a vracis se zpet do vesnice...\n";
 etapaHry = 2;
// -------- ZPET DO VESNICE --------
goto vesnice;



// SOUBOJE 2.0
}else if (etapaHry == 2){
cout << "\n--- SOUBOJ 1: 1 MONSTRUM ---\n";
soubojJednoho(zivot, maxzivot, mana, maxmana, utok, penize, 6, 3);
if (zivot <= 0) return 0;

cout << "\n--- SOUBOJ 2: DVE MONSTRA ---\n";
soubojDvou(zivot, maxzivot, mana, maxmana, utok, penize);
if (zivot <= 0) return 0;

cout << "\n--- SOUBOJ 3: DVE MONSTRA ---\n";
soubojDvou(zivot, maxzivot, mana, maxmana, utok, penize);
if (zivot <= 0) return 0;

cout << "\n--- MINI BOSS ---\n";
soubojJednoho(zivot, maxzivot, mana, maxmana, utok, penize, 15, 7);
if (zivot <= 0) return 0;

// Konec souboju
cout << "\nZvitezil jsi ve vsech soubojich!" << endl;
cout << "Zivoty: " << zivot << "/" << maxzivot << ", Mana: " << mana << "/" << maxmana << ", Penize: " << penize << endl;
cout << "\nVracis se zpet do vesnice...\n";
 etapaHry = 3;
// -------- ZPET DO VESNICE --------
goto vesnice;



// SOUBOJE 3.0
}else if (etapaHry == 3){
    cout << "\n--- SOUBOJ 1: DVE MONSTRA ---\n";
    soubojDvou(zivot, maxzivot, mana, maxmana, utok, penize);
    if (zivot <= 0) return 0;

    cout << "\n--- SOUBOJ 2: DVE MONSTRA ---\n";
    soubojDvou(zivot, maxzivot, mana, maxmana, utok, penize);
    if (zivot <= 0) return 0;

    cout << "\n--- SOUBOJ 3: TRI MONSTRA ---\n";
    soubojTri(zivot, maxzivot, mana, maxmana, utok, penize);
    if (zivot <= 0) return 0;

    cout << "\n--- MINI BOSS ---\n";
    soubojJednoho(zivot, maxzivot, mana, maxmana, utok, penize, 18, 8);
    if (zivot <= 0) return 0;
// Konec souboju
    cout << "\nZvitezil jsi ve vsech soubojich!" << endl;
    cout << "Zivoty: " << zivot << "/" << maxzivot << ", Mana: " << mana << "/" << maxmana << ", Penize: " << penize << endl;
    cout << "\nVracis se zpet do vesnice...\n";
    etapaHry = 4;
// -------- ZPET DO VESNICE --------
    goto vesnice;


// FINAL BOSS HEXARA
}else if (etapaHry == 4){
    soubojHexara(zivot, maxzivot, mana, maxmana, utok, penize);
    if (zivot <= 0) return 0;

    cout << "\nHra pro tebe skoncila...\n";
}
}
