bin_PROGRAMS = gquicktweet
gquicktweet_SOURCES = \
console.c \
gquicktweet.c


gquicktweet_LDADD = \
	@liblogc_LIBS@ \
	@libtwitc_LIBS@	\
	$(EXTERN_LIB_DEP_LIBS) \
	@libnotify_LIBS@
	

if DEBUG

AM_CFLAGS = -g3 -O0 \
	-D_GNU_SOURCE \
	-DPROG_DIR=\""$(prefix)/share/@PACKAGE@/"\" \
	-DICONS_DIR=\""$(prefix)/share/@PACKAGE@/icons/"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)locale/"\" \
	$(EXTERN_LIB_DEP_CFLAGS) \
	@libnotify_CFLAGS@ \
	@liblogc_CFLAGS@ \
	@libtwitc_CFLAGS@ \
	@GQuickTweet_CFLAGS@

AM_CXXFLAGS = -g3 -O0 \
	-D_GNU_SOURCE \
	-DPROG_DIR=\""$(prefix)/share/@PACKAGE@/"\" \
	-DICONS_DIR=\""$(prefix)/share/@PACKAGE@/icons/"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)locale/"\" \
	$(EXTERN_LIB_DEP_CFLAGS) \
	@libnotify_CFLAGS@ \
	@liblogc_CFLAGS@ \
	@libtwitc_CFLAGS@ \
	@GQuickTweet_CFLAGS@


else

AM_CFLAGS = -O2 \
	-D_GNU_SOURCE \
	-DPROG_DIR=\""$(prefix)/share/@PACKAGE@/"\" \
	-DICONS_DIR=\""$(prefix)/share/@PACKAGE@/icons/"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)locale/"\" \
	$(EXTERN_LIB_DEP_CFLAGS) \
	@libnotify_CFLAGS@ \
	@liblogc_CFLAGS@ \
	@libtwitc_CFLAGS@ \
	@GQuickTweet_CFLAGS@
	
AM_CXXFLAGS = -O2 \
	-D_GNU_SOURCE \
	-DPROG_DIR=\""$(prefix)/share/@PACKAGE@/"\" \
	-DICONS_DIR=\""$(prefix)/share/@PACKAGE@/icons/"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)locale/"\" \
	$(EXTERN_LIB_DEP_CFLAGS) \
	@libnotify_CFLAGS@ \
	@liblogc_CFLAGS@ \
	@libtwitc_CFLAGS@ \
	@GQuickTweet_CFLAGS@

endif