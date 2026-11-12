count_continue = 0x400263da;
count_return = 0x40026362;
format_return = 0x400266d6;
native_snprintf = 0x400055ea;
native_percentage = 0x40024dbc;
enum_continue = 0x4001a95a;
SECTIONS {
 .vibe_defaults 0x40072036 : SUBALIGN(2) { *(.vibe_defaults) }
 .vibe_format 0x40027606 : SUBALIGN(2) { *(.vibe_format) }
 .vibe_enum 0x400725c0 : SUBALIGN(2) { *(.vibe_enum) }
 /DISCARD/ : { *(.comment) *(.note*) }
 ASSERT(SIZEOF(.vibe_enum) <= 94, "enum overflow")
 ASSERT(SIZEOF(.vibe_defaults) <= 120, "defaults overflow")
 ASSERT(SIZEOF(.vibe_format) <= 76, "formatter overflow")
}
