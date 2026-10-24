#include <iostream>
#include <string>

int main() {
    int atk = 10;
    int atknemico = 20;
    int pv = 100;
    int pvnemico = 30;
    int atknemicostanco = 10;

    std::string scelta;

    std::cout << "Un nemico molto cattivo (ma proprio tanto cattivo) e' in avvicinamento" << std::endl;
    std::cout << "Inizia la partita" << std::endl;
    std::cout << "PV 100 | Atk 10 | Def 5" << std::endl;

    std::cout << "Attacco (scrivi atk) per attaccare: ";
    std::cin >> scelta;

    if (scelta == "atk") {
        pvnemico -= atk;
        std::cout << "Hai scelto di attaccare. Il nemico sembra (ma sembra) addolorato. " << pvnemico << " PV rimasti al nemico" << std::endl;
    } else {
        std::cout << "Non hai attaccato. Turno saltato (sei gay)" << std::endl;
        std::cout << "Il nemico pensa che potrebbe vincere" << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;
    std::cout << "Turno del nemico" << std::endl;

    pv -= atknemico;

    std::cout << "Il nemico ha attaccato " << pv
              << " PV rimasti (Ti senti giusto un pò addolorato al braccio)" << std::endl;
              
    std::cout << "--------------------------------" << std::endl;

    std::cout << "Tocca di nuovo a te (perchè funziona cosi il sistema del combattimento)" << std::endl;
    std::cout << "PV " << pv << " | Atk 10 | Def 5" << std::endl;

    std::cout << "Attacco (scrivi atk) per attaccare: ";
    std::cin >> scelta;

    if (scelta == "atk") {
        pvnemico -= atk;
        std::cout << "Hai scelto di attaccare. Il nemico si sente piu' addolorato. "
                  << "Sembra sul punto di morire (non di certo perchè è a un terzo della salute). "
                  << pvnemico << " PV rimasti al nemico" << std::endl;
    } else {
        std::cout << "Non hai attaccato. Turno saltato (perchè non attacchi? Rischi la morte)" << std::endl;
        std::cout << "Il nemico pensa effettivamente che potrebbe batterti" << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    std::cout << "Turno del nemico.";

    atknemico -= atknemicostanco;
    pv -= atknemico;

    std::cout << " Il nemico ha attaccato " << pv
              << " PV rimasti (Il dolore al braccio è più forte, "
              << "ma il nemico è statisticamente quasi morto quindi conviene attaccarlo per finirlo)." << std::endl;
              
    std::cout << "--------------------------------" << std::endl;

    std::cout << "Tocca di nuovo a te" << std::endl;
    std::cout << "PV " << pv << " | Atk 10 | Def 5" << std::endl;

    std::cout << "Attacco (scrivi atk) per attaccare: ";
    std::cin >> scelta;

    if (scelta == "atk") {
        pvnemico -= atk;
        std::cout << "Hai scelto di attaccare." << std::endl;

        if (pvnemico <= 0) {
            std::cout << "Il nemico è morto (come aspettato). Ti senti più sicuro in te del 23.5%" << std::endl;
        } else {
            std::cout << "Il nemico è ancora vivo. Gli restano "
                      << pvnemico << " PV." << std::endl;
            std::cout << "Il nemico è sempre più convinto che potrebbe vincere" << std::endl;
        }
    } else {
        std::cout << "Non hai attaccato. Turno saltato." << std::endl;
        std::cout << "Il nemico pensa che lo stai prendendo in giro non attaccandolo. Il nemico se ne va. Hai vinto (più o meno)" << std::endl;
    }

    return 0;
}