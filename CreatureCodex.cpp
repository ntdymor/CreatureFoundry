#include "CreatureCodex.h"


CreatureCodex::CreatureCodex(void){
}


CreatureCodex::~CreatureCodex(void){
}

void CreatureCodex::init(){
	_armorCodex.init();
	_weaponCodex.init();
	_moveCodex.init();
	Creature simpleCrab = Creature("Cribble", 20, 20, 20, 20, 100, _armorCodex.getArmor(0), _weaponCodex.getWeapon(0));
	simpleCrab.addMove(_moveCodex.getMove(0));
	simpleCrab.addMove(_moveCodex.getMove(1));
	simpleCrab.addMove(_moveCodex.getMove(2));
	simpleCrab.addMove(_moveCodex.getMove(3));
	_creatureList.push_back(simpleCrab);

	Creature simpleCrab2 = Creature("Enemy Cribble", 20, 20, 20, 20, 100, _armorCodex.getArmor(0), _weaponCodex.getWeapon(0));
	simpleCrab2.addMove(_moveCodex.getMove(0));
	simpleCrab2.addMove(_moveCodex.getMove(1));
	simpleCrab2.addMove(_moveCodex.getMove(2));
	simpleCrab2.addMove(_moveCodex.getMove(3));

	_creatureList.push_back(simpleCrab2);
}

Creature CreatureCodex::getCreature(int index){
	return _creatureList[index];	
}