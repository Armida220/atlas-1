#ifndef ATLAS_CORE_CARTOGRAPHIC_HPP
#define ATLAS_CORE_CARTOGRAPHIC_HPP

#include "common.hpp"

namespace atlas::core
{
    struct Cartographic
    {
        double latitude;
        double longitude;
        double height;

        Cartographic();
        Cartographic(rad latitude, rad longitude, meters height = 0);

        static double dmsToDD(deg d, deg m, deg s);
        static Cartographic fromDMS(deg latD, deg latM, deg latS,
                                    deg lonD, deg lonM, deg lonS,
                                    meters height = 0);
        static Cartographic fromDegrees(deg latitude, deg longitude, meters height = 0);
        static Cartographic midpoint(const Cartographic& start, const Cartographic& end);
        static Cartographic lerp(const Cartographic& from, const Cartographic& to, double t);
    };
}

#endif