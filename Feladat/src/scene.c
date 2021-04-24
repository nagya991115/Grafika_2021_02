#include <GL/glut.h>
#include <obj/load.h>
#include <obj/draw.h>
#include "scene.h"
#include "camera.h"
#include "room.h"

void init_models(Scene* scene)
{
	load_model(&(scene->plane.model), "models/plane.obj");
	scene->plane.speed.x = 3;
	scene->plane.speed.y = 1;

	load_model(&(scene->person.model), "models/person.obj");
	scene->person.scale.x = 0.2;
	scene->person.scale.y = 0.2;
	scene->person.scale.z = 0.2;

	load_model(&(scene->fan.model), "models/fan.obj");
	
	load_model(&(scene->furnitures[0].model), "models/bosschair.obj");	
	load_model(&(scene->furnitures[1].model), "models/desk.obj");
	load_model(&(scene->furnitures[2].model), "models/chair.obj");
	load_model(&(scene->furnitures[3].model), "models/sarokulo.obj");
	load_model(&(scene->furnitures[4].model), "models/szekreny.obj");
	load_model(&(scene->furnitures[5].model), "models/szekreny_2.obj");
	load_model(&(scene->furnitures[6].model), "models/door.obj");
	load_model(&(scene->furnitures[7].model), "models/flowerpot.obj");
	load_model(&(scene->furnitures[8].model), "models/plant.obj");
	load_model(&(scene->furnitures[9].model), "models/fan_holder.obj");
}

void set_scale(Scene* scene)
{
	scene->furnitures[0].scale.x = 1.5f;
	scene->furnitures[0].scale.y = 1.5f;
	scene->furnitures[0].scale.z = 1.5f;

	scene->furnitures[1].scale.x = 0.09f;
	scene->furnitures[1].scale.y = 0.09f;
	scene->furnitures[1].scale.z = 0.09f;

	scene->furnitures[2].scale.x = 0.035f;
	scene->furnitures[2].scale.y = 0.035f;
	scene->furnitures[2].scale.z = 0.035f;

	scene->furnitures[3].scale.x = 0.07f;
	scene->furnitures[3].scale.y = 0.07f;
	scene->furnitures[3].scale.z = 0.07f;

	scene->furnitures[4].scale.x = 0.004f;
	scene->furnitures[4].scale.y = 0.004f;
	scene->furnitures[4].scale.z = 0.004f;

	scene->furnitures[5].scale.x = 2.0f;
	scene->furnitures[5].scale.y = 5.0f;
	scene->furnitures[5].scale.z = 5.0f;

	scene->furnitures[6].scale.x = 0.04f;
	scene->furnitures[6].scale.y = 0.04f;
	scene->furnitures[6].scale.z = 0.04f;

	scene->furnitures[7].scale.x = 0.2f;
	scene->furnitures[7].scale.y = 0.2f;
	scene->furnitures[7].scale.z = 0.2f;

	scene->furnitures[8].scale.x = 0.02f;
	scene->furnitures[8].scale.y = 0.02f;
	scene->furnitures[8].scale.z = 0.02f;

	scene->furnitures[9].scale.x = 0.2f;
	scene->furnitures[9].scale.y = 0.2f;
	scene->furnitures[9].scale.z = 0.2f;
}

void set_position(Scene* scene)
{
	scene->furnitures[0].position.x = -8;
	scene->furnitures[0].position.y = 8;
	scene->furnitures[0].position.z = -5;

	scene->furnitures[1].position.x = -5;
	scene->furnitures[1].position.y = 5;
	scene->furnitures[1].position.z = -5;

	scene->furnitures[2].position.x = -3;
	scene->furnitures[2].position.y = 3;
	scene->furnitures[2].position.z = -5;

	scene->furnitures[3].position.x = 7;
	scene->furnitures[3].position.y = -5.5;
	scene->furnitures[3].position.z = -5;

	scene->furnitures[4].position.x = 2;
	scene->furnitures[4].position.y = 9.5;
	scene->furnitures[4].position.z = 2;

	scene->furnitures[5].position.x = -5;
	scene->furnitures[5].position.y = -9;
	scene->furnitures[5].position.z = -0.5;

	scene->furnitures[6].position.x = -10;
	scene->furnitures[6].position.y = -3;
	scene->furnitures[6].position.z = -5;

	scene->furnitures[7].position.x = 7;
	scene->furnitures[7].position.y = 7;
	scene->furnitures[7].position.z = -5;

	scene->furnitures[8].position.x = 7;
	scene->furnitures[8].position.y = 7;
	scene->furnitures[8].position.z = -4;

	scene->furnitures[9].position.x = 0;
	scene->furnitures[9].position.y = 0;
	scene->furnitures[9].position.z = 3.5;

	scene->fan.position.x = 0;
	scene->fan.position.y = 0;
	scene->fan.position.z = 3.5;

	scene->person.position.x = 0;
	scene->person.position.y = 0;
	scene->person.position.z = -5;

	scene->plane.position.x = 0;
	scene->plane.position.y = 0;
	scene->plane.position.z = 2;
}

