// NavyExpeditions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Configuration.h"
#include "Game.h"

using namespace std;

int main(){
	//Primeira Fase, Configuração
	Configuration *config = new Configuration;
	config->run();
	cout << "Out" << endl;
	cin.get();
	//Segunda Fase, Jogo
	Game *game = new Game;
	//game(config);
	//ou
	//Game *game = new Game(config);
    return 0;
}

