#pragma once

/* Windows */
#if defined(WIN32) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32) || defined(__WIN32__) || defined(__MINGW32__)
        #define OS_WINDOWS
#endif


/* UNIX */
#if defined(unix) || defined(__unix) || defined(__unix__)
        #define OS_UNIX
#endif


/* Linux */
#if defined(__linux__) || defined(linux) || defined(__linux)
        #define OS_LINUX
#endif


/* Mac OS */
#if defined(__APPLE__) || defined(__MACH__)
        #define OS_MACOS
#endif


/* FreeBSD */
#if defined(__FreeBSD__)
        #define OS_FREEBSD
#endif


/* DragonFly BSD */
#if defined(__DragonFly__)
        #define OS_DRAGONFLY
#endif


/* OpenBSD */
#if defined(__OpenBSD__)
        #define OS_OPENBSD
#endif


/* NetBSD */
#if defined(__NetBSD__)
        #define OS_NETBSD
#endif


/* Android */
#if defined(__ANDROID__)
        #define OS_ANDROID
#endif
