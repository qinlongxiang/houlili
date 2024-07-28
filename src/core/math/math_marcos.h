#pragma once

#define HouLili_MIN(x, y) (((x) < (y)) ? (x) : (y))
#define HouLili_MAX(x, y) (((x) > (y)) ? (x) : (y))
#define HouLili_PIN(a, min_value, max_value) HouLili_MIN(max_value, HouLili_MAX(a, min_value))

#define HouLili_VALID_INDEX(idx, range) (((idx) >= 0) && ((idx) < (range)))
#define HouLili_PIN_INDEX(idx, range) HouLili_PIN(idx, 0, (range)-1)

#define HouLili_SIGN(x) ((((x) > 0.0f) ? 1.0f : 0.0f) + (((x) < 0.0f) ? -1.0f : 0.0f))
