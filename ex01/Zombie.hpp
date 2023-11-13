#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class Zombie
{
public:

    Zombie();

    Zombie(const std::string& zombieName);

    void announce() const;

    static Zombie* zombieHorde(int N, std::string name);

    void setName(const std::string& newName);

    ~Zombie();

private:

    std::string name;
};

#endif