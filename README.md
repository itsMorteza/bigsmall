# Big and Small Game  

## Introduction

Welcome to the Big and Small Game, a simple C++ and Qt-based game where the player controls a character that can grow or shrink in size and fire bullets at enemies. The goal is to reach a score of 100 to win the game.

## Game Features

- **Player Control:**
  - Use arrow keys to move the player character.
  - Press Space bar to make the character bigger and Smaller.
  - Press the down arrow to fire bullets at enemies.

- **Scoring:**
  - Score points by hitting enemies with bullets.
  - Reach a score of 10 to win the game.

- **Graphics:**
  - Game assets include images such as "Abr.png," "Ant1.png," "Ant2.png," "Block.png," "Bullet.png," "Flower.png," "Ston-block.png," and more.

## Files and Project Structure

The project is organized into several files and folders:

- **sources:**
  - **game.cpp:** Main game logic and management.
  - **player.cpp:** Player character implementation.
  - **enemy.cpp:** Enemy character implementation.
  - **score.cpp:** Scoring system.
  - **platform.cpp:** Platform elements.
  - **bullet.cpp:** Bullet implementation.
  - **goal.cpp:** Goal-related logic.
  - **main.cpp:** Main entry point for the application.
  
  - **untitled4.pro:** Qt project file.
  - **res.qrc:** Qt resource file.
- **headers:**
  - **game.h:** Main game logic and management headers.
  - **player.h:** Player character implementation headers.
  - **enemy.h:** Enemy character implementation headers.
  - **score.h:** Scoring system headers.
  - **platform.h:** Platform elements headers.
  - **bullet.h:** Bullet implementation headers.
- **resources:**
  - **Abr.png, Ant1.png, Ant2.png, Block.png, Bullet.png, Flower.png, Ston-block.png:** Game images.

## Building and Running

To build and run the game:

0. Install mingw and Qt 5.5.1 from the qt website.
1. Open the project file "untitled4.pro" in Qt Creator.
2. Configure the project for your environment.
3. Build the project.
4. Run the executable.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to modify and distribute the game as per the terms of the license.
