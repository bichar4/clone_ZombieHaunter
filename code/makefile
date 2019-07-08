# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

#target is exectuable so all the object source file is required 
ZombieApp: ZombieArena.o Player.o CreateBackground.o TextureHolder.o Zombie.o CreateHorde.o Bullet.o Pickup.o
	$(CXX) $(CXXFLAGS) -o ZombieApp ZombieArena.o Player.o CreateBackground.o TextureHolder.o Zombie.o CreateHorde.o Bullet.o Pickup.o -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

# The main.o target can be written more simply
#Source is object file so the heade files and the independent C files are added 
ZombieArena.o: CreateBackground.cpp Player.h ZombieArena.h  TextureHolder.h Bullet.h Pickup.h
	$(CXX) $(CXXFLAGS) -c ZombieArena.cpp

Player.o: Player.h
TextureHolder.o: TextureHolder.h
Bullet.o:Bullet.h
ZombieArena.o: Player.h ZombieArena.h TextureHolder.o Zombie.h
createHorde.o: ZombieArena.h Zombie.h
Zombie.o: Zombie.h
Pickup.o:Pickup.h