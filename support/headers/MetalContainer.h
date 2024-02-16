#pragma once

#include "../../models/MetalModel.h"

class MetalContainer {
    // class to transmit metal though the different forms
public:
    static void SetMetal(const MetalModel& metalData) {
        if (!metalSet) {
            metalInstance = metalData;
            metalSet = true;
        }
    }

    static const MetalModel& GetMetal() {
        metalSet = false;
        return metalInstance;
    }

private:
    static bool metalSet;

    static MetalModel metalInstance;
};