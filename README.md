# Maze Project

![maze-project](https://github.com/Princecodes4115/Maze_Project/assets/101392395/78b99351-e499-44c2-a42c-7e795e2ed82d)

## Table of Contents
- [Project Description]
- [Requirements]
- [Installation]
- [Usage]
- [Controls]
- [Author]

## Project Description
The Maze Project is a C-based application that simulates a 3D maze using Raycasting and SDL2. It is designed as part of a portfolio to demonstrate skills in low-level programming, graphics rendering, and game development principles.

This project includes:
- Maze generation and rendering using Raycasting.
- SDL2 for window management and rendering.
- A focus on modular, well-organized code with strict style guidelines.

## Requirements
- **Operating System:** Ubuntu 14.04 LTS
- **Compiler:** gcc 4.8.4
- **Libraries:**
  - SDL2
  - SDL2 image (optional)
- **Tools:**
  - Betty (for style checking)

## Installation
1. **Clone the Repository:**
``` sh
  git clone https://github.com/wabkur/alx-maze_project.git
   cd alx-maze_project
```
2. **Install Dependencies: Ensure SDL2 is installed on your system. If not, you can install it using:**
```sh
sudo apt-get update
sudo apt-get install libsdl2-dev
```
3. **Compile the Code: Compile the project using the provided Makefile or compile manually:**
``` sh
gcc -Wall -Werror -Wextra -pedantic ./src/*.c -lm -o maze `sdl2-config --cflags` `sdl2-config --libs`
```

## Usage
- **To start the Maze game, run the compiled binary:**
``` sh
./maze
```

## Controls
- Moving controls: W/S/A/D/

- Move forward: W
- Move backward: S
- Move left: A
- Move right: D

## Author
   **Wabili Tukur:**
  - github: wabkur