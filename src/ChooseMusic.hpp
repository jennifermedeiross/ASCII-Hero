#ifndef CHOOSEMUSIC_HPP
#define CHOOSEMUSIC_HPP

#include "ASCII_ENGINE/Fase.hpp"

class ChooseMusic : public Fase{
    private:
        std::vector<Sound> musicas;
        ObjetoDeJogo *pMusica;

    public:
        ChooseMusic(std::string nome) : Fase(nome) {}
        virtual ~ChooseMusic(){}

        virtual void run();
        virtual void init();
};




#endif