void init_textures(Scene* scene)
{	
	scene->texture_id[0] = load_texture("Textures/bosschair.jpg"); 	
	scene -> furnitures[0].texture = 0;
 	scene->texture_id[1] = load_texture("Textures/chair.jpg");
	scene -> furnitures[1].texture = 1;
	scene->texture_id[2] = load_texture("Textures/chair_.jpg"); 
	scene -> furnitures[2].texture = 2;
	scene->texture_id[3] = load_texture("Textures/sofa.jpg");
	scene -> furnitures[3].texture = 3;
	scene->texture_id[4] = load_texture("Textures/chair.jpg");
	scene -> furnitures[4].texture = 4;
	scene->texture_id[5] = load_texture("Textures/szekreny.jpg");
	scene -> furnitures[5].texture = 5;
	scene->texture_id[6] = load_texture("Textures/szekreny.jpg");
	scene -> furnitures[6].texture = 6;
	scene->texture_id[7] = load_texture("Textures/szekreny.jpg");
	scene -> furnitures[7].texture = 7;
	scene->texture_id[8] = load_texture("Textures/cactus.jpg");
	scene -> furnitures[8].texture = 8;
	scene->texture_id[9] = load_texture("Textures/szekreny.jpg");
	scene -> furnitures[9].texture = 9;
	scene->texture_id[10] = load_texture("Textures/snail.jpg");
	scene->texture_id[11] = load_texture("Textures/help.jpg"); 
}
void set_rotation(Scene* scene)
{
	scene->furnitures[0].rotation_1[0] = 90;
	scene->furnitures[0].rotation_1[1] = 1;
	scene->furnitures[0].rotation_1[2] = 0;
	scene->furnitures[0].rotation_1[3] = 0;

	scene->furnitures[0].rotation_2[0] = 45;
	scene->furnitures[0].rotation_2[1] = 0;
	scene->furnitures[0].rotation_2[2] = 1;
	scene->furnitures[0].rotation_2[3] = 0;

	scene->furnitures[1].rotation_1[0] = 90;
	scene->furnitures[1].rotation_1[1] = 1;
	scene->furnitures[1].rotation_1[2] = 0;
	scene->furnitures[1].rotation_1[3] = 0;

	scene->furnitures[1].rotation_2[0] = 45;
	scene->furnitures[1].rotation_2[1] = 0;
	scene->furnitures[1].rotation_2[2] = 1;
	scene->furnitures[1].rotation_2[3] = 0;

	scene->furnitures[2].rotation_1[0] = 90;
	scene->furnitures[2].rotation_1[1] = 1;
	scene->furnitures[2].rotation_1[2] = 0;
	scene->furnitures[2].rotation_1[3] = 0;

	scene->furnitures[2].rotation_2[0] = 225;
	scene->furnitures[2].rotation_2[1] = 0;
	scene->furnitures[2].rotation_2[2] = 1;
	scene->furnitures[2].rotation_2[3] = 0;

	scene->furnitures[3].rotation_1[0] = 90;
	scene->furnitures[3].rotation_1[1] = 1;
	scene->furnitures[3].rotation_1[2] = 0;
	scene->furnitures[3].rotation_1[3] = 0;

	scene->furnitures[3].rotation_2[0] = 270;
	scene->furnitures[3].rotation_2[1] = 0;
	scene->furnitures[3].rotation_2[2] = 1;
	scene->furnitures[3].rotation_2[3] = 0;

	scene->furnitures[4].rotation_1[0] = 90;
	scene->furnitures[4].rotation_1[1] = 0;
	scene->furnitures[4].rotation_1[2] = 0;
	scene->furnitures[4].rotation_1[3] = 1;

	scene->furnitures[4].rotation_2[0] = 270;
	scene->furnitures[4].rotation_2[1] = 0;
	scene->furnitures[4].rotation_2[2] = 1;
	scene->furnitures[4].rotation_2[3] = 0;

	scene->furnitures[5].rotation_1[0] = 270;
	scene->furnitures[5].rotation_1[1] = 0;
	scene->furnitures[5].rotation_1[2] = 0;
	scene->furnitures[5].rotation_1[3] = 1;

	scene->furnitures[5].rotation_2[0] = 270;
	scene->furnitures[5].rotation_2[1] = 0;
	scene->furnitures[5].rotation_2[2] = 1;
	scene->furnitures[5].rotation_2[3] = 0;

	scene->furnitures[6].rotation_1[0] = 270;
	scene->furnitures[6].rotation_1[1] = 0;
	scene->furnitures[6].rotation_1[2] = 0;
	scene->furnitures[6].rotation_1[3] = 1;

	scene->furnitures[6].rotation_2[0] = 0;
	scene->furnitures[6].rotation_2[1] = 0;
	scene->furnitures[6].rotation_2[2] = 0;
	scene->furnitures[6].rotation_2[3] = 0;

	scene->furnitures[7].rotation_1[0] = 90;
	scene->furnitures[7].rotation_1[1] = 1;
	scene->furnitures[7].rotation_1[2] = 0;
	scene->furnitures[7].rotation_1[3] = 0;

	scene->furnitures[7].rotation_2[0] = 0;
	scene->furnitures[7].rotation_2[1] = 0;
	scene->furnitures[7].rotation_2[2] = 0;
	scene->furnitures[7].rotation_2[3] = 0;

	scene->furnitures[8].rotation_1[0] = 90;
	scene->furnitures[8].rotation_1[1] = 0;
	scene->furnitures[8].rotation_1[2] = 0;
	scene->furnitures[8].rotation_1[3] = 1;

	scene->furnitures[8].rotation_2[0] = 0;
	scene->furnitures[8].rotation_2[1] = 0;
	scene->furnitures[8].rotation_2[2] = 0;
	scene->furnitures[8].rotation_2[3] = 0;

	scene->furnitures[9].rotation_1[0] = 90;
	scene->furnitures[9].rotation_1[1] = 1;
	scene->furnitures[9].rotation_1[2] = 0;
	scene->furnitures[9].rotation_1[3] = 0;

	scene->furnitures[9].rotation_2[0] = 0;
	scene->furnitures[9].rotation_2[1] = 0;
	scene->furnitures[9].rotation_2[2] = 0;
	scene->furnitures[9].rotation_2[3] = 0;


}

