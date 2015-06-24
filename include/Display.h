#ifndef DISPLAY_H
#define DISPLAY_H

#include "SDL2/SDL.h"
#include <string>
#include <iostream>

class Display
{
    public:
        Display(int width, int height, const std::string& title);
        virtual ~Display();
        void Update();
        void Clear();
        bool IsClosed();
    protected:
    private:
        Display(const Display& other);
        Display& operator=(const Display& other);

        SDL_Window* m_window;
        SDL_GLContext m_glContext;
        bool m_isClosed;
};

#endif // DISPLAY_H

