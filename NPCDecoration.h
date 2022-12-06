/*Written by Zubaydah Koelemeij, 05 / 12 / 2022 */

#pragma once
#include "NPC.h"

class NPCDecorator : public NPC
{
private:
	NPC* newNPC;
public:
	NPCDecorator(NPC* npc);
	void render();
};
