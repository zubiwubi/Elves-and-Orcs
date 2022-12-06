/*Written by Zubaydah Koelemeij, 05 / 12 / 2022 */

#pragma once
#include "NPC.h"

class NPCDecorator : public NPC
{
private:
	NPC* npc;
public:
	NPCDecorator(NPC *n) { npc = n; }
	void render() { npc->render(); }
};