void init_scene(Scene* scene)
{
	init_models(scene);
	set_position(scene);
	set_scale(scene);
	set_rotation(scene);
	init_textures(scene);
	scene->light=0.7f;
}

void set_lighting(Scene* scene)
{
	float ambient_light[4];
	float diffuse_light[4];
	float specular_light[4];
	float position[4];

	ambient_light[0] = scene->light;
	ambient_light[1] = scene->light;
	ambient_light[2] = scene->light;
	ambient_light[3] = 1.0f;

	diffuse_light[0] = scene->light;
	diffuse_light[1] = scene->light;
	diffuse_light[2] = scene->light;
	diffuse_light[3] = 1.0f;

	specular_light[0] = scene->light;
	specular_light[1] = scene->light;
	specular_light[2] = scene->light;
	specular_light[3] = 1.0f;

	position[0] = 0.0f;
	position[1] = 0.0f;
	position[2] = 10.0f;
	position[3] = 0.0f;

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient_light);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specular_light);
    glLightfv(GL_LIGHT0, GL_POSITION, position);
}

void draw_scene(Scene* scene)
{
	room_draw(scene, 10.0f);
	glEnable(GL_TEXTURE_2D);
	set_lighting(scene);
	int i = 0;
	for(i=0;i<10;i++)
	{
		glBindTexture(GL_TEXTURE_2D, scene->texture_id[scene->furnitures[i].texture]);
		glPushMatrix();
		glTranslatef(scene->furnitures[i].position.x, scene->furnitures[i].position.y, scene->furnitures[i].position.z);
		glRotatef(scene->furnitures[i].rotation_1[0], scene->furnitures[i].rotation_1[1], scene->furnitures[i].rotation_1[2], scene->furnitures[i].rotation_1[3]);
		glRotatef(scene->furnitures[i].rotation_2[0], scene->furnitures[i].rotation_2[1], scene->furnitures[i].rotation_2[2], scene->furnitures[i].rotation_2[3]);
		glScalef(scene->furnitures[i].scale.x, scene->furnitures[i].scale.y, scene->furnitures[i].scale.z);
		draw_model(&(scene->furnitures[i].model));
		glPopMatrix();
	}

	glBindTexture(GL_TEXTURE_2D,  scene->texture_id[9]);
	glPushMatrix();
    glTranslatef(scene->fan.position.x,scene->fan.position.y,scene->fan.position.z);
	glRotatef(90, 1, 0, 0);
	glRotatef(0, 0, 0, 0);
	glScalef(0.2f, 0.2f, 0.2f);
	glRotatef(scene->fan.rotation.z, 0, 1, 0);
    draw_model(&(scene->fan.model));
    glPopMatrix();

	glBindTexture(GL_TEXTURE_2D,  scene->texture_id[10]);
	glPushMatrix();
    glTranslatef(scene->person.position.x,scene->person.position.y,scene->person.position.z);
	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 1, 0);
	glRotatef(scene->person.rotation.z, 0, 1, 0);
	glScalef(scene->person.scale.x, scene->person.scale.y, scene->person.scale.z);
    draw_model(&(scene->person.model));
    glPopMatrix();

	glBindTexture(GL_TEXTURE_2D,  scene->texture_id[7]);
	glPushMatrix();
    glTranslatef(scene->plane.position.x,scene->plane.position.y,scene->plane.position.z);
	glRotatef(90, 0, 0, 1);
	glScalef(0.4f,0.4f, 0.4f);
    draw_model(&(scene->plane.model));
    glPopMatrix();
	
	glDisable(GL_TEXTURE_2D);
}