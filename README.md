# Kitty JumpS (Using C++ and SFML)

## Description
A simple doodle Cat Jump game. **"Jump on platforms, climb higher and avoid falling!"**


The cat moves left and right to land on platforms while the cat jumps automatically.  
The screen scrolls upward as the cat climbs higher.

Landing on platforms keeps the cat in the game and increases the score.  
Falling off the screen ends the game and pressing **R** restarts it.


## Video
[Game Video](https://github.com/UPOMA16/game-project/blob/e89b3ac776f584c64f2f7172722350727e6765e7/Game%20Play%20Video.mp4)

## Screenshot
![](https://github.com/UPOMA16/game-project/blob/cf40a1c2efa486229a8ab88438d02496b65d0d3e/Game%20start%20-.png)
![](https://github.com/UPOMA16/game-project/blob/cf40a1c2efa486229a8ab88438d02496b65d0d3e/Game%20over%20-.png))

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
