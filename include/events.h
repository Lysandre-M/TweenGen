/** Events */
#include "interface.h"
#include "interpolator.h"

#ifndef __EVENTS__
#define __EVENTS__

	typedef enum {
		NONE,
		TOOLBAR,
		MENU,
		NEXT_FRAME,
		PREV_FRAME,
		GENERATE,
		SAVE,
		QUIT
	} Event;

	typedef enum {
		EDIT_CTRL_POINTS
	} Toolbar;

	/* modes */
	typedef struct {
		int onionSkin;
		int editMode;
	} State;

	/** Returns a state with modes set to 0 or 1. */
	State initState();

	/** Returns 1 if the given coordinates are on a point of the armature
	    and 0 otherwise. Stores the selected point into "point". */
	int hasSelectedPoint(int xMouse, int yMouse, Armature armature, CtrlPoint *point);

	/** Does an action according to a given event. 
	 *  Returns 1 if an action was performed, 0 othewise and
	 *  -1 if the user quits the program. */
	int getAndApplyEvent(unsigned int windowWidth, unsigned int windowHeight, FrameSeq *frame, State *s);



#endif