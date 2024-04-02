#pragma once

#include "tape_interface.hpp"

#include <iostream>
#include <vector>
#include <fstream>

class TapesManager
{
private:
    TapeInterface& tape_interface;
public:
    TapesManager(TapeInterface& tape_interface_) : tape_interface(tape_interface_) {};
    ~TapesManager() = default;

    Tape merge_sort_tape(Tape& tape_to_sort);
// private:
    void delete_tape(Tape tape);

    void sort_short_tape(Tape& tape);
    Tape merge_sorted_tapes(std::string new_tape_name, Tape& tape_1, Tape& tape_2);
};