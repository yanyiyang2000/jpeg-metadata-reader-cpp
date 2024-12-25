#include "application_segment.hpp"

#include "stdint.h"

#include <iostream>

namespace lynx {

    ApplicationSegment::ApplicationSegment(uint16_t marker, uint16_t length) : m_marker{marker}, m_length{length} {
        std::cout << "Creating Application Segment" << std::endl;
    }

} // namespace lynx
