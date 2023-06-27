#include "ASCII_ENGINE/Sprite.hpp"
#include "ASCII_ENGINE/SpriteAnimado.hpp"
#include "ASCII_ENGINE/ObjetoDeJogo.hpp"
#include "Selector.hpp"

int main() {
    Sprite screen("src/imgs/screen.txt");
    Sprite screen2("src/imgs/screen.txt");
    Sprite asciihero("src/imgs/asciihero.txt");
    Sprite guitarhome("src/imgs/guitarhome.txt");
    Sprite options_start("src/imgs/options_start.txt");
    Sprite options_help("src/imgs/options_help.txt");
    Sprite options_about("src/imgs/options_about.txt");
    Sprite options_exit("src/imgs/options_exit.txt");
    Sprite sky("src/imgs/sky.txt");
    Selector selector(ObjetoDeJogo(Sprite("src/imgs/selector.txt"), 5, 46));

    sky.draw(screen, 1, 1);
    guitarhome.draw(screen, 58, 1);
    asciihero.draw(screen, 69, 10);
    options_start.draw(screen, 10, 45);
    options_help.draw(screen, 58, 45);
    options_about.draw(screen, 98, 45);
    options_exit.draw(screen, 148, 45);
    
    while(true){
        system("clear");
        screen.draw(screen2, 0, 0);
        selector.draw(screen2, selector.getColuna(), 46);  
        std::cout << screen2;
        std::string entrada;
        std::getline(std::cin, entrada);
        if(entrada == "q") break;
        if(entrada == "d"){
            selector.moveRigth(137);
        }
        if (entrada == "a"){
            selector.moveLeft(10);
        }

    }

    return 0;
}