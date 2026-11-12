CC ?= cc
BUILD ?= ../../analysis/custom-fx/host
CFLAGS ?= -O2 -g
CPPFLAGS += -Iinclude
FXFLAGS = -std=c11 -Wall -Wextra -Werror -ffp-contract=off

.PHONY: all test clean
all: $(BUILD)/libnanocore_fx.a
$(BUILD):
	mkdir -p $@
$(BUILD)/chorus.o: src/chorus.c include/nc_fx.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FXFLAGS) -c $< -o $@
$(BUILD)/gain.o: src/gain.c | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FXFLAGS) -c $< -o $@
$(BUILD)/univibe.o: src/univibe.c | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FXFLAGS) -c $< -o $@
$(BUILD)/libnanocore_fx.a: $(BUILD)/chorus.o $(BUILD)/gain.o $(BUILD)/univibe.o
	$(AR) rcs $@ $^
$(BUILD)/test_chorus: tests/test_chorus.c $(BUILD)/libnanocore_fx.a
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FXFLAGS) $^ -lm -o $@
$(BUILD)/test_univibe: tests/test_univibe.c $(BUILD)/libnanocore_fx.a
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FXFLAGS) $^ -lm -o $@
test: $(BUILD)/test_chorus $(BUILD)/test_univibe
	$(BUILD)/test_chorus
	$(BUILD)/test_univibe
clean:
	rm -f $(BUILD)/univibe.o $(BUILD)/test_univibe $(BUILD)/chorus.o $(BUILD)/gain.o $(BUILD)/libnanocore_fx.a $(BUILD)/test_chorus
