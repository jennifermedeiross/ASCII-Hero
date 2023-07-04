#include "ChooseMusic.hpp"

void ChooseMusic::run(){
    Sprite screen("src/imgs/screen.txt");
    SpriteAnimado asciihero("src/imgs/asciihero.txt");
    
    Sound selecionou("src/musics/selecionou.mp3");

    init();

    int indexMusic = 0;

    while(true){
        system("clear");
        draw(screen, 0, 0);
        asciihero.draw(screen, 69, 7);
        asciihero.update();
        show(&screen);

        musicas[indexMusic].play();
        std::cout << faseState() << std::endl;
        
        char entrada = getTeclado().getch();

        if(entrada == 'q' || entrada == 'Q'){
            setState("PageHome");
            musicas[indexMusic].stop();
            break;
        }

        else if(entrada == 'S' || entrada == 's'){
            selecionou.play();
            musicas[indexMusic].stop();
            indexMusic < 2 ? indexMusic++ : indexMusic = 0;
            update();
        }

        else if(entrada == 'x' || entrada == 'X'){
            setState("Fase" + std::to_string(indexMusic + 1));
            musicas[indexMusic].stop();
            break;
        }

    }
}

void ChooseMusic::init(){
    Sprite screen("src/imgs/screen.txt");
    Sprite sky("src/imgs/sky.txt");
    Sprite infoMusic("src/imgs/chooseMusic/infoMusic.txt");
    Sprite selector("src/imgs/chooseMusic/selector.txt"); 

    sky.draw(screen, 1, 1);
    infoMusic.draw(screen, 161, 1);
    selector.draw(screen, 39, 39);

    setBackground(&screen);

    std::list<ObjetoDeJogo *> lista;

    pMusica = new ObjetoDeJogo(SpriteAnimado("src/imgs/chooseMusic/musics.txt"), 52, 35);
    lista.push_back(pMusica);

    setListaObjetos(lista);

    Sound music1("src/musics/sweetChildOMine.mp3");
    Sound music2("src/musics/iLoveRockNRoll.mp3");
    Sound music3("src/musics/ironMan.mp3");
    musicas.push_back(music1);
    musicas.push_back(music2);
    musicas.push_back(music3);
}