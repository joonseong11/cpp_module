#include <iostream>
#include <string.h>

class Marine {
	int hp;
	int coord_x, coord_y;
	int damage;
	bool is_dead;
	char *name; // 마린 이름

public:
	Marine();
	Marine(int x, int y, const char *marine_name);
	Marine(int x, int y);
	~Marine();

	int attack();
	void be_attacked(int damage_earn);
	void move(int x, int y);

	void show_status();
};

Marine::Marine() {
	hp = 50;
	coord_x = coord_y = 0;
	damage = 5;
	is_dead = false;
	name = NULL;
}

Marine::Marine(int x, int y, const char* marine_name) {
	name = new char[strlen(marine_name) + 1];
	strcpy(name, marine_name);

	coord_x = x;
	coord_y = y;
	hp = 50;
	damage = 5;
	is_dead = false;
}

Marine::Marine(int x, int y) {
	coord_x = x;
	coord_y = y;
	hp = 50;
	damage = 5;
	is_dead = false;
	name = NULL;
}

void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}

int Marine::attack() { return damage; }

void Marine::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0) is_dead = true;
}

void Marine::show_status() {
	std::cout << " *** Marine *** " << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
			  << std::endl;
	std::cout << " HP : " << hp << std::endl;
}

Marine::~Marine() {
	std::cout << name << " 의 소멸자 호출 ! " << std::endl;
	if (name != NULL) {
		delete[] name;
	}
}

// int main() {
// 	Marine marine1(2, 3);
// 	Marine marine2(3, 5);

// 	marine1.show_status();
// 	marine2.show_status();

// 	std::cout << std::endl
// 			  << "마린 1 이 마린 2 를 공격! " << std::endl;
// 	marine2.be_attacked(marine1.attack());

// 	marine1.show_status();
// 	marine2.show_status();
// }

int main() {
	Marine* marine[100];

	marine[0] = new Marine(2, 3, "Marine 2");
	marine[1] = new Marine(3, 5, "Marine 1");

	marine[0]->show_status();
	marine[1]->show_status();

	std::cout << std::endl
			  << "마린 1 이 마린 2 를 공격! " << std::endl;
	marine[0]->be_attacked(marine[1]->attack());

	marine[0]->show_status();
	marine[1]->show_status();

	delete marine[0];
	delete marine[1];
}