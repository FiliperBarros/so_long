<p align="center">
  <img src="assets/demo.gif" alt="Demo of my game" width="600" />
</p>

<h1 align="center"> so_long<br><br></h1>

## 📝 Overview

The goal of this project is to create a simple 2D game where the player navigates a character through a map to collect items and reach an exit.  
The game focuses on learning **game programming fundamentals** like map parsing, rendering, input handling, and collision detection.

---

## 🎮 Gameplay

- The player moves in four directions (up, down, left, right) on a grid-based map.
- The objective is to **collect all collectibles** and then reach the exit.
- The map is defined in a text file with specific characters representing walls, collectibles, the player, and the exit.
- The game ends when the player successfully reaches the exit after collecting everything.

---

## 🧱 Map Format

- The map is loaded from a `.ber` file.
- Walls are represented by `1`.
- Empty spaces are `0`.
- Collectibles are `C`.
- Player start position is `P`.
- Exit is `E`.

The map must be rectangular, surrounded by walls, and contain at least one collectible, one player start, and one exit.

---

## 🧠 Implementation Details

- Built using the **MiniLibX** graphics library.
- Handles input, rendering, and game state logic.
- Includes error checking for map validity and player moves.
- Tracks and displays the number of player moves.

---

## 🚀 Usage

### 🛠 Compile:

Compile with:

```bash
make
```

Run with:
```bash
./so_long [map.ber]
```

Example
```bash
./solong map1.ber
```


