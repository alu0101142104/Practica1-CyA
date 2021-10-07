#include<iostream>

int main(int argc, char* argv[]){
    int comprobacion;
    int numero = atoi(argv[1]);

    for (int i = 1; i <= numero; ++i) {
        for (int j = 1; j <= numero; ++j) { 
            comprobacion = i * i + j * j;
            if (comprobacion == numero){
                std::cout << i << "² + " << j << "² = " << numero << std::endl;
                std::cout << "True" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "False" << std::endl;
    return 0;
}