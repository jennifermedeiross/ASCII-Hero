#ifndef SELECTOR_HPP
#define SELECTOR_HPP

#include "ASCII_ENGINE/ObjetoDeJogo.hpp"

class Selector : public ObjetoDeJogo{

    public:
        Selector(const ObjetoDeJogo &obj) : ObjetoDeJogo(obj) {}
        ~Selector(){}

        virtual void moveRigth(int limiteDireito){
            if(getColuna() < limiteDireito){
                int coluna = (getColuna() + getSpriteObj()->getLargura() + 5);
                moveTo(getLinha(), coluna);
            }
        }
        virtual void moveLeft(int limiteEsquerdo) {
            if(getColuna() > limiteEsquerdo){
                moveTo(getLinha(), (getColuna() - getSpriteObj()->getLargura() - 5));
            }
        }
};


#endif