#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Navio.h"
#include "Posicao.h"
#include "Terreno.h"

using namespace std;

class Porto : public Terreno{
public:

	Porto();

	~Porto();
};