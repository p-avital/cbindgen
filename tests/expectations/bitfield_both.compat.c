#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct HasBitfields {
  uint64_t foo: 8;
  uint64_t bar: 56;
} HasBitfields;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(const struct HasBitfields*);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
