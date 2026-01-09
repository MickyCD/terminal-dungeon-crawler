# text-adventure-game

This is a text-adventure game for the terminal. Map generates as you reach the border, enemies follow you each turn with path-finding logic.

# Most parts are not implemented yet

## Gameplay
- Enter `W`, `A`, `S`, `D` to move
- Pick up items and fight enemies
- Type `X` to quit

## Features
- Chests with random drops.
- Map generated using logic inspired by Conway's Game of Life. 
- Basic game loop and input handling

## Setting Up
1. System Libraries (Linux / WSL)
You need the C++ compiler, Python developer headers, and SQLite3 libraries.
- In 'bash' run theses lines individually if you don't have these installed:
  sudo apt-get update
  sudo apt-get install g++ python3-dev libsqlite3-dev\
  pip3 install pybind11
2. Clone the repository
3. Run 'make' in the repository
4. Run the executable


