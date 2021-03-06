/* libcfg.h (template) */

/* Define or undefine as appropriate. */

#ifndef SIDPLAY1_LIBCFG_H
#define SIDPLAY1_LIBCFG_H

/* This is used to define the file/path separator(s) below. */

#undef HAVE_MSWINDOWS
#undef HAVE_MSDOS
#undef HAVE_OS2
#define HAVE_MACOS
#undef HAVE_AMIGAOS

/* Define the file/path separator(s) that your filesystem uses:
   FS_IS_COLON_AND_BACKSLASH, FS_IS_COLON_AND_SLASH, FS_IS_BACKSLASH,
   FS_IS_COLON, FS_IS_SLASH  */
#if defined(HAVE_MSWINDOWS) || defined(HAVE_MSDOS) || defined(HAVE_OS2)
  #define FS_IS_COLON_AND_BACKSLASH
#elif defined(HAVE_MACOS)
  #define FS_IS_COLON
#elif defined(HAVE_AMIGAOS)
  #define FS_IS_COLON_AND_SLASH
#else
  #define FS_IS_SLASH
#endif	  

/* --------------------------------------------------------------------------
 * Hardware-specific speed optimizations.
 * Check here for things you can configure.
 * --------------------------------------------------------------------------
 *
 * Caution: This may not work on every hardware and therefore can result in
 * trouble. Some hardware-specific speed optimizations use a union to access
 * integer fixpoint operands in memory. An assumption is made about the
 * hardware and software architecture and therefore is considered a hack!
 * But try it in need for speed. You will notice if it doesn't work ;)
 *
 * This option is highly used and tested. A failing little endian system
 * has not been reported so far.  */
#define DIRECT_FIXPOINT

/* This will cause little(big) endian machines to directly access little(big)
 * endian values in memory structures or arrays, disregarding alignment.  */
#define OPTIMIZE_ENDIAN_ACCESS
	
/* --------------------------------------------------------------------------
 * Don't touch these!
 * --------------------------------------------------------------------------
 */
#undef SID_NO_STDIN_LOADER
#define SIDEMU_TIME_COUNT
#undef SID_REFTIMES
#undef LARGE_NOISE_TABLE
#undef PORTABLE_FIXPOINT
#undef NO_RTS_UPON_BRK
#undef SIDTUNE_REJECT_UNKNOWN_FIELDS

/* Do filter calculations at floating-point precision.  */
#define SID_FPUFILTER

/* Do initialization of mixing tables at floating-point precision.  */
#define SID_FPUMIXERINIT

/* Do envelope calculations at floating-point precision. High-end FPU is
 * strongly recommended. Otherwise this may not be faster. Forget about
 * the Pentium FPU.  */
#undef SID_FPUENVE

#endif  /* SIDPLAY1_LIBCFG_H */
