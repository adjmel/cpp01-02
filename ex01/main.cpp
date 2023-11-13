#include "Zombie.hpp"

// #include <limits> Pour std::numeric_limits -> https://en.cppreference.com/w/cpp/types/numeric_limits C++98

int main()
{
    int N;
    std::cout << "How many zombies do you want to create?" << std::endl;
    
    while (!(std::cin >> N) || N <= 0)
    {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::string name;
    std::cout << "What name would you like to give them ? " << std::flush;

    while (!(std::cin >> name))
    {
        std::cout << "Invalid input. Please enter a valid name." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    Zombie *horde = Zombie::zombieHorde(N, name);
    delete[] horde;

    return 0;
}


