#pragma once
#include<SFML/Graphics.hpp>
#include <iostream>
#include "Global.h"
#include <time.h>
class Pole {
	
public:
	Pole();
	void RysowaniePola();
	void WczTeks();
	void StworzenieKomorek();
	int GetWindow();
	
private:
	sf::RenderWindow window;
	sf::Event event;
	sf::Texture t;
	sf::Sprite s;
	bool CzyWyg;
	bool CzyPrz;
	int grid[12][12];
	int sgrid[12][12];
	int const w = 32;
	
	
	
};