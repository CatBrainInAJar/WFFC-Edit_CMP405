#pragma once

struct InputCommands
{
	bool forward;
	bool back;
	bool right;
	bool left;
	bool rotRight;
	bool rotLeft;
	bool rotUp;
	bool rotDown;


	int mousePos_X;
	int mousePos_Y;
	bool mouseMidButton_Down;
	bool mouseLeftButton_Down;
	bool mouseRightButton_Down;

	float mouseDrag_X;//
	float mouseDrag_Y;//

	bool mouseDrag;

	// Terrain
	int terrainMagnitude;
	float innerBrushRadius;
	float outerBrushRadius;

	bool EditModeON_terrain;

};

