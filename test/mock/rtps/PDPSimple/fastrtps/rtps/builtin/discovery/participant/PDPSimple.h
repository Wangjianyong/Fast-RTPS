// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file PDPSimple.h
 */

#ifndef RTPS_BUILTIN_DISCOVERY_PARTICIPANT_PDPSIMPLE_H_
#define RTPS_BUILTIN_DISCOVERY_PARTICIPANT_PDPSIMPLE_H_

#include <fastrtps/rtps/builtin/data/ParticipantProxyData.h>

#include <gmock/gmock.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {

class ParticipantProxyData;

class PDPSimple
{
    public:

        MOCK_METHOD1(notifyAboveRemoteEndpoints, void(ParticipantProxyData*));

        MOCK_METHOD1(get_participant_proxy_data_serialized, CDRMessage_t(Endianness_t));

};

} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // RTPS_BUILTIN_DISCOVERY_PARTICIPANT_PDPSIMPLE_H_
