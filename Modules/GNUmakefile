RPM_DISABLE_RELOCATABLE=YES

include $(GNUSTEP_MAKEFILES)/common.make

SUBPROJECTS = \
        TimeZone \
        Volumes \
        FileSystem \
        ModifierKeys \
        Fonts \
        Defaults \
	Themes \
	Internet

-include GNUmakefile.preamble

-include GNUmakefile.local

include $(GNUSTEP_MAKEFILES)/aggregate.make

-include GNUmakefile.postamble

