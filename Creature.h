#pragma once
#include "Armor.h"
#include "Weapon.h"
#include "Move.h"
#include "Condition.h"

struct BattleStats{
	int currentHealth;
	int healthMod;
	int attackMod;
	int armorMod;
	int agilityMod;
	int energyMod;

	void changeHealth(int val) { 
		currentHealth += val; 
	}

	void addToHealth(int val) { 
		healthMod += val; 
	}

	void addToAttack(int val) { 
		attackMod += val; 
	}

	void addToArmor(int val) { 
		armorMod += val; 
	}

	void addToAgility(int val) { 
		agilityMod += val; 
	}

	void addToEnergy(int val) { 
		energyMod += val; 
	}
};

class Creature
{
public:
	Creature(std::string name, int health, int attack, int armor, int agility, int energy, Armor naturalArmor, Weapon naturalWeapon);
	Creature(void);
	~Creature(void);
	void addMove(Move move);
	Move getMove(int index);

	std::string getName();

	int getStat(std::string name);

	int getMaxHealth();
	int getCurrentHealth();
	void setCurrentHealth(int newHealth);
	int getAttack();
	int getArmor();
	int getAgility();
	int getEnergy();

	Armor getNaturalArmor();
	Weapon getNaturalWeapon();

	bool addCondition(Condition condition);
	std::vector<Condition> getConditions();
	bool hasCondition(std::string name);
	bool minusConditionTurn(std::string name);
	void clearCondition(std::string name);
	void clearAllConditions();

	void setBattleStats();
	BattleStats& getBattleStats();



private:
	std::string _name;

	int _maxHealth;
	int _currentHealth;
	int _attack;
	int _armor;
	int _agility;
	int _energy;

	BattleStats _battleStats;
	std::vector<Condition> _conditions;
	Armor _naturalArmor;
	Weapon _naturalWeapon;
	Move _moveSet[4];
};

