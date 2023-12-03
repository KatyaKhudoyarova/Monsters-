#include <iostream>
#include <string>

class Monsters {
    friend class Ork;
    friend class Troll;
    friend class Zomby;
    friend class Goblin;

public:
    void printMonster() const {
        ork.printMonster();
        troll.printMonster();
        zomby.printMonster();
        goblin.printMonster();
    }

private:
    class Ork {
    private:
        std::string name = "ORK";
        int health = 1000;

    public:
        Ork& operator=(const Ork& other) {
            if (this != &other) {
                this->name = other.name;
                this->health = other.health;
            }
            return *this;
        }

        void printMonster() const {
            std::cout << "*********************************" << std::endl;
            std::cout << "Monster's name: " << name << std::endl;
            std::cout << "Monster's health: " << health << std::endl;
            std::cout << "*********************************" << std::endl;
        }
    };

    class Troll {
    private:
        std::string name = "TROLL";
        int health = 2500;

    public:
        Troll& operator=(const Troll& other) {
            if (this != &other) {
                this->name = other.name;
                this->health = other.health;
            }
            return *this;
        }

        void printMonster() const {
            std::cout << "*********************************" << std::endl;
            std::cout << "Monster's name: " << name << std::endl;
            std::cout << "Monster's health: " << health << std::endl;
            std::cout << "*********************************" << std::endl;
        }
    };

    class Zomby {
    private:
        std::string name = "ZOMBY";
        int health = 5000;

    public:
        Zomby& operator=(const Zomby& other) {
            if (this != &other) {
                this->name = other.name;
                this->health = other.health;
            }
            return *this;
        }

        void printMonster() const {
            std::cout << "*********************************" << std::endl;
            std::cout << "Monster's name: " << name << std::endl;
            std::cout << "Monster's health: " << health << std::endl;
            std::cout << "*********************************" << std::endl;
        }
    };

    class Goblin {
    private:
        std::string name = "GOBLIN";
        int health = 5500;

    public:
        Goblin& operator=(const Goblin& other) {
            if (this != &other) {
                this->name = other.name;
                this->health = other.health;
            }
            return *this;
        }

        void printMonster() const {
            std::cout << "*********************************" << std::endl;
            std::cout << "Monster's name: " << name << std::endl;
            std::cout << "Monster's health: " << health << std::endl;
            std::cout << "*********************************" << std::endl;
        }
    };

    Ork ork;
    Troll troll;
    Zomby zomby;
    Goblin goblin;
};

int main() {
    Monsters monsters;
    monsters.printMonster();

    return 0;
}
