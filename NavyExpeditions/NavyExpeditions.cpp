// NavyExpeditions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Configuration.h"
#include "Game.h"

using namespace std;

int main(){
	//Primeira Fase, Configuração
	Configuration config;
	config.run();
	//Configuration *config = new Configuration;
	//config->run();
	
	cout << "Out" << endl;
	/*for (auto i = (config->getMapa()).begin(); i != (config->getMapa()).end(); ++i) {
		cout << *i << endl;
	}*/
	//Segunda Fase, Jogo
	//Game *game = new Game;
	//game(config);
	//ou
	Game game(config);
    return 0;
}

