// Includes, namespace and prototypes
#include "template.h"
#include <string>      // Needed for the string class
// Includes, namespace and prototypes
#include "template.h"
#include <string>      // Needed for the string class
using namespace std;   // Needed for the string class
using namespace AGK;
app App;

class Coin
{
private:
   int coinIndex;  // The sprite index
   string imageFile; // The name of the image file
public:
   // Constructor
   Coin(int, string);

   // Mutators
    
   void spriteVisible();
   void createSprite();
   void setPosition(float, float);
   void setX(float);
   void setY(float);
  

   // Accessors
   int getSpriteIndex() const;
   string getImageFile() const;
   float getX() const;
   float getY() const;

   // Destructor
   ~Coin();
};

// The Sprite class constructor accepts as arguments
// the sprite index and the name of the image file,
// and initializes the member variables.
Coin::Coin(int index, string filename)
{
   coinIndex = index;
   imageFile = filename;
}

// The Sprite::createSprite member function 
void Coin::createSprite()
{
   // If the sprite does not already exist,
   // then create it.
   if (!agk::GetSpriteExists(coinIndex))
   {
      agk::CreateSprite(coinIndex, imageFile.c_str());
   }
}

// The Sprite::setPosition member function sets the
// sprite's position.
void Coin::setPosition(float x, float y)
{
   agk::SetSpritePosition(coinIndex, x, y);
}

// The Sprite::setX member function sets the
// sprite's X coordinate.
void Coin::setX(float x)
{
   agk::SetSpriteX(coinIndex, x);
}

// The Sprite::setY member function sets the
// sprite's Y coordinate.
void Coin::setY(float y)
{
   agk::SetSpriteY(coinIndex, y);
}

// The Sprite::getSpriteIndex member function
// returns the sprite's index.
int Coin::getSpriteIndex() const
{
   return coinIndex;
}

// The Sprite::getImageFile member function
// returns the name of the image file used to 
// create this sprite.
string Coin::getImageFile() const
{
   return imageFile;
}

// The Sprite::getX member function returns the
// sprite's X coordinate.
float Coin::getX() const
{
   return agk::GetSpriteX(coinIndex);
}

// The Sprite::getY member function returns the
// sprite's Y coordinate.
float Coin::getY() const
{
   return agk::GetSpriteY(coinIndex);
}

// The Sprite class destructor deletes the
// sprite from memory.
Coin::~Coin()
{
   agk::DeleteSprite(coinIndex);
}

// Constants for the screen resolution
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// Constants for the sprite indices
const int HEADS_INDEX = 1;
const int TAILS_INDEX = 2;

// Constants for the sprite positions
const float HEADS_X = 215;
const float HEADS_Y = 212; 

const float TAILS_X = 215;
const float TAILS_Y = 212;

//Create sprites
Coin heads(HEADS_INDEX, "heads.png");
Coin tails(TAILS_INDEX, "tails.png");

//Set tails invisible at start
void Coin::spriteVisible()
{
	agk::SetSpriteVisible(TAILS_INDEX, 0);
}


// Begin app, called once at the start
void app::Begin( void )
{
   // Set the virtual resolution.
   agk::SetVirtualResolution(SCREEN_WIDTH, SCREEN_HEIGHT);

   // Create the sprites on the screen.
   heads.createSprite();
   tails.createSprite();

   // Position the sprite.
   heads.setPosition(HEADS_X, HEADS_Y);
   tails.setPosition(TAILS_X, TAILS_Y);
}

// Main loop, called every frame
void app::Loop ( void )
{
	int TAILS_VISIBLE = agk::GetSpriteVisible(TAILS_INDEX);

	if(agk::GetRawKeyState(AGK_KEY_SPACE))
	{
		if (TAILS_VISIBLE == 0)
		{
			agk::SetSpriteVisible(TAILS_INDEX, 1);
			agk::SetSpriteVisible(HEADS_INDEX, 0);
		}
		else
		{
			agk::SetSpriteVisible(TAILS_INDEX, 0);
			agk::SetSpriteVisible(HEADS_INDEX, 1);
		}
	}
   // Display the screen.
   agk::Sync();
}

// Called when the app ends
void app::End ( void )
{
}
