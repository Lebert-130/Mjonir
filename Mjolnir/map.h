#ifndef MAP_H
#define MAP_H

typedef struct {
	PointClass pointclass;
	Vector pos;
} Entity;

//TODO: Make colors their own type instead of using Vector
struct Brush {
	Vector min;
	Vector max;
	Vector editorColor;
	GLuint texture;

	bool operator==(const Brush &b2) const { return min == b2.min && max == b2.max && texture == b2.texture; }
};

extern bool enterKeyCaptured;

#endif