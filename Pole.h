#pragma once
#include<SFML/Graphics.hpp>
#include <iostream>
#include <time.h>
#include <vector>

class Pole {
	
public:
	Pole(int a, int b);
	void RysowaniePola();
	void StworzenieKomorek();
	void PolaZLiczbami();
	//int GetGrid();

	//int GetSgrid();
private:
	sf::RenderWindow window;
	sf::Event event;
	sf::Texture t;
	sf::Sprite s;
	int grid[12][12]; // siatka z liczbami i bombami
	int sgrid[12][12]; //Pokazywane siatka
	int const w = 32;
	int a;
	int b;

};