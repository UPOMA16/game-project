# game-project
[Game Video](**https://raw.githubusercontent.com/ariba450/project/8de5cdb63990150f2ba61e029439ff28199a4d71/game.gif**)
Doodle Game (C++ and SFML)
A simple Doodle Jump game. Jump on platforms, climb higher and avoid falling!
Requirements
Microsoft Visual Studio
SFML 2.5+
Windows
C++
Setup
Install SFML and add include & lib paths in Visual Studio.
Link SFML libraries: sfml-graphics-d.lib, sfml-window-d.lib, sfml-system-d.lib
Copy .dll files from SFML/bin/ to your Debug/Release folder.
 Images/ folder and font file must be inside the game folder.
Controls
Left Arrow → Move left
Right Arrow → Move right
R → Restart after game over
(The character jumps automatically)
Project Structure
DoodleGame
 main.cpp
 Images
Background.png
platform.png 
doodle.png
AovelSansRounded-rdDL.ttf
 README.md

Setting Up SFML in Microsoft Visual Studio 
Download SFML
 Get SFML-2.5.1 and extract it.
Create a Folder for the Game
 Put the C++ files there and add the extracted SFML-2.5.1 folder inside the project.
Set Up VS Code
Install the C/C++ Extension
Link SFML by adding:
Include path → SFML/include
Library path → SFML/lib
Link the libraries:
sfml-graphics
sfml-window
sfml-system
Copy DLL Files
 From SFML/bin, copy all .dll files next to your .exe so the game runs.
