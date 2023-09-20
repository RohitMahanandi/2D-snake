#pragma once

#include <bits/stdc++.h>
#include <state.hpp>
using namespace std;
namespace Engine {
    class stateman
    {
    private:
    stack <unique_ptr<state>> m_statestack;
    unique_ptr<state> m_newstate;


    
    public:
        stateman(/* args */);
        ~stateman();


        void Add(unique_ptr<state> toAdd, bool replace = false);
        void popcurrent();
        void processstatechange();
        unique_ptr<state>& GetCurrentState();
    };
}

