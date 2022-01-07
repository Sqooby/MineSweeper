#include "Pole.h"

void Pole::RysowaniePola()
{
	srand(time(0));
	sf::RenderWindow window(sf::VideoMode(600, 600), "chuj");
	WczTeks();
	StworzenieKomorek();
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		window.clear(sf::Color::White);
		
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				s.setTextureRect(sf::IntRect(sgrid[i][j] * w, 0, w, w));
				s.setPosition(i * w, j * w);
				window.draw(s);
			}
		}
		window.display();
	}
}
void Pole::StworzenieKomorek()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			sgrid[i][j] = 10;
		}
	}
}
void Pole::WczTeks() {
	sf::Texture t;
	t.loadFromFile("images/titles.jpg");
	sf::Sprite s(t);
}