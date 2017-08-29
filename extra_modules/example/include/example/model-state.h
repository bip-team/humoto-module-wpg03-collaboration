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
        class HUMOTO_LOCAL ModelState : public humoto::ModelState, public humoto::config::ConfigurableBase
        {
            protected:
                #define HUMOTO_CONFIG_SECTION_ID "ModelState"
                #define HUMOTO_CONFIG_CONSTRUCTOR ModelState
                #define HUMOTO_CONFIG_ENTRIES \
                    HUMOTO_CONFIG_MEMBER_CLASS(com_state_, "com_state")
                #include "humoto/config/define_accessors.h"

                void setDefaults()
                {
                }

            public:
                /// State of the CoM
                humoto::rigidbody::PointMassState   com_state_;


            public:
                /**
                 * @brief Default constructor
                 */
                ModelState()
                {
                }



                /**
                 * @brief Log
                 *
                 * @param[in,out] logger logger
                 * @param[in] parent parent
                 * @param[in] name name
                 */
                void log(   humoto::Logger &logger HUMOTO_GLOBAL_LOGGER_IF_DEFINED,
                            const LogEntryName &parent = LogEntryName(),
                            const std::string &name = "model_state") const
                {
                    LogEntryName subname = parent; subname.add(name);

                    com_state_.log(logger, subname, "com_state");
                }
        };
    }
}

