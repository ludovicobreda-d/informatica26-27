#include <iostream>

int main ()
{
    int lvl = 0;
    std::cout << "Inserisci il livello di Fizzbuzz ";
    while (lvl < 1){
        std::cin >> lvl;
        if (lvl <= 1)
            std::cout << "ERRORE: Inserisci un valore > 1!\n";
    }
    
    std::cout << "Grazie. Calcolo Fizzbuzz fino al numero "
            << lvl << "\n";
    // Algoritmo di calcolo Fizzbuzz
    for(int i=1; i <= lvl; i++){
        if(i%3 == 0 and i%5 == 0){
            std::cout << i << " Fizzbuzz \n";
            
        } else if (i%3){
            std::cout << i << " Fizz \n";
        } else if (i%5 == 0){
            std::cout << i << " Buzz \n";
        } else {
            std::cout << i << "\n";
        }
    }
}