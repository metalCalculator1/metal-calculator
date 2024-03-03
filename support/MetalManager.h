#pragma once

#include "MetalModel.h" 

public ref class MetalManager
{
public:
    static MetalModel^ metalModelInstance;

    static void ClearMetalModel()
    {
        metalModelInstance = nullptr;
    }
};