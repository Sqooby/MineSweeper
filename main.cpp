
#include"Pole.h"

int main()
{/*
	int sgrid[12][12];
	int grid[12][12];
	int w = 32;
	sf::RenderWindow window(sf::VideoMode(600, 600), "chuj");
	sf::Texture t;
	sf::Sprite s(t);
	t.loadFromFile("images/tiles.jpg");

	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
		{
			sgrid[i][j] = 10;
			
		}

	while (window.isOpen())
	{
		sf::Event event;
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
	*/
	Pole gra(500, 500);
	gra.RysowaniePola();
	
	return 0;
}