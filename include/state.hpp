#pragma once
#include <SFML/System/Time.hpp>

namespace Engine {

    class state
    {
    
    public:
        state(){};
        virtual ~state(){};


        virtual void initialize() = 0;
        virtual void processInput() = 0;
        virtual void updation(sf::Time original_time) = 0;
        virtual void draw() = 0;
        virtual void pause(){};
        virtual void start(){};


        
    };
    
   
    
}