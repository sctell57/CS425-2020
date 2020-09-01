#pragma once

#include <iostream>
#include <unordered_set>
#include <SDL_image.h>
#include "MyManager.h"

namespace GMUCS425
{

//Texture wrapper class
class MyTexture
{
	public:
		//Initializes variables
		MyTexture()
		{
			//Initialize
			mTexture = NULL;
			mWidth = 0;
			mHeight = 0;
		}

		//Deallocates memory
		~MyTexture()
		{
			//Deallocate
			free();
		}

		//Loads image at specified path
		bool loadFromFile( std::string path );

		//Deallocates texture
		void free();

		//Set color modulation
		void setColor( Uint8 red, Uint8 green, Uint8 blue );

		//Set blending
		void setBlendMode( SDL_BlendMode blending );

		//Set alpha modulation
		void setAlpha( Uint8 alpha );

		//Renders texture at given point
		void render( int x, int y, SDL_Rect* clip=NULL, float scale=1, float angle=0, SDL_Point* center=NULL, SDL_RendererFlip flip=SDL_FLIP_NONE );

		//Gets image dimensions
		int getWidth();
		int getHeight();

	private:
		//The actual hardware texture
		SDL_Texture * mTexture;

		//Image dimensions
		int mWidth;
		int mHeight;
}; //end of class MyTexture


class MyTextureManager : public MyManager<MyTexture>
{
public:

	MyTextureManager()
	{

	}

	//create a texture from file
	bool create(std::string imgfile)
	{
		if(this->get(imgfile)!=NULL)
		{
				std::cerr<<"WARNING: texture with the name of "<<imgfile<<" exists!"<<std::endl;
				return true;
		}

		MyTexture * texture=new MyTexture();
		assert(texture);

		if( !texture->loadFromFile( imgfile ) )
		{
			std::cerr<<"ERROR: Failed to load texture: "<<imgfile<<std::endl;
			return false;
		}

		this->add(imgfile, texture);
		return true;
	}


};//end of class MyTextureManager

}//end namespace GMUCS425