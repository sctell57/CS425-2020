# Programming Assignment 01
Due: Sept 14th, 11:59pm, 2020

<img src="imgs/screen-before.png" width="350"/> <img src="imgs/screen-after.png" width="350"/>

## Tasks

1. Compile the code using SDL2 and SDL2_image
    - Remember to set your working directory to the root folder of the assignment
    - run the code: 
    > PA01 levels/level001.txt

2. Read the code and fix a small bug in MyScene.cpp so that all agents are placed correctly (5 pts)

3. Create a subclass of MyAgent called MyZombieAgent so that the "z" agents can (20 pts)
    - Patrol back and forth horizontally. Patrol distance and speed: your choice 
    - Handle collision event: move in the opposite direction

4. Create a subclass of MyAgent called MyChickenAgent so that the "c" agents can (20 pts)
   - Rotate about a point. Center, radius, direction (clockwise vs counter clockwise) of the rotation: your choice
   - Handle collision event: move in the opposite direction

5. Create a subclass of MyAgent called MyDragonAgent so that the "d" agent can (40 pts)
    - Handle arrow key events and move the agent accordingly
    - Implement display_HUD method and show its current location on the upper left corner of the screen
       - this will require SDL_ttf.h and SDL_ttf library installed
    - Handle collision event: Make the agent stop in place and ensure that the agent does not overlap with other objects and agents. 

6. Create a new level of size 50X50 inside the folder "levels" and call it **level02.txt** (10 pts)
    - You might need to adjust the windows size so that the screen fits the level 

7. Use http://fraps.com or other screen recording tool to record the "game play" (5 pts)

8. *Bonus points*: Implement a data structure for broad-range collision detection for Scene manager, it can be one of the following. 
    - Quadtree (15 pts)
    - KD-tree (20 pts)

## Related Tutorials

1. [Lesson 11: Clip Rendering and Sprite Sheets](http://lazyfoo.net/tutorials/SDL/11_clip_rendering_and_sprite_sheets/index.php)
2. [Lesson 14: Animated Sprites and Vsync](http://lazyfoo.net/tutorials/SDL/14_animated_sprites_and_vsync/index.php)

## What to submit

1. Zip the entire folder with your new level and the video and name it your_net_id_PA01.zip
2. Upload the zip file to blackboard
3. Please state what Tasks and Bonus Points you have finished on the blackboard submission page. 
