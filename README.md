# Piano Key Sound Player

## Overview

Welcome to the **Piano Key Sound Player**! This interactive C++ console application allows you to play different piano sounds by pressing specific keyboard keys.This describes the concept and working applied in many piano applications . Each key triggers a unique sound file, and the program will continue to play sounds until the user presses 'Q' to quit.

## Features

- **Sound Playback**: Each key ('a', 'h', 'j', 'u', 'd', 's', 'b', 'm', 'v', 'g') corresponds to a unique sound file (e.g., `a.wav`, `h.wav`).You can add more files for more keys.
- **Continuous Operation**: The program runs in a loop, allowing you to play sounds repeatedly until you choose to exit.
- **Simple Interface**: User-friendly console input prompts to press any key to play and 'Q' to quit.

## How to Use

1. **Run the Program**: Execute the compiled program in your preferred C++ development environment or compile and run it using your terminal/command prompt.
2. **Press Keys to Play Sounds**: Press any of the designated keys to play corresponding sounds.
3. **Quit**: Press 'Q' to exit the program.

## Code File

You can view the code for this application [here](piano_player.cpp).

## Requirements

- C++ compiler
- Standard C++ library
- `<windows.h>` and `<mmsystem.h>` for sound functions (Windows-specific)
- For how to add sound effects in C++ see my repository <https://github.com/Brooj-Nasir/Sound-Effect>
## Installation

1. **Clone the repository**:
    ```bash
    git clone <https://github.com/Brooj-Nasir/Piano-Keys.git>
    cd Piano-Keys
    ```
2. **Compile the program**:
    ```bash
    g++ -o piano_player piano_player.cpp -lwinmm
    ```
3. **Run the program**:
    ```bash
    ./piano_player
    ```

## Contributions

Contributions are welcome! Please fork this repository and create a pull request with your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Sample Code

Here's a snippet of the main functionality:

```cpp
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    char key;
    cout << "Press any key to play piano and Q to quit:";
    
    while (key != 'q') {
        key = _getch();
        switch (key) {
            case 'a':
                PlaySound(TEXT("a.wav"), NULL, SND_SYNC);
                break;
            case 'h':
                PlaySound(TEXT("h.wav"), NULL, SND_SYNC);
              ...
