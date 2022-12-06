/*Zubaydah Koelemeij, 05/12/2022*/

#include "SoldierDecorator.h"

Soldier::Soldier(NPC * npc) : NPCDecorator(npc) {}

void Soldier::render()
{
	NPCDecorator::render();
	std::cout << "+ Soldier job" << std::endl; //render soldier job specification
}