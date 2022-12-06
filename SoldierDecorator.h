/*Zubaydah Koelemeij, 05/12/2022*/

#pragma once
#include "NPCDecoration.h"

class Soldier : public NPCDecorator
{
public:
	Soldier(NPC* npc);
	void render();
};