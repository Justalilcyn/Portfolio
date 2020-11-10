// Includes, namespace and prototypes
#include "template.h"
using namespace AGK;
app App;

//Global Variables
	const int screenWidth = 640;
	const int screenHeight = 480;
	const int increment = 10;

	//Fish 1 Variable
	const int fish1Index = 1;
	const float fish1Start_X = 0;
	const float fish1Start_Y = 50;
	const float fish1End_X = 540;

	//Fish 2 Variables
	const int fish2Index = 2;
	const float fish2Start_X = 0;
	const float fish2Start_Y = 175;
	const float fish2End_X = 540;

	//Fish 3 Variables
	const int fish3Index = 3;
	const float fish3Start_X = 0;
	const float fish3Start_Y = 300;
	const float fish3End_X = 540;

	//Gamestate variables
	const int moving_right = 0;
	const int moving_left = 1;
	int gameState = moving_right;

// Begin app, called once at the start
void app::Begin( void )
{
	//Set Virtual Resolution
	agk::SetVirtualResolution(screenWidth, screenHeight);

	//Create fish 1 sprite
	agk::CreateSprite(fish1Index, "fish.png");
	agk::SetSpriteScale(fish1Index, 0.2, 0.2);

	//Set fish 1 postion
	agk::SetSpritePosition(fish1Index, fish1Start_X, fish1Start_Y);

	//Create fish 2 sprite
	agk::CreateSprite(fish2Index, "fish.png");
	agk::SetSpriteScale(fish2Index, 0.2, 0.2);

	//Set fish 2 postion
	agk::SetSpritePosition(fish2Index, fish2Start_X, fish2Start_Y);

	//Create fish 3 sprite
	agk::CreateSprite(fish3Index, "fish.png");
	agk::SetSpriteScale(fish3Index, 0.2, 0.2);

	//Set fish 3 postion
	agk::SetSpritePosition(fish3Index, fish3Start_X, fish3Start_Y);
}

// Main loop, called every frame
void app::Loop ( void )
{
	//Get fish 1's current X coordinate
	float fish1X = agk::GetSpriteX(fish1Index);

	//Is the sprite moving to the right side of the screen?
	if (gameState == moving_right)
	{
		//The sprite is moving right. Has it reached the edge of the screen?
		if (fish1X < fish1End_X)
		{
			//Not at the edge yet, so keep moving right.
			agk::SetSpriteX(fish1Index, fish1X + increment);
		}
		else
		{
			//The sprite is at the right edge of the screen.
			//Change the game state to reverse directions.
			gameState = moving_left;
		}
	}
	else
	{
		//The spreite is moving to the left.
		//has it reached the edge of the screen?
		if (fish1X > fish1Start_X)
		{
			//Not at the edge yet, so keep moving left.
			agk::SetSpriteX(fish1Index, fish1X - increment);
		}
		else
		{
			//The sprite is at the left edge of the screen.
			//Change the game state to reverse directions.
			gameState = moving_right;
		}
	}

	//Get fish 2's current X coordinate
	float fish2X = agk::GetSpriteX(fish2Index);

	//Is the sprite moving to the right side of the screen?
	if (gameState == moving_right)
	{
		//The sprite is moving right. Has it reached the edge of the screen?
		if (fish2X < fish2End_X)
		{
			//Not at the edge yet, so keep moving right.
			agk::SetSpriteX(fish2Index, fish2X + increment);
		}
		else
		{
			//The sprite is at the right edge of the screen.
			//Change the game state to reverse directions.
			gameState = moving_left;
		}
	}
	else
	{
		//The spreite is moving to the left.
		//has it reached the edge of the screen?
		if (fish2X > fish2Start_X)
		{
			//Not at the edge yet, so keep moving left.
			agk::SetSpriteX(fish2Index, fish2X - increment);
		}
		else
		{
			//The sprite is at the left edge of the screen.
			//Change the game state to reverse directions.
			gameState = moving_right;
		}
	}

	//Get fish 3's current X coordinate
	float fish3X = agk::GetSpriteX(fish3Index);

	//Is the sprite moving to the right side of the screen?
	if (gameState == moving_right)
	{
		//The sprite is moving right. Has it reached the edge of the screen?
		if (fish3X < fish3End_X)
		{
			//Not at the edge yet, so keep moving right.
			agk::SetSpriteX(fish3Index, fish3X + increment);
		}
		else
		{
			//The sprite is at the right edge of the screen.
			//Change the game state to reverse directions.
			gameState = moving_left;
		}
	}
	else
	{
		//The sprite is moving to the left.
		//has it reached the edge of the screen?
		if (fish1X > fish1Start_X)
		{
			//Not at the edge yet, so keep moving left.
			agk::SetSpriteX(fish3Index, fish3X - increment);
		}
		else
		{
			//The sprite is at the left edge of the screen.
			//Change the game state to reverse directions.
			gameState = moving_right;
		}
	}

	//Display the screen.
	agk::Sync();
}

// Called when the app ends
void app::End ( void )
{
}
