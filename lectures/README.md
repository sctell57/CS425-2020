# Schedule: Lectures, Programming Assignments and Exams

## Part 1: Game Engine, Game Resources & Scenes, Modelings (4 weeks)

- **Aug 24**: Introduction & Syllabus ([pdf](https://www.dropbox.com/s/kx9srnctvwj1b3c/01-Introduction.pdf))
  - Read GEA 3.1 (C++ Review and Best Practices)
  - <mark>PA00 SDL setup (0%) Out</mark>
- **Aug 26**: Event-based System ([pdf](https://www.dropbox.com/s/8ofpep5wzr2nahn/02-GameEngine.pdf))
  - Read GEA Chapters 1.3 (What is a Game Engine?), 6.1 (Subsystem Start-Up and Shut-Down) 
  - C++ review using [mathtool](https://www.dropbox.com/sh/w9e9kmv9cf71md6/AACyol5VRFAZebEBkpNNnQ1za)
- **Aug 31**: Resource Management  
  - Read GEA Chapters 8.1 (Rendering loop) & 8.2 (Game Loop) & 7 (Resources & File system)
  - <mark>PA01 Level Loading (10%) Out</mark>
  - <mark>PA00 SDL setup (0%) due at 11:59pm</mark>
- **Sep 02**: Scene Management, Octree, BSP, K-D tree, Range tree 
  - Read GEA Chapters 11.1 & 11.2
- **Sep 07**: Labor Day (no class)
- **Sep 09**: Level loading Sample Code 
- **Sep 14**: Procedural content, game play 
  - Read this [blogpost by Alex Norton](https://www.gamecareerguide.com/news/169624/opinion_the_difficulties_of_an_infinite_video_game_world.php)
  - <mark>PA01 Due @11:59pm</mark>
- **Sep 16 & 21**: Procedural Modeling, terrain, L-systems, fractals, City Engine system
  - Read [Understanding Perlin Noise](https://flafla2.github.io/2014/08/09/perlinnoise.html) 
  - Perlin-noise practice problems
  - <mark>PA02 Perlin Noise (10%) Out</mark>
- **Sep 23**: Human input device
  - Read GEA Chapter 9 (Human Interface Devices)
  - [How Sony Created The Perfect Video Game Controller](https://www.youtube.com/watch?v=3Hm9924cvLI)


## Part 2: Motion, Animation & Game AI (4 weeks)
- **Sep 28**: Animations in Game
  - Read GEA Chapter 12 Animation Systems (12.1~12.6)
  _ Linear Skin Blendding (LSB)
  - LSB Practice problem 
- **Sep 30** Navigation (e.g., Nav Mesh) & Path finding (A*, D*) 
  - Pathing http://www.gdcvault.com/play/1014514/AI-Navigation-It-s-Not 
  - <mark>PA02 Due @11:59pm</mark>
- **Oct 05**  Path planning, PRM, RRT, etc 
  - <mark>PA03 Pathing (10%) Out</mark>
- **Oct 07 & 14**  Game AI, finite state machines, backward chaining, decision trees, behavior trees, etc.
  - Unity AI: https://youtu.be/bqsfkGbBU6k?t=222
  - Unity Behavior tree: https://www.youtube.com/watch?v=T_of4_jRoJA
  - UR4 Behavior tree: https://www.youtube.com/watch?v=bsDT95UdPbc
  - Variants of behavior trees http://www.gdcvault.com/play/1012416/Behavior-Trees-Three-Ways-of 
  - <mark>PA03 Pathing (10%) due on Oct 13, 11:59pm</mark>
- **Oct 19** Decision/Behavior trees practice 
  - Game AI Practice problems 
- **Oct 21** <mark>Midterm Exam (10%)</mark>

## Part 3: Physically-based simuation (4 weeks)
- **Oct 26**: Introduction to particle system 
  - [Particles 102 - Intro to Particle Systems](https://www.youtube.com/watch?v=rR_bm8f8rVE)
  - <mark>PA04 Behavior Tree (10%) Out</mark>
- **Oct 28 & Nov 02**: ODE Solvers, Euler's method, Runge-Kutta 2nd~4th order methods, mid-point method
  - Flocking 
  - <mark>Final Project pitch on Oct 28</mark>
  - <mark>PA05 Boids (10%) Out on Nov 02</mark>
- **Nov 04**: Rigid-body simulation: Part 1 
  - [Note from David Baraff](https://www.dropbox.com/s/q1f1j7jp5bk5a64/notesd1.pdf?dl=0)
  - Box2d: https://github.com/erincatto/Box2D
  - Chipmunk2D: https://github.com/slembcke/Chipmunk2D
  - bullet: https://github.com/bulletphysics/bullet3
- **Nov 09 & 11**: Rigid-body simulation: Part 2 
  - Recommended [talk by David Baraff about resting contacts](https://www.youtube.com/watch?v=vNTHveVpDDc)
  - <mark>PA04 due on Nov 11, 11:59pm</mark>
- **Nov 16**: Character Animation 
- **Nov 18**: Final Project proposal (1% participation)
- **Nov 30**: <mark>PA05 due @11:59pm</mark>
- **Dec 02**: <mark>Final Exam (10%)</mark>
- **Dec 14**: <mark>Final Project presentation + report due (20%)</mark>

## Part 4: Others
- Game AI Tools:
  - [What Makes Good AI? by Game Maker's Toolkit](https://www.youtube.com/watch?v=9bbhJi0NBkk) (16 mins)
  - [Arcade Learning Environment](https://github.com/mgbellemare/Arcade-Learning-Environment)
    - Demo video: https://www.youtube.com/watch?v=nzUiEkasXZI
    - from DeepMind using Deep Q-learning https://www.youtube.com/watch?v=TmPfTpjtdgg
  - ELF: [Extensive, Lightweight, and Flexible platform for game research](https://code.fb.com/ml-applications/introducing-elf-an-extensive-lightweight-and-flexible-platform-for-game-research/)
    - github page: https://github.com/facebookresearch/elf
    - talk (1 hr): https://youtu.be/NaLAveYHQ_U?t=112
    - Demo video: https://www.youtube.com/watch?v=NaLAveYHQ_U
  - Serpent AI: https://github.com/SerpentAI/SerpentAI
    - Example (29 mins): https://www.youtube.com/watch?v=hIFkdao0ELU&t=1s
  - StarCraft II Learning Environment by DeepMind & Blizzard (3 mins): https://www.youtube.com/watch?v=St5lxIxYGkI
  - Deep learning for game developers (49 mins): https://www.youtube.com/watch?v=rF6Usm0tdhk
  - Generative Adversarial Network for procedural content generation
    - generate Mario levels using DCGAN: [paper](https://arxiv.org/pdf/1805.00728.pdf), [video](https://www.youtube.com/watch?v=NObqDuPuk7Q)
    - generate Doom levels using GAN: [paper](https://arxiv.org/pdf/1804.09154.pdf), [video](https://www.youtube.com/watch?v=K32FZ-tjQP4)
  - Machine learning tools by Amazon for game developers (40 mins): https://www.gdcvault.com/browse/gdc-18/play/1024835
    - image recognition to start
    - loot drop starting at 14 min to 19 min.
    - detecting inappropriate contents (images, text)
- Networking in Game
- **Getting Noticed: Why You Need an Online Portfolio and How to Make One** by Jacob Minkoff
  - https://www.youtube.com/watch?v=yxW0lq47mcE


