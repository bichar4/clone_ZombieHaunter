#pragma once 
#include <SFML/Graphics.hpp>

using namespace sf;

class Pickup
{
    private:
    //Start value for health pickups 
    const int HEALTH_START_VALUE = 50;
    const int AMMO_START_VALUE = 12;
    const int START_WAIT_TIME = 10;
    const int START_SECONDS_TO_LIVE = 5;

    //The sprite that represeents this pickup
    Sprite m_Sprite;

    //THe arena it exists in 
    IntRect m_Arena;
    //How much is this pickup worth
    int m_Value;

    //What type of pickup is this?
    //1 = Health, 2= ammo
    int m_Type;

    //Handle spawning and dissapearing 
    bool m_Spawned;
    float m_SecondsSinceSpawn;
    float m_SecondsSiceDeSpawn;
    float m_SecondsToLive;
    float m_SecondsToWait;

    //Public prototype go here 
    public:
     Pickup(int type);

     //Prepare a new pickup
     void setArena(IntRect arena);
     void spawn();

     //Check the position of a pickup
     FloatRect getPosition();

     //Get the sprite for drawing 
     Sprite getSprite();

     //Let the pickup update itself each frame 
     void update(float elapsedTime);

     //is this pickup currently spawed
     bool isSpawned();

     //Get the goodness from the pickup
     int gotIt();

     //Upgrade the value of each pickup
     void upgrade();

};

