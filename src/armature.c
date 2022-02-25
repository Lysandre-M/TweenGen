#include "armature.h"

ctrlPoint createCtrlPoint(char *name, unsigned int x, unsigned int y, unsigned int frame) {
	ctrlPoint newCtrlPoint;

	/* copy of the name */
	newCtrlPoint.name = (char *)malloc(strlen(name) * sizeof(char));
	strcpy(newCtrlPoint.name, name);

	/* storing coordinates */
	newCtrlPoint.x = x;
	newCtrlPoint.y = y;

	/* storing frame */
	newCtrlPoint.frame = frame;

	return newCtrlPoint;
}

void printCtrlPoint(ctrlPoint cp) {
	fprintf(stderr, "**********************************\n");
	fprintf(stderr, "[DEBUG] Control point : %s\n", cp.name);
	fprintf(stderr, "[DEBUG] Coordinates   : (%d, %d)\n", cp.x, cp.y);

	/* do the neighbor infos later */

	fprintf(stderr, "**********************************\n");
}