#include "PageHome.hpp";

void PageHome::run(){
    Sprite screen("src/imgs/screen.txt");
    SpriteAnimado asciihero("src/imgs/asciihero.txt");
    Sprite mHelp("src/imgs/pageHome/mensagemHelp.txt");
    Sprite mAbout("src/imgs/pageHome/mensagemAbout.txt");
    
    Sound somMenu("src/musics/iLoveRockNRoll.mp3");
    Sound colidiu("src/musics/colidiu.mp3");
    Sound selecionou("src/musics/selecionou.mp3");

    init();
    somMenu.playloop();

    while(true){
        system("clear");
        draw(screen, 0, 0);
        asciihero.draw(screen, 69, 10);
        asciihero.update();
        show(&screen);
        char entrada = getTeclado().getch();


        if(entrada == 'q' || entrada == 'Q'){
            setState("End");
            somMenu.stop();
            break;
        }
        else if (entrada == 'd' || entrada == 'D'){
            pSelector->moveRigth(pExit->getColuna() - 11);
            sleep(.5);
            colidiu.play();
        }
        else if (entrada == 'a' || entrada == 'A'){
            pSelector->moveLeft(pStart->getColuna());
            sleep(.5);
            colidiu.play();
        }

        else if(entrada == 'x' || entrada == 'X'){

            if(pSelector->colideCom(*pStart)){
                setState("ChooseMusic");
                selecionou.play();
                break;
            }

            else if (pSelector->colideCom(*pHelp)){
                selecionou.play();
                mHelp.draw(screen, 43, 5);
                system("clear");
                show(&screen);
                std::cin.ignore();
                selecionou.play();
            }

            else if(pSelector->colideCom(*pAbout)){
                selecionou.play();
                mAbout.draw(screen, 43, 18);
                system("clear");
                show(&screen);
                std::cin.ignore();
                selecionou.play();
            }

            else if(pSelector->colideCom(*pExit)){
                selecionou.play();
                somMenu.stop();
                setState("End");
                break;
            }
        }
    }
}

void PageHome::init(){
    Sprite screen("src/imgs/screen.txt");
    Sprite guitarhome("src/imgs/guitarhome.txt");
    Sprite sky("src/imgs/sky.txt");
    Sprite infoMenu("src/imgs/pageHome/infoMenu.txt");

    sky.draw(screen, 1, 1);
    infoMenu.draw(screen, 161, 1);
    guitarhome.draw(screen, 58, 1);

    setBackground(&screen);

    std::list<ObjetoDeJogo *> lista;

    Sprite selector("src/imgs/pageHome/options_selector.txt");
    Sprite options_start("src/imgs/pageHome/options_start.txt");
    Sprite options_help("src/imgs/pageHome/options_help.txt");
    Sprite options_about("src/imgs/pageHome/options_about.txt");
    Sprite options_exit("src/imgs/pageHome/options_exit.txt");

    pStart = new ObjetoDeJogo(options_start, 10, 45);
    pHelp = new ObjetoDeJogo(options_help, 58, 45);
    pAbout = new ObjetoDeJogo(options_about, 98, 45);
    pExit = new ObjetoDeJogo(options_exit, 148, 45);
    pSelector = new Selector(ObjetoDeJogo(selector, 5, 46));

    lista.push_back(pStart);
    lista.push_back(pHelp);
    lista.push_back(pAbout);
    lista.push_back(pExit);
    lista.push_back(pSelector);

    setListaObjetos(lista);

}