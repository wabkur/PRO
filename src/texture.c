#include "../headers/header.h"


texture_t wallTextures[NUM_TEXTURES];

static const char *textureFileNames[NUM_TEXTURES] = {
	"./images/redbrick.png",
	"./images/purplestone.png",
	"./images/mossystone.png",
	"./images/graystone.png",
	"./images/colorstone.png",
	"./images/bluestone.png",
	"./images/wood.png",
	"./images/SNES-wolfenstein3D.png"
};

/**
 * WallTextureready - Load the textures in a respective position
 * 
*/

void WallTexturesready(void)
{
	int w;

	for (w = 0; w < NUM_TEXTURES; w++)
	{
		upng_t *upng;

		upng = upng_new_from_file(textureFileNames[w]);

		if (upng != NULL)
		{
			upng_decode(upng);
			if (upng_get_error(upng) == UPNG_EOK)
			{
				wallTextures[w].upngTexture = upng;
				wallTextures[w].width = upng_get_width(upng);
				wallTextures[w].height = upng_get_height(upng);
				wallTextures[w].texture_buffer = (color_t *)upng_get_buffer(upng);
			}
		}
	}

}

/**
 * FreeWallTextures --.
 *
*/

void freeWallTextures(void)
{
	int w;

	for (w = 0; w < NUM_TEXTURES; w++)
		upng_free(wallTextures[w].upngTexture);
}