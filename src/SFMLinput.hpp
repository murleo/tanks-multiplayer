#ifndef SFML_INPUT_HPP
#define SFML_INPUT_HPP

#include "Input.hpp"

class SFMLrenderer;

class SFMLinput : public Input {
friend SFMLrenderer;
public:
    SFMLinput();
    virtual ~SFMLinput();
protected:
    void update() override;
private:
    int toSFMLKeyboardKey(int key);
    int toSFMLMouseButton(int key);
};

#endif