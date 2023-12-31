#ifndef	REALFLY_VERSION_INCLUDED
#define REALFLY_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define REALFLY_VERSION_MAJOR	4
#define REALFLY_VERSION_MINOR	0
#define REALFLY_VERSION_PATCH	1
#define REALFLY_VERSION_BETA	0
#define REALFLY_VERSION_VERSTRING	MAKE_STR(REALFLY_VERSION_MAJOR) "." MAKE_STR(REALFLY_VERSION_MINOR) "." MAKE_STR(REALFLY_VERSION_PATCH) "." MAKE_STR(REALFLY_VERSION_BETA)

#endif
