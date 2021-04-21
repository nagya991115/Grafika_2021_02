#include "csigusz.h"
#include <GL/glut.h>
#include <math.h>
#include "scene.h"
#define size 10


void move_csigusz(struct Object* object, double time)
{
    double angle;
    double side_angle;
    angle = degree_to_radian(object->rotation.z);
    side_angle = degree_to_radian(object->rotation.z + 90.0);

	if (!(object->position.x>size - 1 || object->position.x<-size + 1 || object->position.y<-size + 1 || object->position.y>size - 1))
	{
		object->prev_position = object->position;
		object->position.x += cos(angle) * object->speed.y * time;
		object->position.y += sin(angle) * object->speed.y * time;
		object->position.x += cos(side_angle) * object->speed.x * time;
		object->position.y += sin(side_angle) * object->speed.x * time;
	} else {
		object->position = object->prev_position;
	}
    
}

void rotate_csigusz(struct Object* object, double horizontal)
{
    object->rotation.z += horizontal;
    if (object->rotation.z < 0) {
        object->rotation.z += 360.0;
    }

    if (object->rotation.z > 360.0) {
        object->rotation.z -= 360.0;
    }
}

void set_csigusz_speed(struct Object* object, double speed)
{
    object->speed.y = speed;
}

void set_csigusz_side_speed(struct Object* object, double speed)
{
    object->speed.x  = speed;
}

void set_csigusz_scale(struct Object* object,double inc_size)
{
    object -> scale.x += inc_size;
    object -> scale.y += inc_size;
    object -> scale.z += inc_size;


}
