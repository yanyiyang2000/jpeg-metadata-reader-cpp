#ifndef LYNX_JFIF_SEGMENT_HPP
#define LYNX_JFIF_SEGMENT_HPP

#include "application_segment.hpp"

#include "stdint.h"

namespace lynx {

class JfifSegment : public ApplicationSegment {
public:
    JfifSegment(uint16_t marker, uint16_t length);

    ~JfifSegment();

    virtual void populate();
};

} // namespace lynx

#endif  // LYNX_JFIF_SEGMENT_HPP
