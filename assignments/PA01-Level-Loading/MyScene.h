#pragma once

#include <iostream>
#include "MyManager.h"
#include "MyAgent.h"

namespace GMUCS425
{
    //this defines one level of the game
    class MyScene
    {
        public:

          MyScene(){
            m_active=true;
            m_backdrop=NULL;
            m_width=m_height=0;
          }

          //load the level from an input into the scene
          virtual bool create( std::istream & input);

          //hand the event
          virtual void handle_event(SDL_Event & e);

          //update the scene
          virtual void update();

          //display the scene
          virtual void display();

          //show HUD (heads-up display) or status bar
          virtual void draw_HUD();

          //ACCESS methods
          bool is_active() const { return m_active; }
          void deactive(){ m_active=false; }
          void activate(){ m_active=true; }
          int get_width() const { return m_width; } //level width
          int get_height()const { return m_height; } //level height

        protected:

          //detect collisions in board range
          //return the number of pairs of collisions
          virtual int broad_range_collision();

          int m_width, m_height; //width and height of this scene (level)

          std::list<MyAgent * > m_agents;
          MyAgent * m_backdrop;
          bool m_active;
    };


    class MySceneManager : public MyManager<MyScene>
    {
    public:

    	//create a texture from file
    	bool create(std::string name, std::string scene_file);

    };//end of class MyTextureManager
}
