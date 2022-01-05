<!-- 
This readMe inspired and modified from
https://github.com/othneildrew/Best-README-Template/
 -->

<!-- PROJECT TITLE -->
<div align="center">
    <h3 align="center">Dynasty Warriors in C</h3>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#howtoplay">How To Play</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project
This project is a game played with CLI and built with C language. The characters of the game are from Dynasty Warriors (I just borrow them) where every character has their own attack and defense properties. The concept and the rules of the battle are inspired by Heroes of Might and Magic battle. This game is played exactly by two players. The rules of the game are written in bahasa Indonesia.

## Getting Started

### Prerequisites
* GCC (GNU Compiler Collection)
<ol>
    <li>Check whether the GCC has been installed in your local computer.</li>
```
gcc -v
```
    <li>If GCC is not installed, you can follow the instruction <a href="https://dev.to/gamegods3/how-to-install-gcc-in-windows-10-the-easier-way-422j">here</a> to install the GCC</li>
</ol>

### Installation
<ol>
    <li>Clone the repo</li>
```
git clone https://github.com/ktiarad/dwinc.git
```
</ol>

## Usage
<ol>
    <li>Compile the program</li>
```
gcc main.c mylib.c -o DW_Game
```
    <li>Execute the program</li>
```
DW_Game
```
    
</ol>

## Contributing
Feel free to contribute to this repo. You can contribute to recommend clean code, fix typos, translate the rules, or anything.

## License
Distributed under the MIT License. See `LICENSE` for more information.

## Contact
Tiara Dewangga - [@ktiarad](https://twitter.com/ktiarad) - [email](https://tiaradewangga.com/#contact)