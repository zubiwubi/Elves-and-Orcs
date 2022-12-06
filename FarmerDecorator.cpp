/*Zubaydah Koelemeij, 05/12/2022*/

#include "FarmerDecorator.h"

Farmer::Farmer(NPC * npc) : NPCDecorator(npc) {}

void Farmer::render()
{
	NPCDecorator::render();
	std::cout << "+ Farmer job" << std::endl; //render farmer job specification
}