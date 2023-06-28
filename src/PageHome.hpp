#ifndef PAGEHOME_HPP
#define PAGEHOME_HPP

#include "ASCII_ENGINE/Fase.hpp"
#include "ASCII_ENGINE/ObjetoDeJogo.hpp"
#include "Selector.hpp"

class PageHome : public Fase{
    private:
        ObjetoDeJogo *pStart;
        ObjetoDeJogo *pHelp;
        ObjetoDeJogo *pAbout;
        ObjetoDeJogo *pExit;
        Selector *pSelector;

    public:
        PageHome(std::string nome) : Fase(nome){}
        virtual ~PageHome(){}

        virtual void init();
        virtual void run();
};


#endif
