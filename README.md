# ASCII-Hero
Versão em ASCII Art do jogo GuitarHero utilizando a engine ASCII_ENGINE desenvolvida na disciplina de Programação Orientada a Objetos. A engine segue o seguinte modelo:

GameBase - Classe abstrata topo de toda hierarquia

SpriteBase - É a classe abstrata topo da hierarquia de classes sprite, lida com a leitura de arquivos e conversão em vetores de strings
Sprite - Lida com os sprites estáticos
SpriteAnimado - Lida com os sprites animados

Fase - É a classe abstrata toda da hierarquia de classes fase

ObjetoDeJogo - É a classe topo da hierarquia de classes objeto

Sound - Classe que manipula arquivos de som utilizando mpg321 (Desenvolvida pelo professor Victor Oliveira)

Teclado - Classe que manipula terminal para entrada de caracteres do usuário

<hr/>

<div align="center">

  
### Recursos:
Classes | 
Herança | 
Polimorfismo | 
Sobrecarga de Operadores | 
E/S padrão e em arquivos de texto | 
STL

</div>

<hr/>

## Requisitos

- Sistema operacional Linux (Recomendado)
- Compilador g++
    ```
      sudo apt-get update
      sudo apt-get install g++
    ```

- mpg321
    ```
    sudo apt-get update
    sudo apt-get install mpg321
    ```

## Instalação

1. Clone o projeto;

2. Acesse o diretório do projeto e o abra no terminal;
3. Execute os comandos:
    ```
    chmod +x makeplay
    ```
    ```
    ./makeplay
    ```

 Caso o g++ não seja utilizado:  
 
  1. Abra o arquivo makeplay;
  2. Modifique o primeiro parâmetro do script de acordo com o compilador desejado.

Para rodar o jogo, sempre rode o comando ./makeplay.