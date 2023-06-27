#include "ASCII_ENGINE/Sprite.hpp"

int main() {
    system("clear");
    Sprite screen("src/imgs/screen.txt");
    Sprite asciihero("src/imgs/asciihero.txt");
    Sprite guitarhome("src/imgs/guitarhome.txt");
    Sprite options_start("src/imgs/options_start.txt");
    Sprite options_help("src/imgs/options_help.txt");
    Sprite options_about("src/imgs/options_about.txt");
    Sprite options_exit("src/imgs/options_exit.txt");

    guitarhome.draw(screen, 58, 1);
    asciihero.draw(screen, 69, 10);
    options_start.draw(screen, 10, 45);
    options_help.draw(screen, 58, 45);
    options_about.draw(screen, 100, 45);
    options_exit.draw(screen, 150, 45);
    
    std::cout << screen;

    return 0;
}