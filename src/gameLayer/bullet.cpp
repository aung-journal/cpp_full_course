#include <bullet.h>

void Bullet::render(gl2d::Renderer2D &renderer,
    gl2d::Texture bulletsTexture, gl2d::TextureAtlasPadding bulletsAtlas)
{
    renderer.renderRectangle(
        {position + glm::vec2(25, 25), 50, 50},
        bulletsTexture,
        Colors_White,
        {},
        0,
        bulletsAtlas.get(1,1)
    );
}