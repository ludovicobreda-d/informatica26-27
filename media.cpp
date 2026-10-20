#include <iostream>

int main(){
    
    float v1, v2, v3, v4, v5, media;
    {
    std::cout << "Inserisci il primo numero: ";
    std::cin >> v1;
    std::cout << "Inserisci il secondo numero: ";
    std::cin >> v2;
    std::cout << "Inserisci il terzo numero: ";
    std::cin >> v3;
    std::cout << "Inserisci il quarto numero: ";
    std::cin >> v4;
    std::cout << "Inserisci il quinto numero: ";
    std::cin >> v5;
    media = (v1+v2+v3+v4+v5)/5;
    std::cout << "media = " << media << std::endl;
    }
    
    return 0;
}