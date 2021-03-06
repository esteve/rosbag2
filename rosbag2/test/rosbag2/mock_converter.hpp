// Copyright 2018, Bosch Software Innovations GmbH.
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

#ifndef ROSBAG2__MOCK_CONVERTER_HPP_
#define ROSBAG2__MOCK_CONVERTER_HPP_

#include <gmock/gmock.h>

#include <memory>
#include <string>

#include "rosbag2/converter_interfaces/serialization_format_converter.hpp"

class MockConverter : public rosbag2::converter_interfaces::SerializationFormatConverter
{
public:
  MOCK_METHOD3(deserialize,
    void(
      std::shared_ptr<const rosbag2::SerializedBagMessage>,
      const rosidl_message_type_support_t *,
      std::shared_ptr<rosbag2_ros2_message_t>));

  MOCK_METHOD3(serialize,
    void(
      std::shared_ptr<const rosbag2_introspection_message_t>,
      const rosidl_message_type_support_t *,
      std::shared_ptr<rosbag2::SerializedBagMessage>));
};

#endif  // ROSBAG2__MOCK_CONVERTER_HPP_
