#include "ASCII_ENGINE/Sprite.hpp"
#include "ASCII_ENGINE/SpriteAnimado.hpp"
#include "ASCII_ENGINE/ObjetoDeJogo.hpp"
#include "Selector.hpp"
#include "PageHome.hpp"
#include "ChooseMusic.hpp"

int main() {
    ChooseMusic pageHome("PageHome");
    pageHome.run();

    return 0;
}