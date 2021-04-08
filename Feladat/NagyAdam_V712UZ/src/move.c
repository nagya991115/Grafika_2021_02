#include <math.h>
#include "model.h"
#include "callbacks.h"
#include "move.h"
int movingobject = 0;

void move_object(World* world) {
	
	if(movingobject == 0)
	{	
		int distance[9] = {
			abs((int)(camera.position.x - world->szekreny.position.x)) + abs((int)(camera.position.z - world->szekreny.position.z)),
			abs((int)(camera.position.x - world->szekreny_2.position.x)) + abs((int)(camera.position.z - world->szekreny_2.position.z)),
			abs((int)(camera.position.x - world->desk.position.x)) + abs((int)(camera.position.z - world->desk.position.z)),
			abs((int)(camera.position.x - world->door.position.x)) + abs((int)(camera.position.z - world->door.position.z)),
			abs((int)(camera.position.x - world->logo.position.x)) + abs((int)(camera.position.z - world->logo.position.z)),
			abs((int)(camera.position.x - world->bosschair.position.x)) + abs((int)(camera.position.z - world->bosschair.position.z)),
			abs((int)(camera.position.x - world->chair.position.x)) + abs((int)(camera.position.z - world->chair.position.z)),
			abs((int)(camera.position.x - world->chair2.position.x)) + abs((int)(camera.position.z - world->chair2.position.z)),
			abs((int)(camera.position.x - world->sarokulo.position.x)) + abs((int)(camera.position.z - world->sarokulo.position.z))
		};
		int i =0;
		for(i =0;i<9;i++)
		{
			if(distance[movingobject]>distance[i]) {movingobject = i;}
		}
	}

	if(abs(camera.position.x) < 170 && abs(camera.position.z) < 170)
	{
		switch (movingobject) {
			case 0:
				if (abs((int)(camera.position.x - world->szekreny.position.x)) < 50 && abs((int)(camera.position.z - world->szekreny.position.z)) < 50 && camera.position.y < 150)
				{
					world->szekreny.position.x = camera.position.x + 10;
					world->szekreny.position.z = camera.position.z + 10;

					world->szekreny.material_ambient[0] = camera.position.x / 200;
					world->szekreny.material_ambient[1] = camera.position.y / 200;
					world->szekreny.material_ambient[2] = camera.position.z / 200;
				}

				break;
			case 1:
				if (abs((int)(camera.position.x - world->szekreny_2.position.x)) < 50 && abs((int)(camera.position.z - world->szekreny_2.position.z)) < 50 && camera.position.y < 150)
				{
					world->szekreny_2.position.x = camera.position.x + 10;
					world->szekreny_2.position.z = camera.position.z + 10;

					world->szekreny_2.material_ambient[0] = camera.position.x / 200;
					world->szekreny_2.material_ambient[1] = camera.position.y / 200;
					world->szekreny_2.material_ambient[2] = camera.position.z / 200;
				}

				break;
			case 2:
				if (abs((int)(camera.position.x - world->desk.position.x)) < 50 && abs((int)(camera.position.z - world->desk.position.z)) < 50 && camera.position.y < 150)
				{
					world->desk.position.x = camera.position.x + 10;
					world->desk.position.z = camera.position.z + 10;

					world->desk.material_ambient[0] = camera.position.x / 200;
					world->desk.material_ambient[1] = camera.position.y / 200;
					world->desk.material_ambient[2] = camera.position.z / 200;
				}

				break;
			case 3:
				if (abs((int)(camera.position.x - world->door.position.x)) < 50 && abs((int)(camera.position.z - world->door.position.z)) < 50 && camera.position.y < 150)
				{
					world->door.position.x = camera.position.x + 10;
					world->door.position.z = camera.position.z + 10;

					world->door.material_ambient[0] = camera.position.x / 200;
					world->door.material_ambient[1] = camera.position.y / 200;
					world->door.material_ambient[2] = camera.position.z / 200;
				}

				break;
			case 4:
				if (abs((int)(camera.position.x - world->logo.position.x)) < 50 && abs((int)(camera.position.z - world->logo.position.z)) < 50 && camera.position.y < 150)
				{
					world->logo.position.x = camera.position.x + 10;
					world->logo.position.z = camera.position.z + 10;

					world->logo.material_ambient[0] = camera.position.x / 200;
					world->logo.material_ambient[1] = camera.position.y / 200;
					world->logo.material_ambient[2] = camera.position.z / 200;
				}

				break;
			case 5:
				if (abs((int)(camera.position.x - world->bosschair.position.x)) < 50 && abs((int)(camera.position.z - world->bosschair.position.z)) < 50 && camera.position.y < 150)
				{
					world->bosschair.position.x = camera.position.x + 10;
					world->bosschair.position.z = camera.position.z + 10;

					world->bosschair.material_ambient[0] = camera.position.x / 200;
					world->bosschair.material_ambient[1] = camera.position.y / 200;
					world->bosschair.material_ambient[2] = camera.position.z / 200;
				}

				break;
			case 6:
				if (abs((int)(camera.position.x - world->chair.position.x)) < 50 && abs((int)(camera.position.z - world->chair.position.z)) < 50 && camera.position.y < 150)
				{
					world->chair.position.x = camera.position.x + 10;
					world->chair.position.z = camera.position.z + 10;

					world->chair.material_ambient[0] = camera.position.x / 200;
					world->chair.material_ambient[1] = camera.position.y / 200;
					world->chair.material_ambient[2] = camera.position.z / 200;
				}

				break;
			case 7:
				if (abs((int)(camera.position.x - world->chair2.position.x)) < 50 && abs((int)(camera.position.z - world->chair2.position.z)) < 50 && camera.position.y < 150)
				{
					world->chair2.position.x = camera.position.x + 10;
					world->chair2.position.z = camera.position.z + 10;

					world->chair2.material_ambient[0] = camera.position.x / 200;
					world->chair2.material_ambient[1] = camera.position.y / 200;
					world->chair2.material_ambient[2] = camera.position.z / 200;
				}

				break;
			case 8:
				if (abs((int)(camera.position.x - world->sarokulo.position.x)) < 50 && abs((int)(camera.position.z - world->sarokulo.position.z)) < 50 && camera.position.y < 150)
				{
					world->sarokulo.position.x = camera.position.x + 10;
					world->sarokulo.position.z = camera.position.z + 10;

					world->sarokulo.material_ambient[0] = camera.position.x / 200;
					world->sarokulo.material_ambient[1] = camera.position.y / 200;
					world->sarokulo.material_ambient[2] = camera.position.z / 200;
				}

				break;
		}
	}
}
