#include "Zombie.hpp"

Zombie::Zombie() : name("Default Zombie")
{
    
}

Zombie::Zombie(const std::string& zombieName) : name(zombieName)
{

}

void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Je suis le destructeur de : " << name << std::endl;

}

void Zombie::setName(const std::string& newName)
{
    name = newName;
}

