#ifndef KAGAMI_H
#define KAGAMI_H

#include "kagami_global.h"
#include <ApplicationServices/ApplicationServices.h>
#include <string>

class KAGAMI_EXPORT Kagami
{
public:
    Kagami();
    void screenshot(const std::string);
};

#endif // KAGAMI_H
