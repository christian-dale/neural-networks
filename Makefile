SUBDIRS = simple01

.PHONY: all

all:
	for d in $(SUBDIRS); do \
		$(MAKE) -C $$d; \
	done
