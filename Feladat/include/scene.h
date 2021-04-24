#ifndef SCENE_H
#define SCENE_H

#include "camera.h"
#include "texture.h"
#include "utils.h"
#include <obj/model.h>
#include "room.h"


typedef struct Furniture
{
	Model model;
	vec3 position;
	vec3 scale;
	GLuint texture;
	GLuint rotation_1[4];
	GLuint rotation_2[4];
} Furniture;


typedef struct Object
{
	Model model;
	vec3 position;
	vec3 scale;
	vec3 speed;
	vec3 rotation;
	vec3 prev_position;
} Object;

typedef struct Scene
{
	Furniture furnitures[10];
	Object fan;
	Object person;
	Object plane;
    GLuint texture_id[12];
	float light;
} Scene;


/*void move_object(Scene* scene,Camera* camera);*/
/**
 * Initialize the scene by loading models.
 */
void init_scene(Scene* scene);

/**
 * Set the lighting of the scene.
 */
void set_lighting(Scene* scene);

/**
 * Set the current material.
 */
/*void set_material(const Material* material);*/

/**
 * Draw the scene objects.
 */
void draw_scene(Scene* scene);

void set_position(Scene* scene);
void set_scale(Scene* scene);
void init_models(Scene* scene);
void init_textures(Scene* scene);
void set_rotation(Scene* scene);
#endif /* SCENE_H */
