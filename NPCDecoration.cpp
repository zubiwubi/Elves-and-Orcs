/*Written by Zubaydah Koelemeij, 05 / 12 / 2022 */

#include "NPCDecoration.h"

NPCDecorator::NPCDecorator(NPC * npc)
{
	newNPC = npc;
};

void NPCDecorator::render()
{
	newNPC->render();
}
