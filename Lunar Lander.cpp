// Includes, namespace and prototypes
#include "template.h"
using namespace AGK;
app App;

//Global Constants
const int ScreenWidth = 640;
const int ScreenHeight = 480;
const int MoonIndex = 1;
const int LandingPadIndex = 2;
const int LanderIndex = 3;

// Begin app, called once at the start
void app::Begin( void )
{
	//Set Virtual Resolution
	agk::SetVirtualResolution(ScreenWidth, ScreenHeight);

	//Create Moon sprite
	agk::CreateSprite(MoonIndex, "Moon.png");
	agk::SetSpritePosition(MoonIndex, 0, 0);
	agk::SetSpriteScale(MoonIndex, 0.7, .7);

	//Create Landing Pad
	agk::CreateSprite(LandingPadIndex, "landing pad.png");
	agk::SetSpritePosition(LandingPadIndex, 50, 450);
	agk::SetSpriteScale(LandingPadIndex, 1, 1);

	//Create Lander sprite
	agk::CreateSprite(LanderIndex, "Lander.png");
	agk::SetSpritePosition(LanderIndex, 300, 375);
	agk::SetSpriteScale(LanderIndex, 0.7, 0.7);


	//Display Screen
	agk::Sync();
}

// Main loop, called every frame
void app::Loop ( void )
{
	//Get input
	float DirectionX = agk::GetDirectionX();
	float DirectionY = agk::GetDirectionY();

	//Get Lander Position 
	float LanderX = agk::GetSpriteX(LanderIndex);
	float LanderY = agk::GetSpriteY(LanderIndex);

	int SpaceHold = agk::GetRawKeyState(AGK_KEY_SPACE);
	if (SpaceHold == 1)
	{

		//Calculate Lander Movement
		float MoveX = LanderX + DirectionX * 2;
		float MoveY = LanderY + DirectionY;

		agk::SetSpritePosition(LanderIndex, MoveX, MoveY);

		agk::Sync();

	}

	else if (SpaceHold == 0 && LanderY < 375)
	{
		agk::SetSpritePosition(LanderIndex, LanderX, LanderY + 0.5);
	}

	if (LanderX <= 70 && LanderY <= 470)
	{
		agk::Print("Congratulations you have landed!");
	}


	//Display Screen
	agk::Sync();
}

// Called when the app ends
void app::End ( void )
{
}
