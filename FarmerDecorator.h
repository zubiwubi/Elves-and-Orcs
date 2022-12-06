/*Zubaydah Koelemeij, 05/12/2022*/

#pragma once
#include "NPCDecoration.h"

class Farmer : public NPCDecorator
{
public:
	Farmer(NPC* npc);
	void render();
};
