#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector <std::string> movies {"The Godfather","The Dark Knight","Schindler's List","The Lord of the Rings","Forrest Gump"};
	std::vector <std::string> viewed_movies {"Inception","The Matrix","Interstellar","City of God"};
	int check_num = 0;
	int ticket_count = 0;
	const int people_count = 50;
	const int view_days = 10;


	ticket_count = view_days * people_count * viewed_movies.size();
	std::cout << "the number of tickets sold is: " << ticket_count << std::endl;

	std::cout << "Viewed Movies: " << std::endl;
	for (int j = 0; j < viewed_movies.size(); ++j)
	{
		std::cout << j+1 << ". " << viewed_movies[j] << std::endl;
	}

	std::cout << "Choose your favorite movie: "<< std::endl;

	for (int i = 0; i < movies.size(); ++i)
	{
		std::cout << i + 1 << ". " << movies[i] << std::endl;
	}


	std::cin >> check_num;

	viewed_movies.push_back(movies[(check_num) - 1]);
	std::cout << "Viewed Movies: "<< std::endl;
	for(int j = 0; j < viewed_movies.size(); ++j)
	{
		std::cout << j+1 << ". " << viewed_movies[j] << std::endl;
	}
	
	ticket_count = view_days * people_count * viewed_movies.size();
	std::cout << "the number of tickets sold is: " << ticket_count << std::endl;

	return 0;
}

