#ifndef CSIGUSZ_H
#define CSIGUSZ_H

#include "utils.h"
#include "scene.h"


void set_csigusz_speed(struct Object* object, double speed);

void rotate_csigusz(struct Object* object, double horizontal);

void move_csigusz(struct Object* object, double time);

void set_csigusz_side_speed(struct Object* object, double speed);

void set_csigusz_scale(struct Object* object,double inc_size);

#endif;