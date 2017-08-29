/**
    @file
    @author  Alexander Sherikov

    @copyright 2017 INRIA. Licensed under the Apache License, Version 2.0. (see
    LICENSE or http://www.apache.org/licenses/LICENSE-2.0)

    @brief
*/

#pragma once

namespace humoto
{
    namespace example
    {
        /**
         * @brief Class containing options of the walking pattern generator
         */
        class HUMOTO_LOCAL WalkParameters : public humoto::walking::StanceFSMParameters
        {
            protected:
                #define HUMOTO_CONFIG_SECTION_ID "WalkParameters"
                #define HUMOTO_CONFIG_CONSTRUCTOR WalkParameters
                #define HUMOTO_CONFIG_ENTRIES
                #include "humoto/config/define_accessors.h"


            public:
                /**
                 * @brief Default constructor
                 */
                WalkParameters()
                {
                    setDefaults();
                }


                /**
                 * @brief Default parameters of the walk
                 */
                void setDefaults()
                {
                }
        };
    }
}

