#pragma once
#include "skill.h"

class Character {
private:
	float maxHealth;
	float maxMana;
	float health;
	float mana;
	float attack;
	float speed;
	float mAttack;
	const char* name;
	Skill skills[];

public:
	void Set_Name(const char* name) { this->name = name; }
	void Set_Speed(float speed) { this->speed = speed; }
	void Set_Attack(float attack) { this->attack = attack; }
	void Set_mAttack(float mAttack) { this->mAttack = mAttack; }
	void Set_Health(float health) { this->health = health; }
};