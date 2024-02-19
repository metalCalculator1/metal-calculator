#pragma once
#include "MetalModel.h"

namespace MetalCalculator
{
    ref class MainForm;

    public ref class FormCommunication abstract sealed // This makes the class static
    {
    public:
        static MainForm^ mainForm = nullptr;
    };
}

