#ifndef CHOOSEMUSIC_HPP
#define CHOOSEMUSIC_HPP

#include "ASCII_ENGINE/Fase.hpp"

class ChooseMusic : public Fase{
    private:
        /* data */
    public:
        ChooseMusic(std::string nome) : Fase(nome) {}
        virtual ~ChooseMusic(){}
};




#endif