#ifndef GAME_HPP
#define GAME_HPP

#include "ChooseMusic.hpp"
#include "PageHome.hpp"

class Game {
        
    public:
        Game(){}
        ~Game(){}

        void run(){
            ChooseMusic chooseMusic("ChooseMusic");
            PageHome pageHome("PageHome");

            pageHome.run();

            while(true){

                if(pageHome.faseState() == "ChooseMusic"){
                    chooseMusic.run();
                    if(chooseMusic.faseState() == "PageHome"){
                        pageHome.run();
                    }
                }
                else if(pageHome.faseState() == "End"){
                    break;
                }

            }
        }
};


#endif