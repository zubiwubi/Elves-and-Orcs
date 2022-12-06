/*Zubaydah Koelemeij, 05/12/2022*/

#include "ShamanDecorator.h"

Shaman::Shaman(NPC * npc) : NPCDecorator(npc) {}

void Shaman::render()
{
	NPCDecorator::render();
	std::cout << "+ Shaman job" << std::endl; //render shaman job specification
}