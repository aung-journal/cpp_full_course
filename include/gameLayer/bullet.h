#pragma once
#include <gl2d/gl2d.h>

struct Bullet
{
    glm::vec2 position = {0,0};
    glm::vec2 firedDirection = {};

    void render(gl2d::Renderer2D &renderer,
        gl2d::Texture bulletsTexture,
        gl2d::TextureAtlasPadding bulletsAtlas);
}; 