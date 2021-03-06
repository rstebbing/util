////////////////////////////////////////////
// File: modulo.h                         //
// Copyright Richard Stebbing 2014.       //
// Distributed under the MIT License.     //
// (See accompany file LICENSE or copy at //
//  http://opensource.org/licenses/MIT)   //
////////////////////////////////////////////
#ifndef MATH_MODULO_H
#define MATH_MODULO_H

// math
namespace math {

// modulo
// Python-like integer modulo arithmetic.
inline int modulo(int x, int y) {
  if (y > 0) {
    int r = x % y;
    if (r < 0) {
      r += y;
    }
    return r;
  } else if (y < 0) {
    return -modulo(-x, -y);
  } else {
    return 0;
  }
}

} // namespace math

#endif // MATH_MODULO_H
