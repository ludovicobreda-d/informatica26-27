#include <iostream>

int main() {
    
    int numero;
    int numero2;
    std::cout << "Inserisci un numero: " << std::endl;
    std::cin >> numero;
    std::cout << "Inserisci un numero: " << std::endl;
    std::cin >> numero2;
    
    if(numero > numero2)
    std::cout << ">>>>" << std::endl;
    if(numero < numero2)
    std::cout << "<<<<" << std::endl;
    if(numero == numero2)
    std::cout << "====" << std::endl;
    
    return 0;
}