#include "plane.h"
#include <GL/glut.h>
#include <math.h>
#include "scene.h"
#define size 10

void move_plane(struct Object* object,double time)
{
    if (object->position.x<-size + 1) {
        object->speed.x *= -1;
    }
    if (object->position.x>size - 1) {
        object->speed.x *= -1;
    }
    if (object->position.y<-size + 1) {
        object->speed.y *= -1;
    }
    if ( object->position.y>size - 1) {
        object->speed.y *= -1;
    }

    object->position.x += object->speed.x * time;
    object->position.y += object->speed.y * time;
}








