#Tic_Tac_Toe (ISU project for ICS4U)

(Last updated on June, 8, 2015)

My high school teacher, Mr. Stankovic gave us the opportunity of learning what ever our hearts desired for 4 weeks. I decided to learn how to use SDL2’s libraries with C++, in order to apply my knowledge learned from the 3 years of programming with C++. For my project I programmed a simple Tic Tac Toe game.

##Design
The states of the game contain a menu and a game state. I rendered the board with SDL2 because I found the simple lines appealing. For the sprites I found them on google images. And the text font used was myriad pro found online.

###Menu
![menu](http://i.imgur.com/XBnKbJj.png)

###About
![about](http://i.imgur.com/yLa3DXj.png)

###Game play
![gameplay](http://i.imgur.com/Q14jxFd.png)

###Winner screen
![winnerscreen](http://i.imgur.com/k2ab6qB.png)

## Installation
Mac: (Can be done in other operating systems by changing the include from SDL2/SDL.h to SDL.h for windows. And following slightly different steps)
- Download the following libaries and extract them in the same directory
    - SDL2
    - SDL2_image
    - SDL2_ttf
- Clone the repo
- Open project in Xcode
- Change the path of the SDL frameworks to where you extracted them
- Edit Scheme, change the working directory to the folder that contains the src, include and data folders
- Run project!

Reference for help: http://lazyfoo.net/tutorials/SDL/01_hello_SDL/index.php

##Implementation

I decided on using SDL2’s visual library to implement in my game because it supports C++ and it would give me a good opportunity of learning how rendering works and some object oriented programming practise.

##Difficulties

Difficulties occurred were mostly due to misunderstanding in how to use SDL2 but were easily fixed by rereading the tutorials and googling the errors. Some other difficulties were integrating the files together with header and cpp file. I believe these difficulties positively effected me by teaching me how to overcome these errors.

##Conclusion

Overall, I think this project was a success. Many lessons were learned from creating this game and it was very satisfying seeing a visual of my program instead of the compiler’s text.