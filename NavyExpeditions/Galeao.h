#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Navio.h"

class Galeao : public Navio {

public:
	Galeao();

	void setQuantidade(int q) {
		this->quantidade = q;
	}

	~Galeao();
};