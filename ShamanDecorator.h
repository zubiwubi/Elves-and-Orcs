/*Zubaydah Koelemeij, 05/12/2022*/

#pragma once
#include "NPCDecoration.h"

class Shaman : public NPCDecorator
{
public:
	Shaman(NPC* npc);
	void render();
};
#pragma once
