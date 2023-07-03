#include "ChooseMusic.hpp"

void ChooseMusic::run(){
    Sprite screen("src/imgs/screen.txt");
    SpriteAnimado asciihero("src/imgs/asciihero.txt");
    Sprite mHelp("src/imgs/menu/mensagemHelp.txt");
    Sprite mAbout("src/imgs/menu/mensagemAbout.txt");
    
    Sound somMenu("src/musics/somMenu.mp3");
    Sound colidiu("src/musics/colidiu.mp3");
    Sound selecionou("src/musics/selecionou.mp3");

    init();
    somMenu.playloop();

    while(true){
        system("clear");
        draw(screen, 0, 0);
        asciihero.draw(screen, 69, 7);
        asciihero.update();
        show(&screen);
        char entrada = getTeclado().getch();

        if(entrada == 'q' || entrada == 'Q'){
            break;
        }
    }
}

void ChooseMusic::init(){
    Sprite screen("src/imgs/screen.txt");
    Sprite sky("src/imgs/sky.txt");

    sky.draw(screen, 1, 1);

    setBackground(&screen);
}