#ifndef NC_EFFECT_CATALOG_H
#define NC_EFFECT_CATALOG_H
#include <stddef.h>
#include <stdint.h>
struct nc_effect_descriptor { unsigned block, subtype, normalized_subtype; const char *family, *name; uint32_t firmware_callback; int alias; };
extern const struct nc_effect_descriptor nc_effect_catalog[];
extern const size_t nc_effect_catalog_count;
#endif
