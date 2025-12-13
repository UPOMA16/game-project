# Doodle Jump (Using C++ and SFML)

## Description
A simple Doodle Jump game. Jump on platforms, climb higher and avoid falling!

## Video
[Game Video](https://raw.githubusercontent.com/ariba450/project/8de5cdb63990150f2ba61e029439ff28199a4d71/game.gif)

## Screenshot
![](https://github.com/UPOMA16/game-project/blob/4d5656de07e6b66b26765fe3f83f7e008997323e/Game%20Start.png)
![](https://github.com/UPOMA16/game-project/blob/4d5656de07e6b66b26765fe3f83f7e008997323e/Game%20Over.png)

## Controls
- Left Arrow → Move left
- Right Arrow → Move right
- R → Restart after game over

## Requirements
- Microsoft Visual Studio
- SFML 2.5+
- Windows
- C++

## Setup
1. Install SFML and add include & lib paths in Visual Studio.
2. Link SFML libraries: sfml-graphics-d.lib, sfml-window-d.lib, sfml-system-d.lib
3. Copy .dll files from SFML/bin/ to your Debug/Release folder.
4. Images/ folder and font file must be inside the game folder.

## Project Structure
DoodleGame
-  main.cpp
- Images
   - Background.png
    - platform.png
    - doodle.png
- AovelSansRounded-rdDL.ttf
- README.md

## Setting Up SFML in Microsoft Visual Studio
1. Download SFML
-  Get SFML-2.5.1 and extract it.
2. Create a Folder for the Game
 - Put the C++ files there and add the extracted SFML-2.5.1 folder inside the project.
3. Set Up VS Code

- Install the C/C++ Extension

- Link SFML by adding:
     Include path → SFML/include


    Library path → SFML/lib

  
    Link the libraries:


        sfml-graphics


        sfml-window


        sfml-system
4. Copy DLL Files
 - From SFML/bin, copy all .dll files next to your .exe so the game runs.


## Owner
- FATIHA TASNIM UPOMA(2023831012)
- ARIBA SHARAF CHOWDHURY(2023831051)
