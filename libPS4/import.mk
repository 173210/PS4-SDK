$(ODIR)/import:
	mkdir -p $@

define MODULE_TARGET
$(ODIR)/import/import_$(1).o: import/module.S $(ODIR)/import
	$(COMPILE.c) $(2) $$< -o $$@
endef

define STUB_TARGET
$(ODIR)/import/import_$(1).o: import/stub.S $(ODIR)/import
	$(COMPILE.c) $(2) -DFUNCTION=$(3) $$< -o $$@

endef

define IMPORT
OBJS	+= $(addsuffix .o,$(addprefix $(ODIR)/import/import_,$(1) $(addprefix $(1)_,$(3))))

$(call MODULE_TARGET,$(1),$(2))
$(foreach function,$(3),$(call STUB_TARGET,$(1)_$(function),$(2),$(function)))
endef

include import/camera.mk
include import/kernel.mk
include import/libc.mk
include import/module.mk
include import/network.mk
include import/pad.mk
include import/usb.mk
