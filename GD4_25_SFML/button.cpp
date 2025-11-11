#include "button.hpp"

gui::Button::Button(const FontHolder& fonts, const TextureHolder& textures)
    : m_normal_texture(textures.Get(TextureID::kButtonNormal))
{
}

void gui::Button::SetCallback(Callback callback)
{
}

void gui::Button::SetToggle(bool flag)
{
}

bool gui::Button::IsSelectable() const
{
    return false;
}

void gui::Button::Select()
{
}

void gui::Button::Deselect()
{
}

void gui::Button::Activate()
{
}

void gui::Button::Deactivate()
{
}

void gui::Button::HandleEvent(const sf::Event& event)
{
}

void gui::Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
}