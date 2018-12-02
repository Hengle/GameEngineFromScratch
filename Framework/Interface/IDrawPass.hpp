#pragma once
#include "IPass.hpp"
#include "FrameStructure.hpp"

namespace My {
    Interface IDrawPass : public IPass
    {
    public:
        IDrawPass() = default;
        virtual ~IDrawPass() {};

        virtual void Draw(Frame& frame) = 0;
    };
}
