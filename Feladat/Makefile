all:
	gcc -Iinclude/ src/callbacks.c src/camera.c src/init.c src/main.c src/scene.c src/texture.c src/utils.c src/room.c src/csigusz.c src/plane.c -lSOIL -lobj -lopengl32 -lglu32 -lglut32 -lm -o iroda.exe -Wall -Wextra -Wpedantic

linux:
	gcc -Iinclude/ src/callbacks.c src/camera.c src/init.c src/main.c src/scene.c src/texture.c src/utils.c  src/room.c src/csigusz.c src/plane.c -lSOIL -lobj -lGL -lGLU -lglut -lm -o iroda -Wall -Wextra -Wpedantic
