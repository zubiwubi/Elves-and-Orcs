/*Written by Zubaydah Koelemeij, 05 / 12 / 2022 */

#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "SoldierDecorator.h"
#include "FarmerDecorator.h"
#include "ShamanDecorator.h"

int main() /*First I choose the NPC species I would like, then I assign the job(s)*/
{
	NPC * unemployedElf = new Elf();
	unemployedElf->render();

	NPC * employedElf = new Soldier(new Elf);
	employedElf->render();

	NPC * busyElf = new Shaman(new Farmer(new Elf()));
	busyElf->render();

	NPC* unemployedOrc = new Orc();
	unemployedOrc->render();

	NPC* employedOrc = new Farmer(new Orc);
	employedOrc->render();

	NPC* busyOrc = new Soldier(new Shaman(new Orc()));
	busyOrc->render();

	return 0;
}