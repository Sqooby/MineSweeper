#include "Pole.h"

void Pole::RysowaniePola()
{
	
	sf::RenderWindow window(sf::VideoMode(a, b), "Saper");
	StworzenieKomorek();
	PolaZLiczbami();
	sf::Texture t;
	t.loadFromFile("images/tiles.jpg");
	sf::Sprite s(t);
	
	

	while (window.isOpen())
	{
		sf::Vector2i pos = sf::Mouse::getPosition(window);
		int x = pos.x / w;
		int y = pos.y / w;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (event.type == sf::Event::MouseButtonPressed)
		{
			if (event.key.code == sf::Mouse::Left)
			{
				sgrid[x][y] = grid[x][y];
			}
			else if (event.key.code == sf::Mouse::Right)
			{
				sgrid[x][y] = 11;
			}
		}
		
		window.clear(sf::Color::White);
		
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				if (sgrid[x][y] == 9)
				{
					
					sgrid[i][j] == grid[i][j];
					std::cout << "k";
				}
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
	//GetGrid();
	//GetSgrid();
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			sgrid[i][j] = 10;//Zamkniête pola
			if (rand() % 5 == 0)
			{
				grid[i][j] = 9;//stawienie bomb
			}
			else
			{
				grid[i][j]=0;//Otwarte Pola
			}
			
		}
	}
}
void Pole::PolaZLiczbami() {
	//GetGrid();
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
		{
			int n = 0;
			if (grid[i][j] == 9)
				continue;
			if (grid[i + 1][j] == 9)
				n++;
			if (grid[i][j + 1] == 9)
				n++;
			if (grid[i - 1][j] == 9)
				n++;
			if (grid[i][j - 1] == 9)
				n++;
			if (grid[i + 1][j + 1] == 9)
				n++;
			if (grid[i - 1][j - 1] == 9)
				n++;
			if (grid[i - 1][j + 1] == 9)
				n++;
			if (grid[i + 1][j - 1] == 9)
				n++;
			grid[i][j] = n;
		}

}

Pole::Pole(int a, int b) {
	this->a = a;
	this->b = b;
}
/*int Pole::GetGrid() {
	return grid[12][12];
}
int Pole::GetSgrid() {
	return sgrid[12][12];
}
*/
