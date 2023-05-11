#ifndef VEC3_H
#include "vec3.h"
#endif

#ifndef COLOR_H
#define COLOR_H

#include <iostream>

void write_color(std::ostream &out, color pixel_color) {
  int ir = static_cast<int>(255.99 * pixel_color.x());
  int ig = static_cast<int>(255.99 * pixel_color.y());
  int ib = static_cast<int>(255.99 * pixel_color.z());

  out << ir << ' ' << ig << ' ' << ib << '\n';
}

#endif
