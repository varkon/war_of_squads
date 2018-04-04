#include <iostream>
#include <algorithm>    // std::copy
#include <vector>
#include <cstdlib>
#include <ctime>
/* скорость возраст здоровье атака защита
  * 3 типа юнитов: крестьянин, воин, лучник
  * массив этих юнитов
  * юниты могут объединяться в отряды
  * отряды должны легко управляться: быстро получить состояние отрядов/юнитов
  *
  * вывод: кол-во отрядов и их хар-ки

* доп: вывести размеры для каждого типа классов
*/

class Unit {
    public:
        virtual ~Unit() = default;
        virtual int getSpeed() = 0;
        virtual int getHealth() = 0;
        virtual int getAge() = 0;
        virtual int getArmor() = 0;
        virtual int getAttack() = 0;
};

class Archer : public Unit{
    int u_speed, u_health, u_age, u_armor, u_attack;
public:
    Archer(int speed, int health, int age, int armor, int attack){
        u_speed = speed;
        u_health = health;
        u_armor = armor;
        u_age = age;
        u_attack = attack;
    }

    int getAge() override
    {
        return u_age;
    }

    int getAttack() override
    {
        return u_attack;
    }

    int getArmor()
    {
        return u_armor;
    }

    int getSpeed()
    {
        return u_speed;
    }

    int getHealth()
    {
        return u_health;
    }
};

class Citizen : public Unit{
    int u_speed, u_health, u_age, u_armor, u_attack;
public:
    Citizen(int speed, int health, int age, int armor, int attack){
        u_speed = speed;
        u_health = health;
        u_armor = armor;
        u_age = age;
        u_attack = attack;
    }

    int getAge() override
    {
        return u_age;
    }

    int getAttack() override
    {
        return u_attack;
    }

    int getArmor()
    {
        return u_armor;
    }

    int getSpeed()
    {
        return u_speed;
    }

    int getHealth()
    {
        return u_health;
    }
};

class Warrior : public Unit{
    int u_speed, u_health, u_age, u_armor, u_attack;
public:
    Warrior(int speed, int health, int age, int armor, int attack){
        u_speed = speed;
        u_health = health;
        u_armor = armor;
        u_age = age;
        u_attack = attack;
    }

    int getAge() override
    {
        return u_age;
    }

    int getAttack() override
    {
        return u_attack;
    }

    int getArmor()
    {
        return u_armor;
    }

    int getSpeed()
    {
        return u_speed;
    }

    int getHealth()
    {
        return u_health;
    }

};

class Squad {
public:
    std::vector <Unit *> squadName;
    void setSquad(auto *squad)
    {
        squadName = *squad;
    }

    void getSquad()
    {
        for (int i = 0; i < squadName.size(); i++) {
            std::cout << squadName[i]->getSpeed() << " ";
            std::cout << squadName[i]->getAge() << " ";
            std::cout << squadName[i]->getAttack() << " ";
            std::cout << squadName[i]->getHealth() << " ";
            std::cout << squadName[i]->getArmor() << "\n";
        }
        std::cout << "\n";
    }

    void getUnit(int i)
    {
        std::cout << squadName[i]->getSpeed() << " ";
        std::cout << squadName[i]->getAge() << " ";
        std::cout << squadName[i]->getAttack() << " ";
        std::cout << squadName[i]->getHealth() << " ";
        std::cout << squadName[i]->getArmor() << "\n\n";
    }

    void getSize()
    {
        std::cout << squadName.size();
    }

};

int main()
{
    srand(time(0));

    std::vector<Unit *> Fanta;
    for (int i = 0; i < 5; i++) {
        Fanta.push_back(new Archer(rand() % 50, rand() % 15, rand() % 50, rand() % 50, rand() % 50));
    }

    Squad Carbon;

    Carbon.setSquad(&Fanta);
    Carbon.getSquad();
    Carbon.getUnit(0);
}
