#line 3 "vcast_preprocess.17964.10.cpp"                                                                                                                              
# 1 "vcast_preprocess.17964.8.cpp" 1

typedef int VECTORCAST_MARKER__UNIT_PREFIX_START;

# 1 "C:\\VCAST\\ENVIRONMENTS\\GIT_TEST\\SOURCEFILES\\Shapes/rectangle.h" 1



# 1 "C:\\VCAST\\ENVIRONMENTS\\GIT_TEST\\SOURCEFILES\\Shapes/shape.h" 1



# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 1 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 3
// Components for manipulating sequences of characters -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/string
 *  This is a Standard C++ Library header.
 */

//
// ISO C++ 14882: 21  Strings library
//




       
# 37 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */




// The current version of the C++ library in compressed ISO date format.


// Macros for various attributes.
//   _GLIBCXX_PURE
//   _GLIBCXX_CONST
//   _GLIBCXX_NORETURN
//   _GLIBCXX_NOTHROW
//   _GLIBCXX_VISIBILITY
# 54 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// See below for C++






// Macros for visibility attributes.
//   _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY
//   _GLIBCXX_VISIBILITY





// If this is not supplied by the OS-specific or CPU-specific
// headers included below, it will be defined to an empty default.



// Macros for deprecated attributes.
//   _GLIBCXX_USE_DEPRECATED
//   _GLIBCXX_DEPRECATED
# 87 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// Macros for ABI tag attributes.







// Macro for constexpr, to support in mixed 03/0x mode.
# 114 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// Macro for noexcept, to support in mixed 03/0x mode.
# 141 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// Macro for extern template, ie controlling template linkage via use
// of extern keyword on template declaration. As documented in the g++
// manual, it inhibits all implicit instantiations and is used
// throughout the library to avoid multiple weak definitions for
// required types that are already explicitly instantiated in the
// library binary. This substantially reduces the binary size of
// resulting executables.
// Special case: _GLIBCXX_EXTERN_TEMPLATE == -1 disallows extern
// templates only in basic_string, thus activating its debug-mode
// checks even at -O0.


/*
  Outline of libstdc++ namespaces.

  namespace std
  {
    namespace __debug { }
    namespace __parallel { }
    namespace __profile { }
    namespace __cxx1998 { }

    namespace __detail { }

    namespace rel_ops { }

    namespace tr1
    {
      namespace placeholders { }
      namespace regex_constants { }
      namespace __detail { }
    }

    namespace tr2 { }
    
    namespace decimal { }

    namespace chrono { }
    namespace placeholders { }
    namespace regex_constants { }
    namespace this_thread { }
    inline namespace literals {
      inline namespace chrono_literals { }
      inline namespace complex_literals { }
      inline namespace string_literals { }
    }
  }

  namespace abi { }

  namespace __gnu_cxx
  {
    namespace __detail { }
  }

  For full details see:
  http://gcc.gnu.org/onlinedocs/libstdc++/latest-doxygen/namespaces.html
*/
namespace std
{
  typedef unsigned int size_t;
  typedef int ptrdiff_t;


  typedef decltype(nullptr) nullptr_t;

}
# 221 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 241 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// Defined if inline namespaces are used for versioning.


// Inline namespace for symbol versioning.
# 293 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// Inline namespaces for special modes: debug, parallel, profile.
# 344 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// Macros for namespace scope. Either namespace std:: or the name
// of some nested namespace within it corresponding to the active mode.
// _GLIBCXX_STD_A
// _GLIBCXX_STD_C
//
// Macros for opening/closing conditional namespaces.
// _GLIBCXX_BEGIN_NAMESPACE_ALGO
// _GLIBCXX_END_NAMESPACE_ALGO
// _GLIBCXX_BEGIN_NAMESPACE_CONTAINER
// _GLIBCXX_END_NAMESPACE_CONTAINER
# 394 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// GLIBCXX_ABI Deprecated
// Define if compatibility should be provided for -mlong-double-64.


// Inline namespace for long double 128 mode.
# 422 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// Debug Mode implies checking assertions.




// Disable std::string explicit instantiation declarations in order to assert.





// Assert.
# 464 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// Macros for race detectors.
// _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A) and
// _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A) should be used to explain
// atomic (lock-free) synchronization to race detectors:
// the race detector will infer a happens-before arc from the former to the
// latter when they share the same argument pointer.
//
// The most frequent use case for these macros (and the only case in the
// current implementation of the library) is atomic reference counting:
//   void _M_remove_reference()
//   {
//     _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(&this->_M_refcount);
//     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount, -1) <= 0)
//       {
//         _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(&this->_M_refcount);
//         _M_destroy(__a);
//       }
//   }
// The annotations in this example tell the race detector that all memory
// accesses occurred when the refcount was positive do not race with
// memory accesses which occurred after the refcount became zero.







// Macros for C linkage: define extern "C" linkage only when using C++.
# 504 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// First includes.

// Pick up any OS-specific definitions.
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\os_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-

// Copyright (C) 2000-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/os_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */




// System-specific #define, typedefs, corrections, etc, go here.  This
// file will come before all others.

//  Define as 0, if you want, to enable inlining of gthread functions.
//  By default, don't pollute libstdc++ with win32api names.




// Don't let win32api windef.h define min and max as macros
// if included after c++config.h.
# 56 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\os_defines.h" 3
// See libstdc++/20806.


// See  libstdc++/37522.


// See libstdc++/43738
// On native windows targets there is no ioctl function. And the existing
// ioctlsocket function doesn't work for normal file-descriptors.


// See libstdc++/51135
// Class constructors/destructors have __thiscall calling-convention on
// IA 32-bit
# 78 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\os_defines.h" 3
// See libstdc++/59807
# 508 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 2 3

// Pick up any CPU-specific definitions.
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\cpu_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-

// Copyright (C) 2005-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cpu_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 511 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 2 3

// If platform uses neither visibility nor psuedo-visibility,
// specify empty default for namespace annotation macros.




// Certain function definitions that are meant to be overridable from
// user code are decorated with this macro.  For some targets, this
// macro causes these definitions to be weak.




// By default, we assume that __GXX_WEAK__ also means that there is support
// for declaring functions as weak while not defining such functions.  This
// allows for referring to functions provided by other libraries (e.g.,
// libitm) without depending on them if the respective features are not used.




// Conditionally enable annotations for the Transactional Memory TS on C++11.
// Most of the following conditions are due to limitations in the current
// implementation.
# 548 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// The remainder of the prewritten config is automatic; all the
// user hooks are listed above.

// Create a boolean flag to be used to determine if --fast-math is set.






// This marks string literals in header files to be extracted for eventual
// translation.  It is primarily used for messages in thrown exceptions; see
// src/functexcept.cc.  We use __N because the more traditional _N is used
// for something else under certain OSes (see BADNAMES).


// For example, <windows.h> is known to #define min and max as macros...



// N.B. these _GLIBCXX_USE_C99_XXX macros are defined unconditionally
// so they should be tested with #if not with #ifdef.
# 604 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 3
// End of prewritten config; the settings discovered at configure time follow.
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the `acosf' function. */


/* Define to 1 if you have the `acosl' function. */


/* Define to 1 if you have the `asinf' function. */


/* Define to 1 if you have the `asinl' function. */


/* Define to 1 if the target assembler supports .symver directive. */
/* #undef _GLIBCXX_HAVE_AS_SYMVER_DIRECTIVE */

/* Define to 1 if you have the `atan2f' function. */


/* Define to 1 if you have the `atan2l' function. */


/* Define to 1 if you have the `atanf' function. */


/* Define to 1 if you have the `atanl' function. */


/* Define to 1 if you have the `at_quick_exit' function. */
/* #undef _GLIBCXX_HAVE_AT_QUICK_EXIT */

/* Define to 1 if the target assembler supports thread-local storage. */
/* #undef _GLIBCXX_HAVE_CC_TLS */

/* Define to 1 if you have the `ceilf' function. */


/* Define to 1 if you have the `ceill' function. */


/* Define to 1 if you have the <complex.h> header file. */


/* Define to 1 if you have the `cosf' function. */


/* Define to 1 if you have the `coshf' function. */


/* Define to 1 if you have the `coshl' function. */


/* Define to 1 if you have the `cosl' function. */


/* Define to 1 if you have the <dirent.h> header file. */


/* Define to 1 if you have the <dlfcn.h> header file. */


/* Define if EBADMSG exists. */
/* #undef _GLIBCXX_HAVE_EBADMSG */

/* Define if ECANCELED exists. */
/* #undef _GLIBCXX_HAVE_ECANCELED */

/* Define if ECHILD exists. */


/* Define if EIDRM exists. */
/* #undef _GLIBCXX_HAVE_EIDRM */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef _GLIBCXX_HAVE_ENDIAN_H */

/* Define if ENODATA exists. */
/* #undef _GLIBCXX_HAVE_ENODATA */

/* Define if ENOLINK exists. */
/* #undef _GLIBCXX_HAVE_ENOLINK */

/* Define if ENOSPC exists. */


/* Define if ENOSR exists. */
/* #undef _GLIBCXX_HAVE_ENOSR */

/* Define if ENOSTR exists. */
/* #undef _GLIBCXX_HAVE_ENOSTR */

/* Define if ENOTRECOVERABLE exists. */
/* #undef _GLIBCXX_HAVE_ENOTRECOVERABLE */

/* Define if ENOTSUP exists. */
/* #undef _GLIBCXX_HAVE_ENOTSUP */

/* Define if EOVERFLOW exists. */
/* #undef _GLIBCXX_HAVE_EOVERFLOW */

/* Define if EOWNERDEAD exists. */
/* #undef _GLIBCXX_HAVE_EOWNERDEAD */

/* Define if EPERM exists. */


/* Define if EPROTO exists. */
/* #undef _GLIBCXX_HAVE_EPROTO */

/* Define if ETIME exists. */
/* #undef _GLIBCXX_HAVE_ETIME */

/* Define if ETIMEDOUT exists. */
/* #undef _GLIBCXX_HAVE_ETIMEDOUT */

/* Define if ETXTBSY exists. */
/* #undef _GLIBCXX_HAVE_ETXTBSY */

/* Define if EWOULDBLOCK exists. */
/* #undef _GLIBCXX_HAVE_EWOULDBLOCK */

/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef _GLIBCXX_HAVE_EXECINFO_H */

/* Define to 1 if you have the `expf' function. */


/* Define to 1 if you have the `expl' function. */


/* Define to 1 if you have the `fabsf' function. */


/* Define to 1 if you have the `fabsl' function. */


/* Define to 1 if you have the <fcntl.h> header file. */


/* Define to 1 if you have the <fenv.h> header file. */


/* Define to 1 if you have the `finite' function. */


/* Define to 1 if you have the `finitef' function. */
/* #undef _GLIBCXX_HAVE_FINITEF */

/* Define to 1 if you have the `finitel' function. */
/* #undef _GLIBCXX_HAVE_FINITEL */

/* Define to 1 if you have the <float.h> header file. */


/* Define to 1 if you have the `floorf' function. */


/* Define to 1 if you have the `floorl' function. */


/* Define to 1 if you have the `fmodf' function. */


/* Define to 1 if you have the `fmodl' function. */


/* Define to 1 if you have the `fpclass' function. */


/* Define to 1 if you have the <fp.h> header file. */
/* #undef _GLIBCXX_HAVE_FP_H */

/* Define to 1 if you have the `frexpf' function. */


/* Define to 1 if you have the `frexpl' function. */


/* Define if _Unwind_GetIPInfo is available. */


/* Define if gets is available in <stdio.h> before C++14. */


/* Define to 1 if you have the `hypot' function. */


/* Define to 1 if you have the `hypotf' function. */


/* Define to 1 if you have the `hypotl' function. */


/* Define if you have the iconv() function. */
/* #undef _GLIBCXX_HAVE_ICONV */

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef _GLIBCXX_HAVE_IEEEFP_H */

/* Define if int64_t is available in <stdint.h>. */


/* Define if int64_t is a long. */
/* #undef _GLIBCXX_HAVE_INT64_T_LONG */

/* Define if int64_t is a long long. */


/* Define to 1 if you have the <inttypes.h> header file. */


/* Define to 1 if you have the `isinf' function. */
/* #undef _GLIBCXX_HAVE_ISINF */

/* Define to 1 if you have the `isinff' function. */
/* #undef _GLIBCXX_HAVE_ISINFF */

/* Define to 1 if you have the `isinfl' function. */
/* #undef _GLIBCXX_HAVE_ISINFL */

/* Define to 1 if you have the `isnan' function. */


/* Define to 1 if you have the `isnanf' function. */
/* #undef _GLIBCXX_HAVE_ISNANF */

/* Define to 1 if you have the `isnanl' function. */
/* #undef _GLIBCXX_HAVE_ISNANL */

/* Defined if iswblank exists. */


/* Define if LC_MESSAGES is available in <locale.h>. */
/* #undef _GLIBCXX_HAVE_LC_MESSAGES */

/* Define to 1 if you have the `ldexpf' function. */


/* Define to 1 if you have the `ldexpl' function. */


/* Define to 1 if you have the <libintl.h> header file. */
/* #undef _GLIBCXX_HAVE_LIBINTL_H */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_AS */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_DATA */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_FSIZE */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_RSS */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_VMEM */

/* Define if futex syscall is available. */
/* #undef _GLIBCXX_HAVE_LINUX_FUTEX */

/* Define to 1 if you have the <locale.h> header file. */


/* Define to 1 if you have the `log10f' function. */


/* Define to 1 if you have the `log10l' function. */


/* Define to 1 if you have the `logf' function. */


/* Define to 1 if you have the `logl' function. */


/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef _GLIBCXX_HAVE_MACHINE_ENDIAN_H */

/* Define to 1 if you have the <machine/param.h> header file. */
/* #undef _GLIBCXX_HAVE_MACHINE_PARAM_H */

/* Define if mbstate_t exists in wchar.h. */


/* Define to 1 if you have the <memory.h> header file. */


/* Define to 1 if you have the `modf' function. */
/* #undef _GLIBCXX_HAVE_MODF */

/* Define to 1 if you have the `modff' function. */


/* Define to 1 if you have the `modfl' function. */


/* Define to 1 if you have the <nan.h> header file. */
/* #undef _GLIBCXX_HAVE_NAN_H */

/* Define if <math.h> defines obsolete isinf function. */
/* #undef _GLIBCXX_HAVE_OBSOLETE_ISINF */

/* Define if <math.h> defines obsolete isnan function. */
/* #undef _GLIBCXX_HAVE_OBSOLETE_ISNAN */

/* Define if poll is available in <poll.h>. */
/* #undef _GLIBCXX_HAVE_POLL */

/* Define to 1 if you have the `powf' function. */


/* Define to 1 if you have the `powl' function. */


/* Define to 1 if you have the `qfpclass' function. */
/* #undef _GLIBCXX_HAVE_QFPCLASS */

/* Define to 1 if you have the `quick_exit' function. */
/* #undef _GLIBCXX_HAVE_QUICK_EXIT */

/* Define to 1 if you have the `setenv' function. */
/* #undef _GLIBCXX_HAVE_SETENV */

/* Define to 1 if you have the `sincos' function. */
/* #undef _GLIBCXX_HAVE_SINCOS */

/* Define to 1 if you have the `sincosf' function. */
/* #undef _GLIBCXX_HAVE_SINCOSF */

/* Define to 1 if you have the `sincosl' function. */
/* #undef _GLIBCXX_HAVE_SINCOSL */

/* Define to 1 if you have the `sinf' function. */


/* Define to 1 if you have the `sinhf' function. */


/* Define to 1 if you have the `sinhl' function. */


/* Define to 1 if you have the `sinl' function. */


/* Defined if sleep exists. */


/* Define to 1 if you have the `sqrtf' function. */


/* Define to 1 if you have the `sqrtl' function. */


/* Define to 1 if you have the <stdalign.h> header file. */


/* Define to 1 if you have the <stdbool.h> header file. */


/* Define to 1 if you have the <stdint.h> header file. */


/* Define to 1 if you have the <stdlib.h> header file. */


/* Define if strerror_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRERROR_L */

/* Define if strerror_r is available in <string.h>. */


/* Define to 1 if you have the <strings.h> header file. */


/* Define to 1 if you have the <string.h> header file. */


/* Define to 1 if you have the `strtof' function. */


/* Define to 1 if you have the `strtold' function. */


/* Define to 1 if `d_type' is a member of `struct dirent'. */


/* Define if strxfrm_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRXFRM_L */

/* Define to 1 if the target runtime linker supports binding the same symbol
   to different versions. */


/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/ipc.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IPC_H */

/* Define to 1 if you have the <sys/isa_defs.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_ISA_DEFS_H */

/* Define to 1 if you have the <sys/machine.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_MACHINE_H */

/* Define to 1 if you have the <sys/param.h> header file. */


/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have a suitable <sys/sdt.h> header file */
/* #undef _GLIBCXX_HAVE_SYS_SDT_H */

/* Define to 1 if you have the <sys/sem.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SEM_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_STATVFS_H */

/* Define to 1 if you have the <sys/stat.h> header file. */


/* Define to 1 if you have the <sys/sysinfo.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SYSINFO_H */

/* Define to 1 if you have the <sys/time.h> header file. */


/* Define to 1 if you have the <sys/types.h> header file. */


/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_UIO_H */

/* Define if S_IFREG is available in <sys/stat.h>. */
/* #undef _GLIBCXX_HAVE_S_IFREG */

/* Define if S_IFREG is available in <sys/stat.h>. */


/* Define to 1 if you have the `tanf' function. */


/* Define to 1 if you have the `tanhf' function. */


/* Define to 1 if you have the `tanhl' function. */


/* Define to 1 if you have the `tanl' function. */


/* Define to 1 if you have the <tgmath.h> header file. */


/* Define to 1 if the target supports thread-local storage. */
/* #undef _GLIBCXX_HAVE_TLS */

/* Define to 1 if you have the <uchar.h> header file. */
/* #undef _GLIBCXX_HAVE_UCHAR_H */

/* Define to 1 if you have the <unistd.h> header file. */


/* Defined if usleep exists. */


/* Define to 1 if you have the <utime.h> header file. */


/* Defined if vfwscanf exists. */


/* Defined if vswscanf exists. */


/* Defined if vwscanf exists. */


/* Define to 1 if you have the <wchar.h> header file. */


/* Defined if wcstof exists. */


/* Define to 1 if you have the <wctype.h> header file. */


/* Defined if Sleep exists. */
/* #undef _GLIBCXX_HAVE_WIN32_SLEEP */

/* Define if writev is available in <sys/uio.h>. */
/* #undef _GLIBCXX_HAVE_WRITEV */

/* Define to 1 if you have the `_acosf' function. */
/* #undef _GLIBCXX_HAVE__ACOSF */

/* Define to 1 if you have the `_acosl' function. */
/* #undef _GLIBCXX_HAVE__ACOSL */

/* Define to 1 if you have the `_asinf' function. */
/* #undef _GLIBCXX_HAVE__ASINF */

/* Define to 1 if you have the `_asinl' function. */
/* #undef _GLIBCXX_HAVE__ASINL */

/* Define to 1 if you have the `_atan2f' function. */
/* #undef _GLIBCXX_HAVE__ATAN2F */

/* Define to 1 if you have the `_atan2l' function. */
/* #undef _GLIBCXX_HAVE__ATAN2L */

/* Define to 1 if you have the `_atanf' function. */
/* #undef _GLIBCXX_HAVE__ATANF */

/* Define to 1 if you have the `_atanl' function. */
/* #undef _GLIBCXX_HAVE__ATANL */

/* Define to 1 if you have the `_ceilf' function. */
/* #undef _GLIBCXX_HAVE__CEILF */

/* Define to 1 if you have the `_ceill' function. */
/* #undef _GLIBCXX_HAVE__CEILL */

/* Define to 1 if you have the `_cosf' function. */
/* #undef _GLIBCXX_HAVE__COSF */

/* Define to 1 if you have the `_coshf' function. */
/* #undef _GLIBCXX_HAVE__COSHF */

/* Define to 1 if you have the `_coshl' function. */
/* #undef _GLIBCXX_HAVE__COSHL */

/* Define to 1 if you have the `_cosl' function. */
/* #undef _GLIBCXX_HAVE__COSL */

/* Define to 1 if you have the `_expf' function. */
/* #undef _GLIBCXX_HAVE__EXPF */

/* Define to 1 if you have the `_expl' function. */
/* #undef _GLIBCXX_HAVE__EXPL */

/* Define to 1 if you have the `_fabsf' function. */
/* #undef _GLIBCXX_HAVE__FABSF */

/* Define to 1 if you have the `_fabsl' function. */
/* #undef _GLIBCXX_HAVE__FABSL */

/* Define to 1 if you have the `_finite' function. */
/* #undef _GLIBCXX_HAVE__FINITE */

/* Define to 1 if you have the `_finitef' function. */
/* #undef _GLIBCXX_HAVE__FINITEF */

/* Define to 1 if you have the `_finitel' function. */
/* #undef _GLIBCXX_HAVE__FINITEL */

/* Define to 1 if you have the `_floorf' function. */
/* #undef _GLIBCXX_HAVE__FLOORF */

/* Define to 1 if you have the `_floorl' function. */
/* #undef _GLIBCXX_HAVE__FLOORL */

/* Define to 1 if you have the `_fmodf' function. */
/* #undef _GLIBCXX_HAVE__FMODF */

/* Define to 1 if you have the `_fmodl' function. */
/* #undef _GLIBCXX_HAVE__FMODL */

/* Define to 1 if you have the `_fpclass' function. */
/* #undef _GLIBCXX_HAVE__FPCLASS */

/* Define to 1 if you have the `_frexpf' function. */
/* #undef _GLIBCXX_HAVE__FREXPF */

/* Define to 1 if you have the `_frexpl' function. */
/* #undef _GLIBCXX_HAVE__FREXPL */

/* Define to 1 if you have the `_hypot' function. */
/* #undef _GLIBCXX_HAVE__HYPOT */

/* Define to 1 if you have the `_hypotf' function. */
/* #undef _GLIBCXX_HAVE__HYPOTF */

/* Define to 1 if you have the `_hypotl' function. */
/* #undef _GLIBCXX_HAVE__HYPOTL */

/* Define to 1 if you have the `_isinf' function. */
/* #undef _GLIBCXX_HAVE__ISINF */

/* Define to 1 if you have the `_isinff' function. */
/* #undef _GLIBCXX_HAVE__ISINFF */

/* Define to 1 if you have the `_isinfl' function. */
/* #undef _GLIBCXX_HAVE__ISINFL */

/* Define to 1 if you have the `_isnan' function. */
/* #undef _GLIBCXX_HAVE__ISNAN */

/* Define to 1 if you have the `_isnanf' function. */
/* #undef _GLIBCXX_HAVE__ISNANF */

/* Define to 1 if you have the `_isnanl' function. */
/* #undef _GLIBCXX_HAVE__ISNANL */

/* Define to 1 if you have the `_ldexpf' function. */
/* #undef _GLIBCXX_HAVE__LDEXPF */

/* Define to 1 if you have the `_ldexpl' function. */
/* #undef _GLIBCXX_HAVE__LDEXPL */

/* Define to 1 if you have the `_log10f' function. */
/* #undef _GLIBCXX_HAVE__LOG10F */

/* Define to 1 if you have the `_log10l' function. */
/* #undef _GLIBCXX_HAVE__LOG10L */

/* Define to 1 if you have the `_logf' function. */
/* #undef _GLIBCXX_HAVE__LOGF */

/* Define to 1 if you have the `_logl' function. */
/* #undef _GLIBCXX_HAVE__LOGL */

/* Define to 1 if you have the `_modf' function. */
/* #undef _GLIBCXX_HAVE__MODF */

/* Define to 1 if you have the `_modff' function. */
/* #undef _GLIBCXX_HAVE__MODFF */

/* Define to 1 if you have the `_modfl' function. */
/* #undef _GLIBCXX_HAVE__MODFL */

/* Define to 1 if you have the `_powf' function. */
/* #undef _GLIBCXX_HAVE__POWF */

/* Define to 1 if you have the `_powl' function. */
/* #undef _GLIBCXX_HAVE__POWL */

/* Define to 1 if you have the `_qfpclass' function. */
/* #undef _GLIBCXX_HAVE__QFPCLASS */

/* Define to 1 if you have the `_sincos' function. */
/* #undef _GLIBCXX_HAVE__SINCOS */

/* Define to 1 if you have the `_sincosf' function. */
/* #undef _GLIBCXX_HAVE__SINCOSF */

/* Define to 1 if you have the `_sincosl' function. */
/* #undef _GLIBCXX_HAVE__SINCOSL */

/* Define to 1 if you have the `_sinf' function. */
/* #undef _GLIBCXX_HAVE__SINF */

/* Define to 1 if you have the `_sinhf' function. */
/* #undef _GLIBCXX_HAVE__SINHF */

/* Define to 1 if you have the `_sinhl' function. */
/* #undef _GLIBCXX_HAVE__SINHL */

/* Define to 1 if you have the `_sinl' function. */
/* #undef _GLIBCXX_HAVE__SINL */

/* Define to 1 if you have the `_sqrtf' function. */
/* #undef _GLIBCXX_HAVE__SQRTF */

/* Define to 1 if you have the `_sqrtl' function. */
/* #undef _GLIBCXX_HAVE__SQRTL */

/* Define to 1 if you have the `_tanf' function. */
/* #undef _GLIBCXX_HAVE__TANF */

/* Define to 1 if you have the `_tanhf' function. */
/* #undef _GLIBCXX_HAVE__TANHF */

/* Define to 1 if you have the `_tanhl' function. */
/* #undef _GLIBCXX_HAVE__TANHL */

/* Define to 1 if you have the `_tanl' function. */
/* #undef _GLIBCXX_HAVE__TANL */

/* Define to 1 if you have the `__cxa_thread_atexit_impl' function. */
/* #undef _GLIBCXX_HAVE___CXA_THREAD_ATEXIT_IMPL */

/* Define as const if the declaration of iconv() needs const. */
/* #undef _GLIBCXX_ICONV_CONST */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */


/* Name of package */
/* #undef _GLIBCXX_PACKAGE */

/* Define to the address where bug reports for this package should be sent. */


/* Define to the full name of this package. */


/* Define to the full name and version of this package. */


/* Define to the one symbol short name of this package. */


/* Define to the home page for this package. */


/* Define to the version of this package. */


/* The size of `char', as computed by sizeof. */
/* #undef SIZEOF_CHAR */

/* The size of `int', as computed by sizeof. */
/* #undef SIZEOF_INT */

/* The size of `long', as computed by sizeof. */
/* #undef SIZEOF_LONG */

/* The size of `short', as computed by sizeof. */
/* #undef SIZEOF_SHORT */

/* The size of `void *', as computed by sizeof. */
/* #undef SIZEOF_VOID_P */

/* Define to 1 if you have the ANSI C header files. */


/* Version number of package */
/* #undef _GLIBCXX_VERSION */

/* Define if C99 functions in <complex.h> should be used in <complex> for
   C++11. Using compiler builtins for these functions requires corresponding
   C99 library functions to be present. */


/* Define if C99 functions or macros in <math.h> should be imported in <cmath>
   in namespace std for C++11. */


/* Define if C99 functions or macros in <stdio.h> should be imported in
   <cstdio> in namespace std for C++11. */


/* Define if C99 functions or macros in <stdlib.h> should be imported in
   <cstdlib> in namespace std for C++11. */


/* Define if C99 functions or macros in <wchar.h> should be imported in
   <cwchar> in namespace std for C++11. */


/* Define if C99 functions in <complex.h> should be used in <complex> for
   C++98. Using compiler builtins for these functions requires corresponding
   C99 library functions to be present. */


/* Define if C99 functions or macros in <math.h> should be imported in <cmath>
   in namespace std for C++98. */


/* Define if C99 functions or macros in <stdio.h> should be imported in
   <cstdio> in namespace std for C++98. */
/* #undef _GLIBCXX98_USE_C99_STDIO */

/* Define if C99 functions or macros in <stdlib.h> should be imported in
   <cstdlib> in namespace std for C++98. */
/* #undef _GLIBCXX98_USE_C99_STDLIB */

/* Define if C99 functions or macros in <wchar.h> should be imported in
   <cwchar> in namespace std for C++98. */
/* #undef _GLIBCXX98_USE_C99_WCHAR */

/* Define if the compiler supports C++11 atomics. */


/* Define to use concept checking code from the boost libraries. */
/* #undef _GLIBCXX_CONCEPT_CHECKS */

/* Define to 1 if a fully dynamic basic_string is wanted, 0 to disable,
   undefined for platform defaults */


/* Define if gthreads library is available. */
/* #undef _GLIBCXX_HAS_GTHREADS */

/* Define to 1 if a full hosted library is built, or 0 if freestanding. */


/* Define if compatibility should be provided for -mlong-double-64. */

/* Define to the letter to which size_t is mangled. */


/* Define if ptrdiff_t is int. */


/* Define if using setrlimit to set resource limits during "make check" */
/* #undef _GLIBCXX_RES_LIMITS */

/* Define if size_t is unsigned int. */


/* Define to the value of the EOF integer constant. */


/* Define to the value of the SEEK_CUR integer constant. */


/* Define to the value of the SEEK_END integer constant. */


/* Define to use symbol versioning in the shared library. */


/* Define to use darwin versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_DARWIN */

/* Define to use GNU versioning in the shared library. */


/* Define to use GNU namespace versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_GNU_NAMESPACE */

/* Define to use Sun versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_SUN */

/* Define if C11 functions in <uchar.h> should be imported into namespace std
   in <cuchar>. */
/* #undef _GLIBCXX_USE_C11_UCHAR_CXX11 */

/* Define if C99 functions or macros from <wchar.h>, <math.h>, <complex.h>,
   <stdio.h>, and <stdlib.h> can be used or exposed. */
/* #undef _GLIBCXX_USE_C99 */

/* Define if C99 functions in <complex.h> should be used in <tr1/complex>.
   Using compiler builtins for these functions requires corresponding C99
   library functions to be present. */


/* Define if C99 functions in <ctype.h> should be imported in <tr1/cctype> in
   namespace std::tr1. */
/* #undef _GLIBCXX_USE_C99_CTYPE_TR1 */

/* Define if C99 functions in <fenv.h> should be imported in <tr1/cfenv> in
   namespace std::tr1. */


/* Define if C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */


/* Define if wchar_t C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */


/* Define if C99 functions or macros in <math.h> should be imported in
   <tr1/cmath> in namespace std::tr1. */


/* Define if C99 types in <stdint.h> should be imported in <tr1/cstdint> in
   namespace std::tr1. */


/* Defined if clock_gettime syscall has monotonic and realtime clock support.
   */
/* #undef _GLIBCXX_USE_CLOCK_GETTIME_SYSCALL */

/* Defined if clock_gettime has monotonic clock support. */
/* #undef _GLIBCXX_USE_CLOCK_MONOTONIC */

/* Defined if clock_gettime has realtime clock support. */
/* #undef _GLIBCXX_USE_CLOCK_REALTIME */

/* Define if ISO/IEC TR 24733 decimal floating point types are supported on
   this host. */


/* Define if fchmod is available in <sys/stat.h>. */
/* #undef _GLIBCXX_USE_FCHMOD */

/* Define if fchmodat is available in <sys/stat.h>. */
/* #undef _GLIBCXX_USE_FCHMODAT */

/* Define if __float128 is supported on this host. */


/* Defined if gettimeofday is available. */


/* Define if get_nprocs is available in <sys/sysinfo.h>. */
/* #undef _GLIBCXX_USE_GET_NPROCS */

/* Define if __int128 is supported on this host. */
/* #undef _GLIBCXX_USE_INT128 */

/* Define if LFS support is available. */
/* #undef _GLIBCXX_USE_LFS */

/* Define if code specialized for long long should be used. */


/* Defined if nanosleep is available. */
/* #undef _GLIBCXX_USE_NANOSLEEP */

/* Define if NLS translations are to be used. */
/* #undef _GLIBCXX_USE_NLS */

/* Define if pthreads_num_processors_np is available in <pthread.h>. */
/* #undef _GLIBCXX_USE_PTHREADS_NUM_PROCESSORS_NP */

/* Define if POSIX read/write locks are available in <gthr.h>. */
/* #undef _GLIBCXX_USE_PTHREAD_RWLOCK_T */

/* Define if /dev/random and /dev/urandom are available for the random_device
   of TR1 (Chapter 5.1). */
/* #undef _GLIBCXX_USE_RANDOM_TR1 */

/* Define if usable realpath is available in <stdlib.h>. */
/* #undef _GLIBCXX_USE_REALPATH */

/* Defined if sched_yield is available. */
/* #undef _GLIBCXX_USE_SCHED_YIELD */

/* Define if _SC_NPROCESSORS_ONLN is available in <unistd.h>. */
/* #undef _GLIBCXX_USE_SC_NPROCESSORS_ONLN */

/* Define if _SC_NPROC_ONLN is available in <unistd.h>. */
/* #undef _GLIBCXX_USE_SC_NPROC_ONLN */

/* Define if sendfile is available in <sys/sendfile.h>. */
/* #undef _GLIBCXX_USE_SENDFILE */

/* Define if struct stat has timespec members. */
/* #undef _GLIBCXX_USE_ST_MTIM */

/* Define if sysctl(), CTL_HW and HW_NCPU are available in <sys/sysctl.h>. */
/* #undef _GLIBCXX_USE_SYSCTL_HW_NCPU */

/* Define if obsolescent tmpnam is available in <stdio.h>. */


/* Define if utimensat and UTIME_OMIT are available in <sys/stat.h> and
   AT_FDCWD in <fcntl.h>. */
/* #undef _GLIBCXX_USE_UTIMENSAT */

/* Define if code specialized for wchar_t should be used. */


/* Define to 1 if a verbose library is built, or 0 otherwise. */


/* Defined if as can handle rdrand. */


/* Define to 1 if mutex_timedlock is available. */


/* Define if all C++11 floating point overloads are available in <math.h>.  */

/* #undef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP */


/* Define if all C++11 integral type overloads are available in <math.h>.  */

/* #undef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT */
# 39 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stringfwd.h" 1 3
// <string> Forward declarations -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/stringfwd.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{string}
 */

//
// ISO C++ 14882: 21 Strings library
//




       
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stringfwd.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stringfwd.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\memoryfwd.h" 1 3
// <memory> Forward declarations -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 * Copyright (c) 1996-1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/memoryfwd.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{memory}
 */




       
# 47 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\memoryfwd.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 49 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\memoryfwd.h" 2 3

namespace std
{


  /**
   * @defgroup allocators Allocators
   * @ingroup memory
   *
   * Classes encapsulating memory operations.
   *
   * @{
   */

  template<typename>
    class allocator;

  template<>
    class allocator<void>;

  /// Declare uses_allocator so it can be specialized in \<queue\> etc.
  template<typename, typename>
    struct uses_allocator;

  /// @} group memory


} // namespace std
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stringfwd.h" 2 3

namespace std
{


  /**
   *  @defgroup strings Strings
   *
   *  @{
  */

  template<class _CharT>
    struct char_traits;

  template<> struct char_traits<char>;


  template<> struct char_traits<wchar_t>;




  template<> struct char_traits<char16_t>;
  template<> struct char_traits<char32_t>;


namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  /// A string of @c char
  typedef basic_string<char> string;


  /// A string of @c wchar_t
  typedef basic_string<wchar_t> wstring;




  /// A string of @c char16_t
  typedef basic_string<char16_t> u16string;

  /// A string of @c char32_t
  typedef basic_string<char32_t> u32string;


}

  /** @}  */


} // namespace std
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\char_traits.h" 1 3
// Character Traits for use by standard string and iostream -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/char_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{string}
 */

//
// ISO C++ 14882: 21  Strings library
//




       
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\char_traits.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 1 3
// Core algorithmic facilities -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_algobase.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{algorithm}
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 60 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functexcept.h" 1 3
// Function-Based Exception Support -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/functexcept.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{exception}
 *
 *  This header provides support for -fno-exceptions.
 */

//
// ISO C++ 14882: 19.1  Exception classes
//




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functexcept.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\exception_defines.h" 1 3
// -fno-exceptions Support -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/exception_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{exception}
 */
# 39 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\exception_defines.h" 3
// Else proceed normally.
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functexcept.h" 2 3

namespace std
{


  // Helper for exception objects in <except>
  void
  __throw_bad_exception(void) __attribute__((__noreturn__));

  // Helper for exception objects in <new>
  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));

  // Helper for exception objects in <typeinfo>
  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));

  // Helpers for exception objects in <stdexcept>
  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range_fmt(const char*, ...) __attribute__((__noreturn__))
    __attribute__((__format__(__gnu_printf__, 1, 2)));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));

  // Helpers for exception objects in <ios>
  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));

  // Helpers for exception objects in <functional>
  void
  __throw_bad_function_call() __attribute__((__noreturn__));


} // namespace
# 61 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cpp_type_traits.h" 1 3
// The  -*- C++ -*- type traits classes for internal use in libstdc++

// Copyright (C) 2000-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cpp_type_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{ext/type_traits}
 */

// Written by Gabriel Dos Reis <dosreis@cmla.ens-cachan.fr>




       
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cpp_type_traits.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cpp_type_traits.h" 2 3

//
// This file provides some compile-time information about various types.
// These representations were designed, on purpose, to be constant-expressions
// and not types as found in <bits/type_traits.h>.  In particular, they
// can be used in control structures and the optimizer hopefully will do
// the obvious thing.
//
// Why integral expressions, and not functions nor types?
// Firstly, these compile-time entities are used as template-arguments
// so function return values won't work:  We need compile-time entities.
// We're left with types and constant  integral expressions.
// Secondly, from the point of view of ease of use, type-based compile-time
// information is -not- *that* convenient.  On has to write lots of
// overloaded functions and to hope that the compiler will select the right
// one. As a net effect, the overall structure isn't very clear at first
// glance.
// Thirdly, partial ordering and overload resolution (of function templates)
// is highly costly in terms of compiler-resource.  It is a Good Thing to
// keep these resource consumption as least as possible.
//
// See valarray_array.h for a case use.
//
// -- Gaby (dosreis@cmla.ens-cachan.fr) 2000-03-06.
//
// Update 2005: types are also provided and <bits/type_traits.h> has been
// removed.
//

extern "C++" {

namespace std
{


  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };

  // N.B. The conversions to bool are needed due to the issue
  // explained in c++/19404.
  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };

  // Compare for equality of types.
  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  // Holds if the template-argument is a void type.
  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  //
  // Integer types
  //
  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  // Thirteen specializations (yes there are eleven standard integer
  // types; <em>long long</em> and <em>unsigned long long</em> are
  // supported as extensions).  Up to four target-specific __int<N>
  // types are supported as well.
  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };



  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 275 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cpp_type_traits.h" 3
  //
  // Floating point types
  //
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  // three specializations (float, double and 'long double')
  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  //
  // Pointer types
  //
  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  //
  // An arithmetic type is an integer type or a floating point type
  //
  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };

  //
  // A scalar type is an arithmetic type or a pointer type
  // 
  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };

  //
  // For use in std::copy and std::find overloads for streambuf iterators.
  //
  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  //
  // Move iterator type
  //
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  // Fallback implementation of the function in bits/stl_iterator.h used to
  // remove the move_iterator wrapper.
  template<typename _Iterator>
    inline _Iterator
    __miter_base(_Iterator __it)
    { return __it; }


} // namespace
} // extern "C++"
# 62 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h" 1 3
// -*- C++ -*-

// Copyright (C) 2005-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/type_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */




       
# 33 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 35 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cpp_type_traits.h" 1 3
// The  -*- C++ -*- type traits classes for internal use in libstdc++

// Copyright (C) 2000-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cpp_type_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{ext/type_traits}
 */

// Written by Gabriel Dos Reis <dosreis@cmla.ens-cachan.fr>
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h" 2 3

extern "C++" {

namespace __gnu_cxx
{


  // Define a nested type if some predicate holds.
  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };


  // Conditional expression for types. If true, first, if false, second.
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };


  // Given an integral builtin type, return the corresponding unsigned type.
  template<typename _Tp>
    struct __add_unsigned
    {
    
# 67 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h"
   public
# 67 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h" 3
          :
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };

  // Declare but don't define.
  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;


  // Given an integral builtin type, return the corresponding signed type.
  template<typename _Tp>
    struct __remove_unsigned
    {
    
# 110 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h"
   public
# 110 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h" 3
          :
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };

  // Declare but don't define.
  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;


  // For use in string and vstring.
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }


  inline bool
  __is_null_pointer(std::nullptr_t)
  { return true; }


  // For complex and cmath
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  // No nested __type member for non-integer non-floating point types,
  // allows this type to be used for SFINAE to constrain overloads in
  // <cmath> and <complex> to only the intended types.
  template<typename _Tp>
    struct __promote<_Tp, false>
    { };

  template<>
    struct __promote<long double>
    { typedef long double __type; };

  template<>
    struct __promote<double>
    { typedef double __type; };

  template<>
    struct __promote<float>
    { typedef float __type; };

  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };


} // namespace
} // extern "C++"
# 63 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 1 3
// -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/numeric_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */




       
# 33 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cpp_type_traits.h" 1 3
// The  -*- C++ -*- type traits classes for internal use in libstdc++

// Copyright (C) 2000-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cpp_type_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{ext/type_traits}
 */

// Written by Gabriel Dos Reis <dosreis@cmla.ens-cachan.fr>
# 35 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h" 1 3
// -*- C++ -*-

// Copyright (C) 2005-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/type_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 2 3

namespace __gnu_cxx
{


  // Compile time constants for builtin types.
  // Sadly std::numeric_limits member functions cannot be used for this.
# 54 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {
      // Only integers for initialization of member constant.
      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);

      // NB: these two also available in std::numeric_limits as compile
      // time constants, but <limits> is big and we avoid including it.
      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 99 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {
      // Only floating point types. See N1822. 
      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 643L / 2136);

      // See above comment...
      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };


} // namespace
# 64 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_pair.h" 1 3
// Pair implementation -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_pair.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\concept_check.h" 1 3
// Concept-checking control -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/concept_check.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 */




       
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\concept_check.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\concept_check.h" 2 3

// All places in libstdc++-v3 where these are used, or /might/ be used, or
// don't need to be used, or perhaps /should/ be used, are commented with
// "concept requirements" (and maybe some more text).  So grep like crazy
// if you're looking for additional places to use these.

// Concept-checking code is off by default unless users turn it on via
// configure options or editing c++config.h.
// It is not supported for freestanding implementations.
# 35 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 2 3

namespace std
{


  // Used, in C++03 mode too, by allocators, etc.
  /**
   *  @brief Same as C++11 std::addressof
   *  @ingroup utilities
   */
  template<typename _Tp>
    inline _Tp*
    __addressof(_Tp& __r) noexcept
    {
      return reinterpret_cast<_Tp*>
 (&const_cast<char&>(reinterpret_cast<const volatile char&>(__r)));
    }


} // namespace


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 1 3
// C++11 <type_traits> -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/type_traits
 *  This is a Standard C++ Library header.
 */




       
# 33 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3





# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 39 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 2 3



namespace std
{
  typedef short unsigned int uint_least16_t;
  typedef unsigned int uint_least32_t;
}





namespace std
{


  /**
   * @defgroup metaprogramming Metaprogramming
   * @ingroup utilities
   *
   * Template utilities for compile-time introspection and modification,
   * including type classification traits, type property inspection traits
   * and type transformation traits.
   *
   * @{
   */

  /// integral_constant
  template<typename _Tp, _Tp __v>
    struct integral_constant
    {
      static constexpr _Tp value = __v;
      typedef _Tp value_type;
      typedef integral_constant<_Tp, __v> type;
      constexpr operator value_type() const { return value; }




      constexpr value_type operator()() const { return value; }

    };

  template<typename _Tp, _Tp __v>
    constexpr _Tp integral_constant<_Tp, __v>::value;

  /// The type used as a compile-time boolean with true value.
  typedef integral_constant<bool, true> true_type;

  /// The type used as a compile-time boolean with false value.
  typedef integral_constant<bool, false> false_type;

  template<bool __v>
    using __bool_constant = integral_constant<bool, __v>;







  // Meta programming helper types.

  template<bool, typename, typename>
    struct conditional;

  template<typename...>
    struct __or_;

  template<>
    struct __or_<>
    : public false_type
    { };

  template<typename _B1>
    struct __or_<_B1>
    : public _B1
    { };

  template<typename _B1, typename _B2>
    struct __or_<_B1, _B2>
    : public conditional<_B1::value, _B1, _B2>::type
    { };

  template<typename _B1, typename _B2, typename _B3, typename... _Bn>
    struct __or_<_B1, _B2, _B3, _Bn...>
    : public conditional<_B1::value, _B1, __or_<_B2, _B3, _Bn...>>::type
    { };

  template<typename...>
    struct __and_;

  template<>
    struct __and_<>
    : public true_type
    { };

  template<typename _B1>
    struct __and_<_B1>
    : public _B1
    { };

  template<typename _B1, typename _B2>
    struct __and_<_B1, _B2>
    : public conditional<_B1::value, _B2, _B1>::type
    { };

  template<typename _B1, typename _B2, typename _B3, typename... _Bn>
    struct __and_<_B1, _B2, _B3, _Bn...>
    : public conditional<_B1::value, __and_<_B2, _B3, _Bn...>, _B1>::type
    { };

  template<typename _Pp>
    struct __not_
    : public integral_constant<bool, !_Pp::value>
    { };

  struct __nonesuch {
    __nonesuch() = delete;
    ~__nonesuch() = delete;
    __nonesuch(__nonesuch const&) = delete;
    void operator=(__nonesuch const&) = delete;
  };
# 184 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
  // For several sfinae-friendly trait implementations we transport both the
  // result information (as the member type) and the failure information (no
  // member type). This is very similar to std::enable_if, but we cannot use
  // them, because we need to derive from them as an implementation detail.

  template<typename _Tp>
    struct __success_type
    { typedef _Tp type; };

  struct __failure_type
  { };

  // Primary type categories.

  template<typename>
    struct remove_cv;

  template<typename>
    struct __is_void_helper
    : public false_type { };

  template<>
    struct __is_void_helper<void>
    : public true_type { };

  /// is_void
  template<typename _Tp>
    struct is_void
    : public __is_void_helper<typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_integral_helper
    : public false_type { };

  template<>
    struct __is_integral_helper<bool>
    : public true_type { };

  template<>
    struct __is_integral_helper<char>
    : public true_type { };

  template<>
    struct __is_integral_helper<signed char>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned char>
    : public true_type { };


  template<>
    struct __is_integral_helper<wchar_t>
    : public true_type { };


  template<>
    struct __is_integral_helper<char16_t>
    : public true_type { };

  template<>
    struct __is_integral_helper<char32_t>
    : public true_type { };

  template<>
    struct __is_integral_helper<short>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned short>
    : public true_type { };

  template<>
    struct __is_integral_helper<int>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned int>
    : public true_type { };

  template<>
    struct __is_integral_helper<long>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned long>
    : public true_type { };

  template<>
    struct __is_integral_helper<long long>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned long long>
    : public true_type { };

  // Conditionalizing on __STRICT_ANSI__ here will break any port that
  // uses one of these types for size_t.
# 320 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
  /// is_integral
  template<typename _Tp>
    struct is_integral
    : public __is_integral_helper<typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_floating_point_helper
    : public false_type { };

  template<>
    struct __is_floating_point_helper<float>
    : public true_type { };

  template<>
    struct __is_floating_point_helper<double>
    : public true_type { };

  template<>
    struct __is_floating_point_helper<long double>
    : public true_type { };


  template<>
    struct __is_floating_point_helper<__float128>
    : public true_type { };


  /// is_floating_point
  template<typename _Tp>
    struct is_floating_point
    : public __is_floating_point_helper<typename remove_cv<_Tp>::type>::type
    { };

  /// is_array
  template<typename>
    struct is_array
    : public false_type { };

  template<typename _Tp, std::size_t _Size>
    struct is_array<_Tp[_Size]>
    : public true_type { };

  template<typename _Tp>
    struct is_array<_Tp[]>
    : public true_type { };

  template<typename>
    struct __is_pointer_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_pointer_helper<_Tp*>
    : public true_type { };

  /// is_pointer
  template<typename _Tp>
    struct is_pointer
    : public __is_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };

  /// is_lvalue_reference
  template<typename>
    struct is_lvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_lvalue_reference<_Tp&>
    : public true_type { };

  /// is_rvalue_reference
  template<typename>
    struct is_rvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_rvalue_reference<_Tp&&>
    : public true_type { };

  template<typename>
    struct is_function;

  template<typename>
    struct __is_member_object_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_object_pointer_helper<_Tp _Cp::*>
    : public integral_constant<bool, !is_function<_Tp>::value> { };

  /// is_member_object_pointer
  template<typename _Tp>
    struct is_member_object_pointer
    : public __is_member_object_pointer_helper<
    typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_member_function_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_function_pointer_helper<_Tp _Cp::*>
    : public integral_constant<bool, is_function<_Tp>::value> { };

  /// is_member_function_pointer
  template<typename _Tp>
    struct is_member_function_pointer
    : public __is_member_function_pointer_helper<
    typename remove_cv<_Tp>::type>::type
    { };

  /// is_enum
  template<typename _Tp>
    struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)>
    { };

  /// is_union
  template<typename _Tp>
    struct is_union
    : public integral_constant<bool, __is_union(_Tp)>
    { };

  /// is_class
  template<typename _Tp>
    struct is_class
    : public integral_constant<bool, __is_class(_Tp)>
    { };

  /// is_function
  template<typename>
    struct is_function
    : public false_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...)>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......)>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile &&>
    : public true_type { };



  template<typename>
    struct __is_null_pointer_helper
    : public false_type { };

  template<>
    struct __is_null_pointer_helper<std::nullptr_t>
    : public true_type { };

  /// is_null_pointer (LWG 2247).
  template<typename _Tp>
    struct is_null_pointer
    : public __is_null_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };

  /// __is_nullptr_t (extension).
  template<typename _Tp>
    struct __is_nullptr_t
    : public is_null_pointer<_Tp>
    { };

  // Composite type categories.

  /// is_reference
  template<typename _Tp>
    struct is_reference
    : public __or_<is_lvalue_reference<_Tp>,
                   is_rvalue_reference<_Tp>>::type
    { };

  /// is_arithmetic
  template<typename _Tp>
    struct is_arithmetic
    : public __or_<is_integral<_Tp>, is_floating_point<_Tp>>::type
    { };

  /// is_fundamental
  template<typename _Tp>
    struct is_fundamental
    : public __or_<is_arithmetic<_Tp>, is_void<_Tp>,
     is_null_pointer<_Tp>>::type
    { };

  /// is_object
  template<typename _Tp>
    struct is_object
    : public __not_<__or_<is_function<_Tp>, is_reference<_Tp>,
                          is_void<_Tp>>>::type
    { };

  template<typename>
    struct is_member_pointer;

  /// is_scalar
  template<typename _Tp>
    struct is_scalar
    : public __or_<is_arithmetic<_Tp>, is_enum<_Tp>, is_pointer<_Tp>,
                   is_member_pointer<_Tp>, is_null_pointer<_Tp>>::type
    { };

  /// is_compound
  template<typename _Tp>
    struct is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> { };

  template<typename _Tp>
    struct __is_member_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_pointer_helper<_Tp _Cp::*>
    : public true_type { };

  /// is_member_pointer
  template<typename _Tp>
    struct is_member_pointer
    : public __is_member_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };

  // Utility to detect referenceable types ([defns.referenceable]).

  template<typename _Tp>
    struct __is_referenceable
    : public __or_<is_object<_Tp>, is_reference<_Tp>>::type
    { };

  template<typename _Res, typename... _Args>
    struct __is_referenceable<_Res(_Args...)>
    : public true_type
    { };

  template<typename _Res, typename... _Args>
    struct __is_referenceable<_Res(_Args......)>
    : public true_type
    { };

  // Type properties.

  /// is_const
  template<typename>
    struct is_const
    : public false_type { };

  template<typename _Tp>
    struct is_const<_Tp const>
    : public true_type { };

  /// is_volatile
  template<typename>
    struct is_volatile
    : public false_type { };

  template<typename _Tp>
    struct is_volatile<_Tp volatile>
    : public true_type { };

  /// is_trivial
  template<typename _Tp>
    struct is_trivial
    : public integral_constant<bool, __is_trivial(_Tp)>
    { };

  // is_trivially_copyable
  template<typename _Tp>
    struct is_trivially_copyable
    : public integral_constant<bool, __is_trivially_copyable(_Tp)>
    { };

  /// is_standard_layout
  template<typename _Tp>
    struct is_standard_layout
    : public integral_constant<bool, __is_standard_layout(_Tp)>
    { };

  /// is_pod
  // Could use is_standard_layout && is_trivial instead of the builtin.
  template<typename _Tp>
    struct is_pod
    : public integral_constant<bool, __is_pod(_Tp)>
    { };

  /// is_literal_type
  template<typename _Tp>
    struct is_literal_type
    : public integral_constant<bool, __is_literal_type(_Tp)>
    { };

  /// is_empty
  template<typename _Tp>
    struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)>
    { };

  /// is_polymorphic
  template<typename _Tp>
    struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)>
    { };



  /// is_final
  template<typename _Tp>
    struct is_final
    : public integral_constant<bool, __is_final(_Tp)>
    { };


  /// is_abstract
  template<typename _Tp>
    struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)>
    { };

  template<typename _Tp,
    bool = is_arithmetic<_Tp>::value>
    struct __is_signed_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_signed_helper<_Tp, true>
    : public integral_constant<bool, _Tp(-1) < _Tp(0)>
    { };

  /// is_signed
  template<typename _Tp>
    struct is_signed
    : public __is_signed_helper<_Tp>::type
    { };

  /// is_unsigned
  template<typename _Tp>
    struct is_unsigned
    : public __and_<is_arithmetic<_Tp>, __not_<is_signed<_Tp>>>
    { };


  // Destructible and constructible type properties.

  template<typename>
    struct add_rvalue_reference;

  /**
   *  @brief  Utility to simplify expressions used in unevaluated operands
   *  @ingroup utilities
   */
  template<typename _Tp>
    typename add_rvalue_reference<_Tp>::type declval() noexcept;

  template<typename, unsigned = 0>
    struct extent;

  template<typename>
    struct remove_all_extents;

  template<typename _Tp>
    struct __is_array_known_bounds
    : public integral_constant<bool, (extent<_Tp>::value > 0)>
    { };

  template<typename _Tp>
    struct __is_array_unknown_bounds
    : public __and_<is_array<_Tp>, __not_<extent<_Tp>>>
    { };

  // In N3290 is_destructible does not say anything about function
  // types and abstract types, see LWG 2049. This implementation
  // describes function types as non-destructible and all complete
  // object types as destructible, iff the explicit destructor
  // call expression is wellformed.
  struct __do_is_destructible_impl
  {
    template<typename _Tp, typename = decltype(declval<_Tp&>().~_Tp())>
      static true_type __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_destructible_impl
    : public __do_is_destructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp,
           bool = __or_<is_void<_Tp>,
                        __is_array_unknown_bounds<_Tp>,
                        is_function<_Tp>>::value,
           bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
    struct __is_destructible_safe;

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, false, false>
    : public __is_destructible_impl<typename
               remove_all_extents<_Tp>::type>::type
    { };

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, true, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, false, true>
    : public true_type { };

  /// is_destructible
  template<typename _Tp>
    struct is_destructible
    : public __is_destructible_safe<_Tp>::type
    { };

  // is_nothrow_destructible requires that is_destructible is
  // satisfied as well.  We realize that by mimicing the
  // implementation of is_destructible but refer to noexcept(expr)
  // instead of decltype(expr).
  struct __do_is_nt_destructible_impl
  {
    template<typename _Tp>
      static integral_constant<bool, noexcept(declval<_Tp&>().~_Tp())>
        __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_nt_destructible_impl
    : public __do_is_nt_destructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp,
           bool = __or_<is_void<_Tp>,
                        __is_array_unknown_bounds<_Tp>,
                        is_function<_Tp>>::value,
           bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
    struct __is_nt_destructible_safe;

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, false, false>
    : public __is_nt_destructible_impl<typename
               remove_all_extents<_Tp>::type>::type
    { };

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, true, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, false, true>
    : public true_type { };

  /// is_nothrow_destructible
  template<typename _Tp>
    struct is_nothrow_destructible
    : public __is_nt_destructible_safe<_Tp>::type
    { };

  struct __do_is_default_constructible_impl
  {
    template<typename _Tp, typename = decltype(_Tp())>
      static true_type __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_default_constructible_impl
    : public __do_is_default_constructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_default_constructible_atom
    : public __and_<__not_<is_void<_Tp>>,
                    __is_default_constructible_impl<_Tp>>
    { };

  template<typename _Tp, bool = is_array<_Tp>::value>
    struct __is_default_constructible_safe;

  // The following technique is a workaround for a current core language
  // restriction, which does not allow for array types to occur in 
  // functional casts of the form T().  Complete arrays can be default-
  // constructed, if the element type is default-constructible, but 
  // arrays with unknown bounds are not.
  template<typename _Tp>
    struct __is_default_constructible_safe<_Tp, true>
    : public __and_<__is_array_known_bounds<_Tp>,
      __is_default_constructible_atom<typename
                      remove_all_extents<_Tp>::type>>
    { };

  template<typename _Tp>
    struct __is_default_constructible_safe<_Tp, false>
    : public __is_default_constructible_atom<_Tp>::type
    { };

  /// is_default_constructible
  template<typename _Tp>
    struct is_default_constructible
    : public __is_default_constructible_safe<_Tp>::type
    { };


  // Implementation of is_constructible.

  // The hardest part of this trait is the binary direct-initialization
  // case, because we hit into a functional cast of the form T(arg).
  // This implementation uses different strategies depending on the
  // target type to reduce the test overhead as much as possible:
  //
  // a) For a reference target type, we use a static_cast expression 
  //    modulo its extra cases.
  //
  // b) For a non-reference target type we use a ::new expression.
  struct __do_is_static_castable_impl
  {
    template<typename _From, typename _To, typename
             = decltype(static_cast<_To>(declval<_From>()))>
      static true_type __test(int);

    template<typename, typename>
      static false_type __test(...);
  };

  template<typename _From, typename _To>
    struct __is_static_castable_impl
    : public __do_is_static_castable_impl
    {
      typedef decltype(__test<_From, _To>(0)) type;
    };

  template<typename _From, typename _To>
    struct __is_static_castable_safe
    : public __is_static_castable_impl<_From, _To>::type
    { };

  // __is_static_castable
  template<typename _From, typename _To>
    struct __is_static_castable
    : public integral_constant<bool, (__is_static_castable_safe<
          _From, _To>::value)>
    { };

  // Implementation for non-reference types. To meet the proper
  // variable definition semantics, we also need to test for
  // is_destructible in this case.
  // This form should be simplified by a single expression:
  // ::delete ::new _Tp(declval<_Arg>()), see c++/51222.
  struct __do_is_direct_constructible_impl
  {
    template<typename _Tp, typename _Arg, typename
      = decltype(::new _Tp(declval<_Arg>()))>
      static true_type __test(int);

    template<typename, typename>
      static false_type __test(...);
  };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_impl
    : public __do_is_direct_constructible_impl
    {
      typedef decltype(__test<_Tp, _Arg>(0)) type;
    };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_new_safe
    : public __and_<is_destructible<_Tp>,
                    __is_direct_constructible_impl<_Tp, _Arg>>
    { };

  template<typename, typename>
    struct is_same;

  template<typename, typename>
    struct is_base_of;

  template<typename>
    struct remove_reference;

  template<typename _From, typename _To, bool
           = __not_<__or_<is_void<_From>,
                          is_function<_From>>>::value>
    struct __is_base_to_derived_ref;

  template<typename _Tp, typename... _Args>
    struct is_constructible;

  // Detect whether we have a downcast situation during
  // reference binding.
  template<typename _From, typename _To>
    struct __is_base_to_derived_ref<_From, _To, true>
    {
      typedef typename remove_cv<typename remove_reference<_From
        >::type>::type __src_t;
      typedef typename remove_cv<typename remove_reference<_To
        >::type>::type __dst_t;
      typedef __and_<__not_<is_same<__src_t, __dst_t>>,
       is_base_of<__src_t, __dst_t>,
       __not_<is_constructible<__dst_t, _From>>> type;
      static constexpr bool value = type::value;
    };

  template<typename _From, typename _To>
    struct __is_base_to_derived_ref<_From, _To, false>
    : public false_type
    { };

  template<typename _From, typename _To, bool
           = __and_<is_lvalue_reference<_From>,
                    is_rvalue_reference<_To>>::value>
    struct __is_lvalue_to_rvalue_ref;

  // Detect whether we have an lvalue of non-function type
  // bound to a reference-compatible rvalue-reference.
  template<typename _From, typename _To>
    struct __is_lvalue_to_rvalue_ref<_From, _To, true>
    {
      typedef typename remove_cv<typename remove_reference<
        _From>::type>::type __src_t;
      typedef typename remove_cv<typename remove_reference<
        _To>::type>::type __dst_t;
      typedef __and_<__not_<is_function<__src_t>>,
        __or_<is_same<__src_t, __dst_t>,
      is_base_of<__dst_t, __src_t>>> type;
      static constexpr bool value = type::value;
    };

  template<typename _From, typename _To>
    struct __is_lvalue_to_rvalue_ref<_From, _To, false>
    : public false_type
    { };

  // Here we handle direct-initialization to a reference type as 
  // equivalent to a static_cast modulo overshooting conversions.
  // These are restricted to the following conversions:
  //    a) A base class value to a derived class reference
  //    b) An lvalue to an rvalue-reference of reference-compatible 
  //       types that are not functions
  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_ref_cast
    : public __and_<__is_static_castable<_Arg, _Tp>,
                    __not_<__or_<__is_base_to_derived_ref<_Arg, _Tp>,
                                 __is_lvalue_to_rvalue_ref<_Arg, _Tp>
                   >>>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_new
    : public conditional<is_reference<_Tp>::value,
    __is_direct_constructible_ref_cast<_Tp, _Arg>,
    __is_direct_constructible_new_safe<_Tp, _Arg>
    >::type
    { };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible
    : public __is_direct_constructible_new<_Tp, _Arg>::type
    { };

  // Since default-construction and binary direct-initialization have
  // been handled separately, the implementation of the remaining
  // n-ary construction cases is rather straightforward. We can use
  // here a functional cast, because array types are excluded anyway
  // and this form is never interpreted as a C cast.
  struct __do_is_nary_constructible_impl
  {
    template<typename _Tp, typename... _Args, typename
             = decltype(_Tp(declval<_Args>()...))>
      static true_type __test(int);

    template<typename, typename...>
      static false_type __test(...);
  };

  template<typename _Tp, typename... _Args>
    struct __is_nary_constructible_impl
    : public __do_is_nary_constructible_impl
    {
      typedef decltype(__test<_Tp, _Args...>(0)) type;
    };

  template<typename _Tp, typename... _Args>
    struct __is_nary_constructible
    : public __is_nary_constructible_impl<_Tp, _Args...>::type
    {
      static_assert(sizeof...(_Args) > 1,
                    "Only useful for > 1 arguments");
    };

  template<typename _Tp, typename... _Args>
    struct __is_constructible_impl
    : public __is_nary_constructible<_Tp, _Args...>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_constructible_impl<_Tp, _Arg>
    : public __is_direct_constructible<_Tp, _Arg>
    { };

  template<typename _Tp>
    struct __is_constructible_impl<_Tp>
    : public is_default_constructible<_Tp>
    { };

  /// is_constructible
  template<typename _Tp, typename... _Args>
    struct is_constructible
    : public __is_constructible_impl<_Tp, _Args...>::type
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_copy_constructible_impl;

  template<typename _Tp>
    struct __is_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_copy_constructible_impl<_Tp, true>
    : public is_constructible<_Tp, const _Tp&>
    { };

  /// is_copy_constructible
  template<typename _Tp>
    struct is_copy_constructible
    : public __is_copy_constructible_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_move_constructible_impl;

  template<typename _Tp>
    struct __is_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_move_constructible_impl<_Tp, true>
    : public is_constructible<_Tp, _Tp&&>
    { };

  /// is_move_constructible
  template<typename _Tp>
    struct is_move_constructible
    : public __is_move_constructible_impl<_Tp>
    { };

  template<typename _Tp>
    struct __is_nt_default_constructible_atom
    : public integral_constant<bool, noexcept(_Tp())>
    { };

  template<typename _Tp, bool = is_array<_Tp>::value>
    struct __is_nt_default_constructible_impl;

  template<typename _Tp>
    struct __is_nt_default_constructible_impl<_Tp, true>
    : public __and_<__is_array_known_bounds<_Tp>,
      __is_nt_default_constructible_atom<typename
                      remove_all_extents<_Tp>::type>>
    { };

  template<typename _Tp>
    struct __is_nt_default_constructible_impl<_Tp, false>
    : public __is_nt_default_constructible_atom<_Tp>
    { };

  /// is_nothrow_default_constructible
  template<typename _Tp>
    struct is_nothrow_default_constructible
    : public __and_<is_default_constructible<_Tp>,
                    __is_nt_default_constructible_impl<_Tp>>
    { };

  template<typename _Tp, typename... _Args>
    struct __is_nt_constructible_impl
    : public integral_constant<bool, noexcept(_Tp(declval<_Args>()...))>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_nt_constructible_impl<_Tp, _Arg>
    : public integral_constant<bool,
                               noexcept(static_cast<_Tp>(declval<_Arg>()))>
    { };

  template<typename _Tp>
    struct __is_nt_constructible_impl<_Tp>
    : public is_nothrow_default_constructible<_Tp>
    { };

  /// is_nothrow_constructible
  template<typename _Tp, typename... _Args>
    struct is_nothrow_constructible
    : public __and_<is_constructible<_Tp, _Args...>,
      __is_nt_constructible_impl<_Tp, _Args...>>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nothrow_copy_constructible_impl;

  template<typename _Tp>
    struct __is_nothrow_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nothrow_copy_constructible_impl<_Tp, true>
    : public is_nothrow_constructible<_Tp, const _Tp&>
    { };

  /// is_nothrow_copy_constructible
  template<typename _Tp>
    struct is_nothrow_copy_constructible
    : public __is_nothrow_copy_constructible_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nothrow_move_constructible_impl;

  template<typename _Tp>
    struct __is_nothrow_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nothrow_move_constructible_impl<_Tp, true>
    : public is_nothrow_constructible<_Tp, _Tp&&>
    { };

  /// is_nothrow_move_constructible
  template<typename _Tp>
    struct is_nothrow_move_constructible
    : public __is_nothrow_move_constructible_impl<_Tp>
    { };

  template<typename _Tp, typename _Up>
    class __is_assignable_helper
    {
      template<typename _Tp1, typename _Up1,
        typename = decltype(declval<_Tp1>() = declval<_Up1>())>
 static true_type
 __test(int);

      template<typename, typename>
 static false_type
 __test(...);

    public:
      typedef decltype(__test<_Tp, _Up>(0)) type;
    };

  /// is_assignable
  template<typename _Tp, typename _Up>
    struct is_assignable
      : public __is_assignable_helper<_Tp, _Up>::type
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_copy_assignable_impl;

  template<typename _Tp>
    struct __is_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_copy_assignable_impl<_Tp, true>
    : public is_assignable<_Tp&, const _Tp&>
    { };

  /// is_copy_assignable
  template<typename _Tp>
    struct is_copy_assignable
    : public __is_copy_assignable_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_move_assignable_impl;

  template<typename _Tp>
    struct __is_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_move_assignable_impl<_Tp, true>
    : public is_assignable<_Tp&, _Tp&&>
    { };

  /// is_move_assignable
  template<typename _Tp>
    struct is_move_assignable
    : public __is_move_assignable_impl<_Tp>
    { };

  template<typename _Tp, typename _Up>
    struct __is_nt_assignable_impl
    : public integral_constant<bool, noexcept(declval<_Tp>() = declval<_Up>())>
    { };

  /// is_nothrow_assignable
  template<typename _Tp, typename _Up>
    struct is_nothrow_assignable
    : public __and_<is_assignable<_Tp, _Up>,
      __is_nt_assignable_impl<_Tp, _Up>>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nt_copy_assignable_impl;

  template<typename _Tp>
    struct __is_nt_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_copy_assignable_impl<_Tp, true>
    : public is_nothrow_assignable<_Tp&, const _Tp&>
    { };

  /// is_nothrow_copy_assignable
  template<typename _Tp>
    struct is_nothrow_copy_assignable
    : public __is_nt_copy_assignable_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nt_move_assignable_impl;

  template<typename _Tp>
    struct __is_nt_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_move_assignable_impl<_Tp, true>
    : public is_nothrow_assignable<_Tp&, _Tp&&>
    { };

  /// is_nothrow_move_assignable
  template<typename _Tp>
    struct is_nothrow_move_assignable
    : public __is_nt_move_assignable_impl<_Tp>
    { };

  /// is_trivially_constructible
  template<typename _Tp, typename... _Args>
    struct is_trivially_constructible
    : public __and_<is_constructible<_Tp, _Args...>, integral_constant<bool,
   __is_trivially_constructible(_Tp, _Args...)>>
    { };

  /// is_trivially_default_constructible
  template<typename _Tp>
    struct is_trivially_default_constructible
    : public is_trivially_constructible<_Tp>::type
    { };

  struct __do_is_implicitly_default_constructible_impl
  {
    template <typename _Tp>
    static void __helper(const _Tp&);

    template <typename _Tp>
    static true_type __test(const _Tp&,
                            decltype(__helper<const _Tp&>({}))* = 0);

    static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_implicitly_default_constructible_impl
      : public __do_is_implicitly_default_constructible_impl
  {
    typedef decltype(__test(declval<_Tp>())) type;
  };

  template<typename _Tp>
    struct __is_implicitly_default_constructible_safe
      : public __is_implicitly_default_constructible_impl<_Tp>::type
  { };

  template <typename _Tp>
    struct __is_implicitly_default_constructible
      : public __and_<is_default_constructible<_Tp>,
                      __is_implicitly_default_constructible_safe<_Tp>>
  { };

  /// is_trivially_copy_constructible
  template<typename _Tp>
    struct is_trivially_copy_constructible
    : public __and_<is_copy_constructible<_Tp>,
      integral_constant<bool,
   __is_trivially_constructible(_Tp, const _Tp&)>>
    { };

  /// is_trivially_move_constructible
  template<typename _Tp>
    struct is_trivially_move_constructible
    : public __and_<is_move_constructible<_Tp>,
      integral_constant<bool,
   __is_trivially_constructible(_Tp, _Tp&&)>>
    { };

  /// is_trivially_assignable
  template<typename _Tp, typename _Up>
    struct is_trivially_assignable
    : public __and_<is_assignable<_Tp, _Up>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp, _Up)>>
    { };

  /// is_trivially_copy_assignable
  template<typename _Tp>
    struct is_trivially_copy_assignable
    : public __and_<is_copy_assignable<_Tp>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp&, const _Tp&)>>
    { };

  /// is_trivially_move_assignable
  template<typename _Tp>
    struct is_trivially_move_assignable
    : public __and_<is_move_assignable<_Tp>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp&, _Tp&&)>>
    { };

  /// is_trivially_destructible
  template<typename _Tp>
    struct is_trivially_destructible
    : public __and_<is_destructible<_Tp>, integral_constant<bool,
         __has_trivial_destructor(_Tp)>>
    { };

  /// has_trivial_default_constructor (temporary legacy)
  template<typename _Tp>
    struct has_trivial_default_constructor
    : public integral_constant<bool, __has_trivial_constructor(_Tp)>
    { } __attribute__ ((__deprecated__));

  /// has_trivial_copy_constructor (temporary legacy)
  template<typename _Tp>
    struct has_trivial_copy_constructor
    : public integral_constant<bool, __has_trivial_copy(_Tp)>
    { } __attribute__ ((__deprecated__));

  /// has_trivial_copy_assign (temporary legacy)
  template<typename _Tp>
    struct has_trivial_copy_assign
    : public integral_constant<bool, __has_trivial_assign(_Tp)>
    { } __attribute__ ((__deprecated__));

  /// has_virtual_destructor
  template<typename _Tp>
    struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)>
    { };


  // type property queries.

  /// alignment_of
  template<typename _Tp>
    struct alignment_of
    : public integral_constant<std::size_t, __alignof__(_Tp)> { };

  /// rank
  template<typename>
    struct rank
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, std::size_t _Size>
    struct rank<_Tp[_Size]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  template<typename _Tp>
    struct rank<_Tp[]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  /// extent
  template<typename, unsigned _Uint>
    struct extent
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, unsigned _Uint, std::size_t _Size>
    struct extent<_Tp[_Size], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? _Size : extent<_Tp,
          _Uint - 1>::value>
    { };

  template<typename _Tp, unsigned _Uint>
    struct extent<_Tp[], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? 0 : extent<_Tp,
             _Uint - 1>::value>
    { };


  // Type relations.

  /// is_same
  template<typename, typename>
    struct is_same
    : public false_type { };

  template<typename _Tp>
    struct is_same<_Tp, _Tp>
    : public true_type { };

  /// is_base_of
  template<typename _Base, typename _Derived>
    struct is_base_of
    : public integral_constant<bool, __is_base_of(_Base, _Derived)>
    { };

  template<typename _From, typename _To,
           bool = __or_<is_void<_From>, is_function<_To>,
                        is_array<_To>>::value>
    struct __is_convertible_helper
    { typedef typename is_void<_To>::type type; };

  template<typename _From, typename _To>
    class __is_convertible_helper<_From, _To, false>
    {
       template<typename _To1>
 static void __test_aux(_To1);

      template<typename _From1, typename _To1,
        typename = decltype(__test_aux<_To1>(std::declval<_From1>()))>
 static true_type
 __test(int);

      template<typename, typename>
 static false_type
 __test(...);

    public:
      typedef decltype(__test<_From, _To>(0)) type;
    };


  /// is_convertible
  template<typename _From, typename _To>
    struct is_convertible
    : public __is_convertible_helper<_From, _To>::type
    { };


  // Const-volatile modifications.

  /// remove_const
  template<typename _Tp>
    struct remove_const
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_const<_Tp const>
    { typedef _Tp type; };

  /// remove_volatile
  template<typename _Tp>
    struct remove_volatile
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_volatile<_Tp volatile>
    { typedef _Tp type; };

  /// remove_cv
  template<typename _Tp>
    struct remove_cv
    {
      typedef typename
      remove_const<typename remove_volatile<_Tp>::type>::type type;
    };

  /// add_const
  template<typename _Tp>
    struct add_const
    { typedef _Tp const type; };

  /// add_volatile
  template<typename _Tp>
    struct add_volatile
    { typedef _Tp volatile type; };

  /// add_cv
  template<typename _Tp>
    struct add_cv
    {
      typedef typename
      add_const<typename add_volatile<_Tp>::type>::type type;
    };





  /// Alias template for remove_const
  template<typename _Tp>
    using remove_const_t = typename remove_const<_Tp>::type;

  /// Alias template for remove_volatile
  template<typename _Tp>
    using remove_volatile_t = typename remove_volatile<_Tp>::type;

  /// Alias template for remove_cv
  template<typename _Tp>
    using remove_cv_t = typename remove_cv<_Tp>::type;

  /// Alias template for add_const
  template<typename _Tp>
    using add_const_t = typename add_const<_Tp>::type;

  /// Alias template for add_volatile
  template<typename _Tp>
    using add_volatile_t = typename add_volatile<_Tp>::type;

  /// Alias template for add_cv
  template<typename _Tp>
    using add_cv_t = typename add_cv<_Tp>::type;


  // Reference transformations.

  /// remove_reference
  template<typename _Tp>
    struct remove_reference
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&&>
    { typedef _Tp type; };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __add_lvalue_reference_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, true>
    { typedef _Tp& type; };

  /// add_lvalue_reference
  template<typename _Tp>
    struct add_lvalue_reference
    : public __add_lvalue_reference_helper<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __add_rvalue_reference_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_rvalue_reference_helper<_Tp, true>
    { typedef _Tp&& type; };

  /// add_rvalue_reference
  template<typename _Tp>
    struct add_rvalue_reference
    : public __add_rvalue_reference_helper<_Tp>
    { };


  /// Alias template for remove_reference
  template<typename _Tp>
    using remove_reference_t = typename remove_reference<_Tp>::type;

  /// Alias template for add_lvalue_reference
  template<typename _Tp>
    using add_lvalue_reference_t = typename add_lvalue_reference<_Tp>::type;

  /// Alias template for add_rvalue_reference
  template<typename _Tp>
    using add_rvalue_reference_t = typename add_rvalue_reference<_Tp>::type;


  // Sign modifications.

  // Utility for constructing identically cv-qualified types.
  template<typename _Unqualified, bool _IsConst, bool _IsVol>
    struct __cv_selector;

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, false>
    { typedef _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, true>
    { typedef volatile _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, false>
    { typedef const _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, true>
    { typedef const volatile _Unqualified __type; };

  template<typename _Qualified, typename _Unqualified,
    bool _IsConst = is_const<_Qualified>::value,
    bool _IsVol = is_volatile<_Qualified>::value>
    class __match_cv_qualifiers
    {
      typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;

    public:
      typedef typename __match::__type __type;
    };

  // Utility for finding the unsigned versions of signed integral types.
  template<typename _Tp>
    struct __make_unsigned
    { typedef _Tp __type; };

  template<>
    struct __make_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __make_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __make_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __make_unsigned<long long>
    { typedef unsigned long long __type; };
# 1784 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
  // Select between integral and enum: not possible to be both.
  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    class __make_unsigned_selector;

  template<typename _Tp>
    class __make_unsigned_selector<_Tp, true, false>
    {
      typedef __make_unsigned<typename remove_cv<_Tp>::type> __unsignedt;
      typedef typename __unsignedt::__type __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;

    public:
      typedef typename __cv_unsigned::__type __type;
    };

  template<typename _Tp>
    class __make_unsigned_selector<_Tp, false, true>
    {
      // With -fshort-enums, an enum may be as small as a char.
      typedef unsigned char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);
      static const bool __b3 = sizeof(_Tp) <= sizeof(unsigned long);
      typedef conditional<__b3, unsigned long, unsigned long long> __cond3;
      typedef typename __cond3::type __cond3_type;
      typedef conditional<__b2, unsigned int, __cond3_type> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, unsigned short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;

      typedef typename conditional<__b0, __smallest, __cond1_type>::type
 __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;

    public:
      typedef typename __cv_unsigned::__type __type;
    };

  // Given an integral/enum type, return the corresponding unsigned
  // integer type.
  // Primary template.
  /// make_unsigned
  template<typename _Tp>
    struct make_unsigned
    { typedef typename __make_unsigned_selector<_Tp>::__type type; };

  // Integral, but don't define.
  template<>
    struct make_unsigned<bool>;


  // Utility for finding the signed versions of unsigned integral types.
  template<typename _Tp>
    struct __make_signed
    { typedef _Tp __type; };

  template<>
    struct __make_signed<char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned short>
    { typedef signed short __type; };

  template<>
    struct __make_signed<unsigned int>
    { typedef signed int __type; };

  template<>
    struct __make_signed<unsigned long>
    { typedef signed long __type; };

  template<>
    struct __make_signed<unsigned long long>
    { typedef signed long long __type; };


  template<>
    struct __make_signed<wchar_t> : __make_signed<short unsigned int>
    { };



  template<>
    struct __make_signed<char16_t> : __make_signed<uint_least16_t>
    { };
  template<>
    struct __make_signed<char32_t> : __make_signed<uint_least32_t>
    { };
# 1903 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
  // Select between integral and enum: not possible to be both.
  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    class __make_signed_selector;

  template<typename _Tp>
    class __make_signed_selector<_Tp, true, false>
    {
      typedef __make_signed<typename remove_cv<_Tp>::type> __signedt;
      typedef typename __signedt::__type __signed_type;
      typedef __match_cv_qualifiers<_Tp, __signed_type> __cv_signed;

    public:
      typedef typename __cv_signed::__type __type;
    };

  template<typename _Tp>
    class __make_signed_selector<_Tp, false, true>
    {
      typedef typename __make_unsigned_selector<_Tp>::__type __unsigned_type;

    public:
      typedef typename __make_signed_selector<__unsigned_type>::__type __type;
    };

  // Given an integral/enum type, return the corresponding signed
  // integer type.
  // Primary template.
  /// make_signed
  template<typename _Tp>
    struct make_signed
    { typedef typename __make_signed_selector<_Tp>::__type type; };

  // Integral, but don't define.
  template<>
    struct make_signed<bool>;


  /// Alias template for make_signed
  template<typename _Tp>
    using make_signed_t = typename make_signed<_Tp>::type;

  /// Alias template for make_unsigned
  template<typename _Tp>
    using make_unsigned_t = typename make_unsigned<_Tp>::type;


  // Array modifications.

  /// remove_extent
  template<typename _Tp>
    struct remove_extent
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_extent<_Tp[_Size]>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_extent<_Tp[]>
    { typedef _Tp type; };

  /// remove_all_extents
  template<typename _Tp>
    struct remove_all_extents
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_all_extents<_Tp[_Size]>
    { typedef typename remove_all_extents<_Tp>::type type; };

  template<typename _Tp>
    struct remove_all_extents<_Tp[]>
    { typedef typename remove_all_extents<_Tp>::type type; };


  /// Alias template for remove_extent
  template<typename _Tp>
    using remove_extent_t = typename remove_extent<_Tp>::type;

  /// Alias template for remove_all_extents
  template<typename _Tp>
    using remove_all_extents_t = typename remove_all_extents<_Tp>::type;


  // Pointer modifications.

  template<typename _Tp, typename>
    struct __remove_pointer_helper
    { typedef _Tp type; };

  template<typename _Tp, typename _Up>
    struct __remove_pointer_helper<_Tp, _Up*>
    { typedef _Up type; };

  /// remove_pointer
  template<typename _Tp>
    struct remove_pointer
    : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>
    { };

  /// add_pointer
  template<typename _Tp, bool = __or_<__is_referenceable<_Tp>,
          is_void<_Tp>>::value>
    struct __add_pointer_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_pointer_helper<_Tp, true>
    { typedef typename remove_reference<_Tp>::type* type; };

  template<typename _Tp>
    struct add_pointer
    : public __add_pointer_helper<_Tp>
    { };


  /// Alias template for remove_pointer
  template<typename _Tp>
    using remove_pointer_t = typename remove_pointer<_Tp>::type;

  /// Alias template for add_pointer
  template<typename _Tp>
    using add_pointer_t = typename add_pointer<_Tp>::type;


  template<std::size_t _Len>
    struct __aligned_storage_msa
    {
      union __type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__)) { } __align;
      };
    };

  /**
   *  @brief Alignment type.
   *
   *  The value of _Align is a default-alignment which shall be the
   *  most stringent alignment requirement for any C++ object type
   *  whose size is no greater than _Len (3.9). The member typedef
   *  type shall be a POD type suitable for use as uninitialized
   *  storage for any object whose size is at most _Len and whose
   *  alignment is a divisor of _Align.
  */
  template<std::size_t _Len, std::size_t _Align =
    __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    struct aligned_storage
    {
      union type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__((_Align)))) { } __align;
      };
    };

  template <typename... _Types>
    struct __strictest_alignment
    {
      static const size_t _S_alignment = 0;
      static const size_t _S_size = 0;
    };

  template <typename _Tp, typename... _Types>
    struct __strictest_alignment<_Tp, _Types...>
    {
      static const size_t _S_alignment =
        alignof(_Tp) > __strictest_alignment<_Types...>::_S_alignment
 ? alignof(_Tp) : __strictest_alignment<_Types...>::_S_alignment;
      static const size_t _S_size =
        sizeof(_Tp) > __strictest_alignment<_Types...>::_S_size
 ? sizeof(_Tp) : __strictest_alignment<_Types...>::_S_size;
    };

  /**
   *  @brief Provide aligned storage for types.
   *
   *  [meta.trans.other]
   *
   *  Provides aligned storage for any of the provided types of at
   *  least size _Len.
   *
   *  @see aligned_storage
   */
  template <size_t _Len, typename... _Types>
    struct aligned_union
    {
    
# 2092 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits"
   public
# 2092 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
          :
      static_assert(sizeof...(_Types) != 0, "At least one type is required");

      using __strictest = __strictest_alignment<_Types...>;
      static const size_t _S_len = _Len > __strictest::_S_size
 ? _Len : __strictest::_S_size;
    public:
      /// The value of the strictest alignment of _Types.
      static const size_t alignment_value = __strictest::_S_alignment;
      /// The storage.
      typedef typename aligned_storage<_S_len, alignment_value>::type type;
    };

  template <size_t _Len, typename... _Types>
    const size_t aligned_union<_Len, _Types...>::alignment_value;

  // Decay trait for arrays and functions, used for perfect forwarding
  // in make_pair, make_tuple, etc.
  template<typename _Up,
    bool _IsArray = is_array<_Up>::value,
    bool _IsFunction = is_function<_Up>::value>
    struct __decay_selector;

  // NB: DR 705.
  template<typename _Up>
    struct __decay_selector<_Up, false, false>
    { typedef typename remove_cv<_Up>::type __type; };

  template<typename _Up>
    struct __decay_selector<_Up, true, false>
    { typedef typename remove_extent<_Up>::type* __type; };

  template<typename _Up>
    struct __decay_selector<_Up, false, true>
    { typedef typename add_pointer<_Up>::type __type; };

  /// decay
  template<typename _Tp>
    class decay
    {
      typedef typename remove_reference<_Tp>::type __remove_type;

    public:
      typedef typename __decay_selector<__remove_type>::__type type;
    };

  template<typename _Tp>
    class reference_wrapper;

  // Helper which adds a reference to a type when given a reference_wrapper
  template<typename _Tp>
    struct __strip_reference_wrapper
    {
      typedef _Tp __type;
    };

  template<typename _Tp>
    struct __strip_reference_wrapper<reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };

  template<typename _Tp>
    struct __decay_and_strip
    {
      typedef typename __strip_reference_wrapper<
 typename decay<_Tp>::type>::__type __type;
    };


  // Primary template.
  /// Define a member typedef @c type only if a boolean constant is true.
  template<bool, typename _Tp = void>
    struct enable_if
    { };

  // Partial specialization for true.
  template<typename _Tp>
    struct enable_if<true, _Tp>
    { typedef _Tp type; };

  template<typename... _Cond>
    using _Require = typename enable_if<__and_<_Cond...>::value>::type;

  // Primary template.
  /// Define a member typedef @c type to one of two argument types.
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct conditional
    { typedef _Iftrue type; };

  // Partial specialization for false.
  template<typename _Iftrue, typename _Iffalse>
    struct conditional<false, _Iftrue, _Iffalse>
    { typedef _Iffalse type; };

  /// common_type
  template<typename... _Tp>
    struct common_type;

  // Sfinae-friendly common_type implementation:

  struct __do_common_type_impl
  {
    template<typename _Tp, typename _Up>
      static __success_type<typename decay<decltype
       (true ? std::declval<_Tp>()
        : std::declval<_Up>())>::type> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _Tp, typename _Up>
    struct __common_type_impl
    : 
# 2206 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits"
     public 
# 2206 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
             __do_common_type_impl
    {
      typedef decltype(_S_test<_Tp, _Up>(0)) type;
    };

  struct __do_member_type_wrapper
  {
    template<typename _Tp>
      static __success_type<typename _Tp::type> _S_test(int);

    template<typename>
      static __failure_type _S_test(...);
  };

  template<typename _Tp>
    struct __member_type_wrapper
    : 
# 2222 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits"
     public 
# 2222 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
             __do_member_type_wrapper
    {
      typedef decltype(_S_test<_Tp>(0)) type;
    };

  template<typename _CTp, typename... _Args>
    struct __expanded_common_type_wrapper
    {
      typedef common_type<typename _CTp::type, _Args...> type;
    };

  template<typename... _Args>
    struct __expanded_common_type_wrapper<__failure_type, _Args...>
    { typedef __failure_type type; };

  template<typename _Tp>
    struct common_type<_Tp>
    { typedef typename decay<_Tp>::type type; };

  template<typename _Tp, typename _Up>
    struct common_type<_Tp, _Up>
    : public __common_type_impl<_Tp, _Up>::type
    { };

  template<typename _Tp, typename _Up, typename... _Vp>
    struct common_type<_Tp, _Up, _Vp...>
    : public __expanded_common_type_wrapper<typename __member_type_wrapper<
               common_type<_Tp, _Up>>::type, _Vp...>::type
    { };

  /// The underlying type of an enum.
  template<typename _Tp>
    struct underlying_type
    {
      typedef __underlying_type(_Tp) type;
    };

  template<typename _Tp>
    struct __declval_protector
    {
      static const bool __stop = false;
      static typename add_rvalue_reference<_Tp>::type __delegate();
    };

  template<typename _Tp>
    inline typename add_rvalue_reference<_Tp>::type
    declval() noexcept
    {
      static_assert(__declval_protector<_Tp>::__stop,
      "declval() must not be used!");
      return __declval_protector<_Tp>::__delegate();
    }

  /// result_of
  template<typename _Signature>
    class result_of;

  // Sfinae-friendly result_of implementation:



  struct __invoke_memfun_ref { };
  struct __invoke_memfun_deref { };
  struct __invoke_memobj_ref { };
  struct __invoke_memobj_deref { };
  struct __invoke_other { };

  // Associate a tag type with a specialization of __success_type.
  template<typename _Tp, typename _Tag>
    struct __result_of_success : __success_type<_Tp>
    { using __invoke_type = _Tag; };

  // [func.require] paragraph 1 bullet 1:
  struct __result_of_memfun_ref_impl
  {
    template<typename _Fp, typename _Tp1, typename... _Args>
      static __result_of_success<decltype(
      (std::declval<_Tp1>().*std::declval<_Fp>())(std::declval<_Args>()...)
      ), __invoke_memfun_ref> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun_ref
    : 
# 2308 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits"
     public 
# 2308 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
             __result_of_memfun_ref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
    };

  // [func.require] paragraph 1 bullet 2:
  struct __result_of_memfun_deref_impl
  {
    template<typename _Fp, typename _Tp1, typename... _Args>
      static __result_of_success<decltype(
      ((*std::declval<_Tp1>()).*std::declval<_Fp>())(std::declval<_Args>()...)
      ), __invoke_memfun_deref> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun_deref
    : 
# 2327 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits"
     public 
# 2327 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
             __result_of_memfun_deref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
    };

  // [func.require] paragraph 1 bullet 3:
  struct __result_of_memobj_ref_impl
  {
    template<typename _Fp, typename _Tp1>
      static __result_of_success<decltype(
      std::declval<_Tp1>().*std::declval<_Fp>()
      ), __invoke_memobj_ref> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj_ref
    : 
# 2346 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits"
     public 
# 2346 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
             __result_of_memobj_ref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
    };

  // [func.require] paragraph 1 bullet 4:
  struct __result_of_memobj_deref_impl
  {
    template<typename _Fp, typename _Tp1>
      static __result_of_success<decltype(
      (*std::declval<_Tp1>()).*std::declval<_Fp>()
      ), __invoke_memobj_deref> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj_deref
    : 
# 2365 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits"
     public 
# 2365 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
             __result_of_memobj_deref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
    };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj;

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, _Arg>
    {
      typedef typename remove_cv<typename remove_reference<
        _Arg>::type>::type _Argval;
      typedef _Res _Class::* _MemPtr;
      typedef typename conditional<__or_<is_same<_Argval, _Class>,
        is_base_of<_Class, _Argval>>::value,
        __result_of_memobj_ref<_MemPtr, _Arg>,
        __result_of_memobj_deref<_MemPtr, _Arg>
      >::type::type type;
    };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun;

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, _Arg, _Args...>
    {
      typedef typename remove_cv<typename remove_reference<
        _Arg>::type>::type _Argval;
      typedef _Res _Class::* _MemPtr;
      typedef typename conditional<__or_<is_same<_Argval, _Class>,
        is_base_of<_Class, _Argval>>::value,
        __result_of_memfun_ref<_MemPtr, _Arg, _Args...>,
        __result_of_memfun_deref<_MemPtr, _Arg, _Args...>
      >::type::type type;
    };

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 2219.  INVOKE-ing a pointer to member with a reference_wrapper
  //        as the object expression

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, const reference_wrapper<_Arg>&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>&&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, const reference_wrapper<_Arg>&&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>, _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, const reference_wrapper<_Arg>&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>&&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, const reference_wrapper<_Arg>&&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<bool, bool, typename _Functor, typename... _ArgTypes>
    struct __result_of_impl
    {
      typedef __failure_type type;
    };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_impl<true, false, _MemPtr, _Arg>
    : public __result_of_memobj<typename decay<_MemPtr>::type, _Arg>
    { };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_impl<false, true, _MemPtr, _Arg, _Args...>
    : public __result_of_memfun<typename decay<_MemPtr>::type, _Arg, _Args...>
    { };

  // [func.require] paragraph 1 bullet 5:
  struct __result_of_other_impl
  {
    template<typename _Fn, typename... _Args>
      static __result_of_success<decltype(
      std::declval<_Fn>()(std::declval<_Args>()...)
      ), __invoke_other> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _Functor, typename... _ArgTypes>
    struct __result_of_impl<false, false, _Functor, _ArgTypes...>
    : 
# 2490 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits"
     public 
# 2490 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
             __result_of_other_impl
    {
      typedef decltype(_S_test<_Functor, _ArgTypes...>(0)) type;
    };

  template<typename _Functor, typename... _ArgTypes>
    struct result_of<_Functor(_ArgTypes...)>
    : public __result_of_impl<
        is_member_object_pointer<
          typename remove_reference<_Functor>::type
        >::value,
        is_member_function_pointer<
          typename remove_reference<_Functor>::type
        >::value,
     _Functor, _ArgTypes...
      >::type
    { };


  /// Alias template for aligned_storage
  template<size_t _Len, size_t _Align =
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;

  template <size_t _Len, typename... _Types>
    using aligned_union_t = typename aligned_union<_Len, _Types...>::type;

  /// Alias template for decay
  template<typename _Tp>
    using decay_t = typename decay<_Tp>::type;

  /// Alias template for enable_if
  template<bool _Cond, typename _Tp = void>
    using enable_if_t = typename enable_if<_Cond, _Tp>::type;

  /// Alias template for conditional
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    using conditional_t = typename conditional<_Cond, _Iftrue, _Iffalse>::type;

  /// Alias template for common_type
  template<typename... _Tp>
    using common_type_t = typename common_type<_Tp...>::type;

  /// Alias template for underlying_type
  template<typename _Tp>
    using underlying_type_t = typename underlying_type<_Tp>::type;

  /// Alias template for result_of
  template<typename _Tp>
    using result_of_t = typename result_of<_Tp>::type;


  template<typename...> using __void_t = void;



  /// A metafunction that always yields void, used for detecting valid types.
  template<typename...> using void_t = void;


  /// Implementation of the detection idiom (negative case).
  template<typename _Default, typename _AlwaysVoid,
    template<typename...> class _Op, typename... _Args>
    struct __detector
    {
      using value_t = false_type;
      using type = _Default;
    };

  /// Implementation of the detection idiom (positive case).
  template<typename _Default, template<typename...> class _Op,
     typename... _Args>
    struct __detector<_Default, __void_t<_Op<_Args...>>, _Op, _Args...>
    {
      using value_t = true_type;
      using type = _Op<_Args...>;
    };

  // Detect whether _Op<_Args...> is a valid type, use _Default if not.
  template<typename _Default, template<typename...> class _Op,
    typename... _Args>
    using __detected_or = __detector<_Default, void, _Op, _Args...>;

  // _Op<_Args...> if that is a valid type, otherwise _Default.
  template<typename _Default, template<typename...> class _Op,
    typename... _Args>
    using __detected_or_t
      = typename __detected_or<_Default, _Op, _Args...>::type;

  // _Op<_Args...> if that is a valid type, otherwise _Default<_Args...>.
  template<template<typename...> class _Default,
    template<typename...> class _Op, typename... _Args>
    using __detected_or_t_ =
      __detected_or_t<_Default<_Args...>, _Op, _Args...>;

  /// @} group metaprogramming

  /**
   *  Use SFINAE to determine if the type _Tp has a publicly-accessible
   *  member type _NTYPE.
   */
# 2601 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 3
  template <typename _Tp>
    struct __is_swappable;

  template <typename _Tp>
    struct __is_nothrow_swappable;

  template<typename _Tp>
    inline
    typename enable_if<__and_<is_move_constructible<_Tp>,
         is_move_assignable<_Tp>>::value>::type
    swap(_Tp&, _Tp&)
    noexcept(__and_<is_nothrow_move_constructible<_Tp>,
             is_nothrow_move_assignable<_Tp>>::value);

  template<typename _Tp, size_t _Nm>
    inline
    typename enable_if<__is_swappable<_Tp>::value>::type
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    noexcept(__is_nothrow_swappable<_Tp>::value);

  namespace __swappable_details {
    using std::swap;

    struct __do_is_swappable_impl
    {
      template<typename _Tp, typename
               = decltype(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))>
        static true_type __test(int);

      template<typename>
        static false_type __test(...);
    };

    struct __do_is_nothrow_swappable_impl
    {
      template<typename _Tp>
        static __bool_constant<
          noexcept(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))
        > __test(int);

      template<typename>
        static false_type __test(...);
    };

  }

  template<typename _Tp>
    struct __is_swappable_impl
    : public __swappable_details::__do_is_swappable_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_nothrow_swappable_impl
    : public __swappable_details::__do_is_nothrow_swappable_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_swappable
    : public __is_swappable_impl<_Tp>::type
    { };

  template<typename _Tp>
    struct __is_nothrow_swappable
    : public __is_nothrow_swappable_impl<_Tp>::type
    { };


} // namespace std
# 58 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 2 3

namespace std
{


  /**
   *  @addtogroup utilities
   *  @{
   */

  /**
   *  @brief  Forward an lvalue.
   *  @return The parameter cast to the specified type.
   *
   *  This function is used to implement "perfect forwarding".
   */
  template<typename _Tp>
    constexpr _Tp&&
    forward(typename std::remove_reference<_Tp>::type& __t) noexcept
    { return static_cast<_Tp&&>(__t); }

  /**
   *  @brief  Forward an rvalue.
   *  @return The parameter cast to the specified type.
   *
   *  This function is used to implement "perfect forwarding".
   */
  template<typename _Tp>
    constexpr _Tp&&
    forward(typename std::remove_reference<_Tp>::type&& __t) noexcept
    {
      static_assert(!std::is_lvalue_reference<_Tp>::value, "template argument"
      " substituting _Tp is an lvalue reference type");
      return static_cast<_Tp&&>(__t);
    }

  /**
   *  @brief  Convert a value to an rvalue.
   *  @param  __t  A thing of arbitrary type.
   *  @return The parameter cast to an rvalue-reference to allow moving it.
  */
  template<typename _Tp>
    constexpr typename std::remove_reference<_Tp>::type&&
    move(_Tp&& __t) noexcept
    { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }


  template<typename _Tp>
    struct __move_if_noexcept_cond
    : public __and_<__not_<is_nothrow_move_constructible<_Tp>>,
                    is_copy_constructible<_Tp>>::type { };

  /**
   *  @brief  Conditionally convert a value to an rvalue.
   *  @param  __x  A thing of arbitrary type.
   *  @return The parameter, possibly cast to an rvalue-reference.
   *
   *  Same as std::move unless the type's move constructor could throw and the
   *  type is copyable, in which case an lvalue-reference is returned instead.
   */
  template<typename _Tp>
    constexpr typename
    conditional<__move_if_noexcept_cond<_Tp>::value, const _Tp&, _Tp&&>::type
    move_if_noexcept(_Tp& __x) noexcept
    { return std::move(__x); }

  // declval, from type_traits.

  /**
   *  @brief Returns the actual address of the object or function
   *         referenced by r, even in the presence of an overloaded
   *         operator&.
   *  @param  __r  Reference to an object or function.
   *  @return   The actual address.
  */
  template<typename _Tp>
    inline _Tp*
    addressof(_Tp& __r) noexcept
    { return std::__addressof(__r); }

  // C++11 version of std::exchange for internal use.
  template <typename _Tp, typename _Up = _Tp>
    inline _Tp
    __exchange(_Tp& __obj, _Up&& __new_val)
    {
      _Tp __old_val = std::move(__obj);
      __obj = std::forward<_Up>(__new_val);
      return __old_val;
    }

  /// @} group utilities

} // namespace
# 159 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 3
namespace std
{


  /**
   *  @addtogroup utilities
   *  @{
   */

  /**
   *  @brief Swaps two values.
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @return   Nothing.
  */
  template<typename _Tp>
    inline

    typename enable_if<__and_<is_move_constructible<_Tp>,
         is_move_assignable<_Tp>>::value>::type
    swap(_Tp& __a, _Tp& __b)
    noexcept(__and_<is_nothrow_move_constructible<_Tp>,
             is_nothrow_move_assignable<_Tp>>::value)




    {
      // concept requirements
     

      _Tp __tmp = std::move(__a);
      __a = std::move(__b);
      __b = std::move(__tmp);
    }

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 809. std::swap should be overloaded for array types.
  /// Swap the contents of two arrays.
  template<typename _Tp, size_t _Nm>
    inline

    typename enable_if<__is_swappable<_Tp>::value>::type
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    noexcept(__is_nothrow_swappable<_Tp>::value)




    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

  /// @} group utilities

} // namespace
# 60 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_pair.h" 2 3


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 1 3
// C++11 <type_traits> -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/type_traits
 *  This is a Standard C++ Library header.
 */
# 63 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_pair.h" 2 3


namespace std
{


  /**
   *  @addtogroup utilities
   *  @{
   */


  /// piecewise_construct_t
  struct piecewise_construct_t { explicit piecewise_construct_t() = default; };

  /// piecewise_construct
  constexpr piecewise_construct_t piecewise_construct = piecewise_construct_t();

  // Forward declarations.
  template<typename...>
    class tuple;

  template<std::size_t...>
    struct _Index_tuple;

  // Concept utility functions, reused in conditionally-explicit
  // constructors.
  // See PR 70437, don't look at is_constructible or
  // is_convertible if the types are the same to
  // avoid querying those properties for incomplete types.
  template <bool, typename _T1, typename _T2>
    struct _PCC
    {
      template <typename _U1, typename _U2>
      static constexpr bool _ConstructiblePair()
      {
 return __and_<is_constructible<_T1, const _U1&>,
        is_constructible<_T2, const _U2&>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyConvertiblePair()
      {
 return __and_<is_convertible<const _U1&, _T1>,
        is_convertible<const _U2&, _T2>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _MoveConstructiblePair()
      {
 return __and_<is_constructible<_T1, _U1&&>,
        is_constructible<_T2, _U2&&>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyMoveConvertiblePair()
      {
 return __and_<is_convertible<_U1&&, _T1>,
        is_convertible<_U2&&, _T2>>::value;
      }

      template <bool __implicit, typename _U1, typename _U2>
      static constexpr bool _CopyMovePair()
      {
 using __do_converts = __and_<is_convertible<const _U1&, _T1>,
      is_convertible<_U2&&, _T2>>;
 using __converts = typename conditional<__implicit,
           __do_converts,
           __not_<__do_converts>>::type;
 return __and_<is_constructible<_T1, const _U1&>,
        is_constructible<_T2, _U2&&>,
        __converts
        >::value;
      }

      template <bool __implicit, typename _U1, typename _U2>
      static constexpr bool _MoveCopyPair()
      {
 using __do_converts = __and_<is_convertible<_U1&&, _T1>,
      is_convertible<const _U2&, _T2>>;
 using __converts = typename conditional<__implicit,
           __do_converts,
           __not_<__do_converts>>::type;
 return __and_<is_constructible<_T1, _U1&&>,
        is_constructible<_T2, const _U2&&>,
        __converts
        >::value;
      }
  };

  template <typename _T1, typename _T2>
    struct _PCC<false, _T1, _T2>
    {
      template <typename _U1, typename _U2>
      static constexpr bool _ConstructiblePair()
      {
 return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyConvertiblePair()
      {
 return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _MoveConstructiblePair()
      {
 return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyMoveConvertiblePair()
      {
 return false;
      }
  };



 /**
   *  @brief Struct holding two objects of arbitrary type.
   *
   *  @tparam _T1  Type of first object.
   *  @tparam _T2  Type of second object.
   */
  template<typename _T1, typename _T2>
    struct pair
    {
      typedef _T1 first_type; /// @c first_type is the first bound type
      typedef _T2 second_type; /// @c second_type is the second bound type

      _T1 first; /// @c first is a copy of the first object
      _T2 second; /// @c second is a copy of the second object

      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 265.  std::pair::pair() effects overly restrictive
      /** The default constructor creates @c first and @c second using their
       *  respective default constructors.  */

      template <typename _U1 = _T1,
                typename _U2 = _T2,
                typename enable_if<__and_<
                                     __is_implicitly_default_constructible<_U1>,
                                     __is_implicitly_default_constructible<_U2>>
                                   ::value, bool>::type = true>

      constexpr pair()
      : first(), second() { }


      template <typename _U1 = _T1,
                typename _U2 = _T2,
                typename enable_if<__and_<
                       is_default_constructible<_U1>,
                       is_default_constructible<_U2>,
                       __not_<
                         __and_<__is_implicitly_default_constructible<_U1>,
                                __is_implicitly_default_constructible<_U2>>>>
                                   ::value, bool>::type = false>
      explicit constexpr pair()
      : first(), second() { }


      /** Two objects may be passed to a @c pair constructor to be copied.  */




      // Shortcut for constraining the templates that don't take pairs.
      using _PCCP = _PCC<true, _T1, _T2>;

      template<typename _U1 = _T1, typename _U2=_T2, typename
        enable_if<_PCCP::template
      _ConstructiblePair<_U1, _U2>()
                  && _PCCP::template
      _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
      constexpr pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }

       template<typename _U1 = _T1, typename _U2=_T2, typename
  enable_if<_PCCP::template
       _ConstructiblePair<_U1, _U2>()
                   && !_PCCP::template
       _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
      explicit constexpr pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }


      /** There is also a templated copy ctor for the @c pair class itself.  */





      // Shortcut for constraining the templates that take pairs.
      template <typename _U1, typename _U2>
        using _PCCFP = _PCC<!is_same<_T1, _U1>::value
       || !is_same<_T2, _U2>::value,
       _T1, _T2>;

      template<typename _U1, typename _U2, typename
        enable_if<_PCCFP<_U1, _U2>::template
      _ConstructiblePair<_U1, _U2>()
                  && _PCCFP<_U1, _U2>::template
      _ImplicitlyConvertiblePair<_U1, _U2>(),
     bool>::type=true>
        constexpr pair(const pair<_U1, _U2>& __p)
        : first(__p.first), second(__p.second) { }

      template<typename _U1, typename _U2, typename
        enable_if<_PCCFP<_U1, _U2>::template
      _ConstructiblePair<_U1, _U2>()
    && !_PCCFP<_U1, _U2>::template
      _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(const pair<_U1, _U2>& __p)
 : first(__p.first), second(__p.second) { }

      constexpr pair(const pair&) = default;
      constexpr pair(pair&&) = default;

      // DR 811.
      template<typename _U1, typename
        enable_if<_PCCP::template
      _MoveCopyPair<true, _U1, _T2>(),
                         bool>::type=true>
       constexpr pair(_U1&& __x, const _T2& __y)
       : first(std::forward<_U1>(__x)), second(__y) { }

      template<typename _U1, typename
        enable_if<_PCCP::template
      _MoveCopyPair<false, _U1, _T2>(),
                         bool>::type=false>
       explicit constexpr pair(_U1&& __x, const _T2& __y)
       : first(std::forward<_U1>(__x)), second(__y) { }

      template<typename _U2, typename
        enable_if<_PCCP::template
      _CopyMovePair<true, _T1, _U2>(),
                         bool>::type=true>
       constexpr pair(const _T1& __x, _U2&& __y)
       : first(__x), second(std::forward<_U2>(__y)) { }

      template<typename _U2, typename
        enable_if<_PCCP::template
      _CopyMovePair<false, _T1, _U2>(),
                         bool>::type=false>
       explicit pair(const _T1& __x, _U2&& __y)
       : first(__x), second(std::forward<_U2>(__y)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_PCCP::template
      _MoveConstructiblePair<_U1, _U2>()
     && _PCCP::template
      _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
 constexpr pair(_U1&& __x, _U2&& __y)
 : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_PCCP::template
      _MoveConstructiblePair<_U1, _U2>()
     && !_PCCP::template
      _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(_U1&& __x, _U2&& __y)
 : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y)) { }


      template<typename _U1, typename _U2, typename
        enable_if<_PCCFP<_U1, _U2>::template
      _MoveConstructiblePair<_U1, _U2>()
     && _PCCFP<_U1, _U2>::template
      _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
 constexpr pair(pair<_U1, _U2>&& __p)
 : first(std::forward<_U1>(__p.first)),
   second(std::forward<_U2>(__p.second)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_PCCFP<_U1, _U2>::template
      _MoveConstructiblePair<_U1, _U2>()
     && !_PCCFP<_U1, _U2>::template
      _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(pair<_U1, _U2>&& __p)
 : first(std::forward<_U1>(__p.first)),
   second(std::forward<_U2>(__p.second)) { }

      template<typename... _Args1, typename... _Args2>
        pair(piecewise_construct_t, tuple<_Args1...>, tuple<_Args2...>);

      pair&
      operator=(typename conditional<
  __and_<is_copy_assignable<_T1>,
         is_copy_assignable<_T2>>::value,
  const pair&, const __nonesuch&>::type __p)
      {
 first = __p.first;
 second = __p.second;
 return *this;
      }

      pair&
      operator=(typename conditional<
  __not_<__and_<is_copy_assignable<_T1>,
                is_copy_assignable<_T2>>>::value,
  const pair&, const __nonesuch&>::type __p) = delete;

      pair&
      operator=(typename conditional<
  __and_<is_move_assignable<_T1>,
         is_move_assignable<_T2>>::value,
  pair&&, __nonesuch&&>::type __p)
      noexcept(__and_<is_nothrow_move_assignable<_T1>,
               is_nothrow_move_assignable<_T2>>::value)
      {
 first = std::forward<first_type>(__p.first);
 second = std::forward<second_type>(__p.second);
 return *this;
      }

      template<typename _U1, typename _U2>
      typename enable_if<__and_<is_assignable<_T1&, const _U1&>,
    is_assignable<_T2&, const _U2&>>::value,
    pair&>::type
 operator=(const pair<_U1, _U2>& __p)
 {
   first = __p.first;
   second = __p.second;
   return *this;
 }

      template<typename _U1, typename _U2>
      typename enable_if<__and_<is_assignable<_T1&, _U1&&>,
    is_assignable<_T2&, _U2&&>>::value,
    pair&>::type
 operator=(pair<_U1, _U2>&& __p)
 {
   first = std::forward<_U1>(__p.first);
   second = std::forward<_U2>(__p.second);
   return *this;
 }

      void
      swap(pair& __p)
      noexcept(__is_nothrow_swappable<_T1>::value
               && __is_nothrow_swappable<_T2>::value)
      {
 using std::swap;
 swap(first, __p.first);
 swap(second, __p.second);
      }

    
# 420 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_pair.h"
   public
# 420 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_pair.h" 3
          :
      template<typename... _Args1, std::size_t... _Indexes1,
               typename... _Args2, std::size_t... _Indexes2>
        pair(tuple<_Args1...>&, tuple<_Args2...>&,
             _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);

    };

  /// Two pairs of the same type are equal iff their members are equal.
  template<typename _T1, typename _T2>
    inline constexpr bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }

  /// <http://gcc.gnu.org/onlinedocs/libstdc++/manual/utilities.html>
  template<typename _T1, typename _T2>
    inline constexpr bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }

  /// Uses @c operator== to find the result.
  template<typename _T1, typename _T2>
    inline constexpr bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }

  /// Uses @c operator< to find the result.
  template<typename _T1, typename _T2>
    inline constexpr bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }

  /// Uses @c operator< to find the result.
  template<typename _T1, typename _T2>
    inline constexpr bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }

  /// Uses @c operator< to find the result.
  template<typename _T1, typename _T2>
    inline constexpr bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }


  /// See std::pair::swap().
  // Note:  no std::swap overloads in C++03 mode, this has performance
  //        implications, see, eg, libstdc++/38466.
  template<typename _T1, typename _T2>
    inline void
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
    noexcept(noexcept(__x.swap(__y)))
    { __x.swap(__y); }


  /**
   *  @brief A convenience wrapper for creating a pair from two objects.
   *  @param  __x  The first object.
   *  @param  __y  The second object.
   *  @return   A newly-constructed pair<> object of the appropriate type.
   *
   *  The standard requires that the objects be passed by reference-to-const,
   *  but LWG issue #181 says they should be passed by const value.  We follow
   *  the LWG by default.
   */
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 181.  make_pair() unintended behavior

  // NB: DR 706.
  template<typename _T1, typename _T2>
    constexpr pair<typename __decay_and_strip<_T1>::__type,
                   typename __decay_and_strip<_T2>::__type>
    make_pair(_T1&& __x, _T2&& __y)
    {
      typedef typename __decay_and_strip<_T1>::__type __ds_type1;
      typedef typename __decay_and_strip<_T2>::__type __ds_type2;
      typedef pair<__ds_type1, __ds_type2> __pair_type;
      return __pair_type(std::forward<_T1>(__x), std::forward<_T2>(__y));
    }







  /// @}


} // namespace std
# 65 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_types.h" 1 3
// Types used in iterator implementation -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_iterator_base_types.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 *
 *  This file contains all of the general iterator-related utility types,
 *  such as iterator_traits and struct iterator.
 */




       
# 63 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_types.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 65 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_types.h" 2 3


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 1 3
// C++11 <type_traits> -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/type_traits
 *  This is a Standard C++ Library header.
 */
# 68 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_types.h" 2 3


namespace std
{


  /**
   *  @defgroup iterators Iterators
   *  Abstractions for uniform iterating through various underlying types.
  */
  //@{ 

  /**
   *  @defgroup iterator_tags Iterator Tags
   *  These are empty types, used to distinguish different iterators.  The
   *  distinction is not made by what they contain, but simply by what they
   *  are.  Different underlying algorithms can then be used based on the
   *  different operations supported by different iterator types.
  */
  //@{ 
  ///  Marking input iterators.
  struct input_iterator_tag { };

  ///  Marking output iterators.
  struct output_iterator_tag { };

  /// Forward iterators support a superset of input iterator operations.
  struct forward_iterator_tag : public input_iterator_tag { };

  /// Bidirectional iterators support a superset of forward iterator
  /// operations.
  struct bidirectional_iterator_tag : public forward_iterator_tag { };

  /// Random-access iterators support a superset of bidirectional
  /// iterator operations.
  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
  //@}

  /**
   *  @brief  Common %iterator class.
   *
   *  This class does nothing but define nested typedefs.  %Iterator classes
   *  can inherit from this class to save some work.  The typedefs are then
   *  used in specializations and overloading.
   *
   *  In particular, there are no default implementations of requirements
   *  such as @c operator++ and the like.  (How could there be?)
  */
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {
      /// One of the @link iterator_tags tag types@endlink.
      typedef _Category iterator_category;
      /// The type "pointed to" by the iterator.
      typedef _Tp value_type;
      /// Distance between iterators is represented as this type.
      typedef _Distance difference_type;
      /// This type represents a pointer-to-value_type.
      typedef _Pointer pointer;
      /// This type represents a reference-to-value_type.
      typedef _Reference reference;
    };

  /**
   *  @brief  Traits class for iterators.
   *
   *  This class does nothing but define nested typedefs.  The general
   *  version simply @a forwards the nested typedefs from the Iterator
   *  argument.  Specialized versions for pointers and pointers-to-const
   *  provide tighter, more correct semantics.
  */

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 2408. SFINAE-friendly common_type/iterator_traits is missing in C++14
  template<typename _Iterator, typename = __void_t<>>
    struct __iterator_traits { };

  template<typename _Iterator>
    struct __iterator_traits<_Iterator,
        __void_t<typename _Iterator::iterator_category,
          typename _Iterator::value_type,
          typename _Iterator::difference_type,
          typename _Iterator::pointer,
          typename _Iterator::reference>>
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Iterator>
    struct iterator_traits
    : public __iterator_traits<_Iterator> { };
# 176 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_types.h" 3
  /// Partial specialization for pointer types.
  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };

  /// Partial specialization for const pointer types.
  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };

  /**
   *  This function is not a part of the C++ standard but is syntactic
   *  sugar for internal library use only.
  */
  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }

  //@}
# 230 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_types.h" 3
  template<typename _InIter>
    using _RequireInputIter = typename
      enable_if<is_convertible<typename
  iterator_traits<_InIter>::iterator_category,
          input_iterator_tag>::value>::type;



} // namespace
# 66 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_funcs.h" 1 3
// Functions used by iterators -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_iterator_base_funcs.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 *
 *  This file contains all of the general iterator-related utility
 *  functions, such as distance() and advance().
 */




       
# 63 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_funcs.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\concept_check.h" 1 3
// Concept-checking control -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/concept_check.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 */
# 65 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_funcs.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\debug\\assertions.h" 1 3
// Debugging support implementation -*- C++ -*-

// Copyright (C) 2003-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file debug/assertions.h
 *  This file is a GNU debug extension to the Standard C++ Library.
 */
# 66 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_funcs.h" 2 3

namespace std
{

  // Forward declaration for the overloads of __distance.
  template <typename> struct _List_iterator;
  template <typename> struct _List_const_iterator;




  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {
      // concept requirements
     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {
      // concept requirements
     

      return __last - __first;
    }


  // Forward declaration because of the qualified call in distance.
  template<typename _Tp>
    ptrdiff_t
    __distance(std::_List_iterator<_Tp>,
        std::_List_iterator<_Tp>,
        input_iterator_tag);

  template<typename _Tp>
    ptrdiff_t
    __distance(std::_List_const_iterator<_Tp>,
        std::_List_const_iterator<_Tp>,
        input_iterator_tag);


  /**
   *  @brief A generalization of pointer arithmetic.
   *  @param  __first  An input iterator.
   *  @param  __last  An input iterator.
   *  @return  The distance between them.
   *
   *  Returns @c n such that __first + n == __last.  This requires
   *  that @p __last must be reachable from @p __first.  Note that @c
   *  n may be negative.
   *
   *  For random access iterators, this uses their @c + and @c - operations
   *  and are constant time.  For other %iterator classes they are linear time.
  */
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {
      // concept requirements -- taken care of in __distance
      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {
      // concept requirements
     
      ;
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {
      // concept requirements
     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {
      // concept requirements
     

      __i += __n;
    }

  /**
   *  @brief A generalization of pointer arithmetic.
   *  @param  __i  An input iterator.
   *  @param  __n  The @a delta by which to change @p __i.
   *  @return  Nothing.
   *
   *  This increments @p i by @p n.  For bidirectional and random access
   *  iterators, @p __n may be negative, in which case @p __i is decremented.
   *
   *  For random access iterators, this uses their @c + and @c - operations
   *  and are constant time.  For other %iterator classes they are linear time.
  */
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {
      // concept requirements -- taken care of in __advance
      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }



  template<typename _ForwardIterator>
    inline _ForwardIterator
    next(_ForwardIterator __x, typename
  iterator_traits<_ForwardIterator>::difference_type __n = 1)
    {
      // concept requirements
     

      std::advance(__x, __n);
      return __x;
    }

  template<typename _BidirectionalIterator>
    inline _BidirectionalIterator
    prev(_BidirectionalIterator __x, typename
  iterator_traits<_BidirectionalIterator>::difference_type __n = 1)
    {
      // concept requirements
     

      std::advance(__x, -__n);
      return __x;
    }




} // namespace
# 67 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 1 3
// Iterators -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_iterator.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 *
 *  This file implements reverse_iterator, back_insert_iterator,
 *  front_insert_iterator, insert_iterator, __normal_iterator, and their
 *  supporting functions and overloaded operators.
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cpp_type_traits.h" 1 3
// The  -*- C++ -*- type traits classes for internal use in libstdc++

// Copyright (C) 2000-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cpp_type_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{ext/type_traits}
 */

// Written by Gabriel Dos Reis <dosreis@cmla.ens-cachan.fr>
# 64 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\type_traits.h" 1 3
// -*- C++ -*-

// Copyright (C) 2005-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/type_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
# 65 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */
# 66 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ptr_traits.h" 1 3
// Pointer Traits -*- C++ -*-

// Copyright (C) 2011-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/ptr_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{memory}
 */






# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ptr_traits.h" 2 3

namespace std
{


  class __undefined;

  // Given Template<T, ...> return T, otherwise invalid.
  template<typename _Tp>
    struct __get_first_arg
    { using type = __undefined; };

  template<template<typename, typename...> class _Template, typename _Tp,
           typename... _Types>
    struct __get_first_arg<_Template<_Tp, _Types...>>
    { using type = _Tp; };

  template<typename _Tp>
    using __get_first_arg_t = typename __get_first_arg<_Tp>::type;

  // Given Template<T, ...> and U return Template<U, ...>, otherwise invalid.
  template<typename _Tp, typename _Up>
    struct __replace_first_arg
    { using type = __undefined; };

  template<template<typename, typename...> class _Template, typename _Up,
           typename _Tp, typename... _Types>
    struct __replace_first_arg<_Template<_Tp, _Types...>, _Up>
    { using type = _Template<_Up, _Types...>; };

  template<typename _Tp, typename _Up>
    using __replace_first_arg_t = typename __replace_first_arg<_Tp, _Up>::type;

  template<typename _Tp>
    using __make_not_void
      = typename conditional<is_void<_Tp>::value, __undefined, _Tp>::type;

  /**
   * @brief  Uniform interface to all pointer-like types
   * @ingroup pointer_abstractions
  */
  template<typename _Ptr>
    struct pointer_traits
    {
    
# 80 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ptr_traits.h"
   public
# 80 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ptr_traits.h" 3
          :
      template<typename _Tp>
 using __element_type = typename _Tp::element_type;

      template<typename _Tp>
 using __difference_type = typename _Tp::difference_type;

      template<typename _Tp, typename _Up>
 using __rebind = typename _Tp::template rebind<_Up>;

    public:
      /// The pointer type.
      using pointer = _Ptr;

      /// The type pointed to.
      using element_type
 = __detected_or_t_<__get_first_arg_t, __element_type, _Ptr>;

      /// The type used to represent the difference between two pointers.
      using difference_type
 = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;

      /// A pointer to a different type.
      template<typename _Up>
        using rebind
   = __detected_or_t_<__replace_first_arg_t, __rebind, _Ptr, _Up>;

      static _Ptr
      pointer_to(__make_not_void<element_type>& __e)
      { return _Ptr::pointer_to(__e); }

      static_assert(!is_same<element_type, __undefined>::value,
   "pointer type defines element_type or is like SomePointer<T, Args>");
      static_assert(!is_same<rebind<element_type>, __undefined>::value,
   "pointer type defines rebind<U> or is like SomePointer<T, Args>");
    };

  /**
   * @brief  Partial specialization for built-in pointers.
   * @ingroup pointer_abstractions
  */
  template<typename _Tp>
    struct pointer_traits<_Tp*>
    {
      /// The pointer type
      typedef _Tp* pointer;
      /// The type pointed to
      typedef _Tp element_type;
      /// Type used to represent the difference between two pointers
      typedef ptrdiff_t difference_type;

      template<typename _Up>
        using rebind = _Up*;

      /**
       *  @brief  Obtain a pointer to an object
       *  @param  __r  A reference to an object of type @c element_type
       *  @return @c addressof(__r)
      */
      static pointer
      pointer_to(__make_not_void<element_type>& __r) noexcept
      { return std::addressof(__r); }
    };

  /// Convenience alias for rebinding pointers.
  template<typename _Ptr, typename _Tp>
    using __ptr_rebind = typename pointer_traits<_Ptr>::template rebind<_Tp>;


} // namespace std
# 67 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 2 3

namespace std
{


  /**
   * @addtogroup iterators
   * @{
   */

  // 24.4.1 Reverse iterators
  /**
   *  Bidirectional and random access iterators have corresponding reverse
   *  %iterator adaptors that iterate through the data structure in the
   *  opposite direction.  They have the same signatures as the corresponding
   *  iterators.  The fundamental relation between a reverse %iterator and its
   *  corresponding %iterator @c i is established by the identity:
   *  @code
   *      &*(reverse_iterator(i)) == &*(i - 1)
   *  @endcode
   *
   *  <em>This mapping is dictated by the fact that while there is always a
   *  pointer past the end of an array, there might not be a valid pointer
   *  before the beginning of an array.</em> [24.4.1]/1,2
   *
   *  Reverse iterators can be tricky and surprising at first.  Their
   *  semantics make sense, however, and the trickiness is a side effect of
   *  the requirement that the iterators must be safe.
  */
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    
# 104 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h"
   public
# 104 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
            :
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;

      /**
       *  The default constructor value-initializes member @p current.
       *  If it is a pointer, that means it is zero-initialized.
      */
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 235 No specification of default ctor for reverse_iterator
      reverse_iterator() : current() { }

      /**
       *  This %iterator will move in the opposite direction that @p x does.
      */
      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }

      /**
       *  The copy constructor is normal.
      */
      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }

      /**
       *  A %reverse_iterator across other types can be copied if the
       *  underlying %iterator can be converted to the type of @c current.
      */
      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }

      /**
       *  @return  @c current, the %iterator used for underlying work.
      */
      iterator_type
      base() const
      { return current; }

      /**
       *  @return  A reference to the value at @c --current
       *
       *  This requires that @c --current is dereferenceable.
       *
       *  @warning This implementation requires that for an iterator of the
       *           underlying iterator type, @c x, a reference obtained by
       *           @c *x remains valid after @c x has been modified or
       *           destroyed. This is a bug: http://gcc.gnu.org/PR51823
      */
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }

      /**
       *  @return  A pointer to the value at @c --current
       *
       *  This requires that @c --current is dereferenceable.
      */
      pointer
      operator->() const
      { return &(operator*()); }

      /**
       *  @return  @c *this
       *
       *  Decrements the underlying iterator.
      */
      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }

      /**
       *  @return  The original value of @c *this
       *
       *  Decrements the underlying iterator.
      */
      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }

      /**
       *  @return  @c *this
       *
       *  Increments the underlying iterator.
      */
      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }

      /**
       *  @return  A reverse_iterator with the previous value of @c *this
       *
       *  Increments the underlying iterator.
      */
      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }

      /**
       *  @return  A reverse_iterator that refers to @c current - @a __n
       *
       *  The underlying iterator must be a Random Access Iterator.
      */
      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }

      /**
       *  @return  *this
       *
       *  Moves the underlying iterator backwards @a __n steps.
       *  The underlying iterator must be a Random Access Iterator.
      */
      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }

      /**
       *  @return  A reverse_iterator that refers to @c current - @a __n
       *
       *  The underlying iterator must be a Random Access Iterator.
      */
      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }

      /**
       *  @return  *this
       *
       *  Moves the underlying iterator forwards @a __n steps.
       *  The underlying iterator must be a Random Access Iterator.
      */
      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }

      /**
       *  @return  The value at @c current - @a __n - 1
       *
       *  The underlying iterator must be a Random Access Iterator.
      */
      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };

  //@{
  /**
   *  @param  __x  A %reverse_iterator.
   *  @param  __y  A %reverse_iterator.
   *  @return  A simple bool.
   *
   *  Reverse iterators forward many operations to their underlying base()
   *  iterators.  Others are implemented in terms of one another.
   *
  */
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>





    inline auto
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    -> decltype(__x.base() - __y.base())

    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 280. Comparison of reverse_iterator to const reverse_iterator.
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>

    // DR 685.
    inline auto
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    -> decltype(__y.base() - __x.base())





    { return __y.base() - __x.base(); }
  //@}


  // Same as C++14 make_reverse_iterator but used in C++03 mode too.
  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    __make_reverse_iterator(_Iterator __i)
    { return reverse_iterator<_Iterator>(__i); }




  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 2285. make_reverse_iterator
  /// Generator function for reverse_iterator.
  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    make_reverse_iterator(_Iterator __i)
    { return reverse_iterator<_Iterator>(__i); }




  template<typename _Iterator>
    auto
    __niter_base(reverse_iterator<_Iterator> __it)
    -> decltype(__make_reverse_iterator(__niter_base(__it.base())))
    { return __make_reverse_iterator(__niter_base(__it.base())); }

  template<typename _Iterator>
    struct __is_move_iterator<reverse_iterator<_Iterator> >
      : __is_move_iterator<_Iterator>
    { };

  template<typename _Iterator>
    auto
    __miter_base(reverse_iterator<_Iterator> __it)
    -> decltype(__make_reverse_iterator(__miter_base(__it.base())))
    { return __make_reverse_iterator(__miter_base(__it.base())); }


  // 24.4.2.2.1 back_insert_iterator
  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator appends it to the container using
   *  push_back.
   *
   *  Tip:  Using the back_inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    
# 452 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h"
   public
# 452 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
            :
      _Container* container;

    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;

      /// The only way to create this %iterator is with a container.
      explicit
      back_insert_iterator(_Container& __x)
      : container(std::__addressof(__x)) { }

      /**
       *  @param  __value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator doesn't really have a @a position in the
       *  container (you can think of the position as being permanently at
       *  the end, if you like).  Assigning a value to the %iterator will
       *  always append the value to the end of the container.
      */
# 483 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
      back_insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 container->push_back(__value);
 return *this;
      }

      back_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_back(std::move(__value));
 return *this;
      }


      /// Simply returns *this.
      back_insert_iterator&
      operator*()
      { return *this; }

      /// Simply returns *this.  (This %iterator does not @a move.)
      back_insert_iterator&
      operator++()
      { return *this; }

      /// Simply returns *this.  (This %iterator does not @a move.)
      back_insert_iterator
      operator++(int)
      { return *this; }
    };

  /**
   *  @param  __x  A container of arbitrary type.
   *  @return  An instance of back_insert_iterator working on @p __x.
   *
   *  This wrapper function helps in creating back_insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }

  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator prepends it to the container using
   *  push_front.
   *
   *  Tip:  Using the front_inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    
# 544 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h"
   public
# 544 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
            :
      _Container* container;

    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;

      /// The only way to create this %iterator is with a container.
      explicit front_insert_iterator(_Container& __x)
      : container(std::__addressof(__x)) { }

      /**
       *  @param  __value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator doesn't really have a @a position in the
       *  container (you can think of the position as being permanently at
       *  the front, if you like).  Assigning a value to the %iterator will
       *  always prepend the value to the front of the container.
      */
# 574 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
      front_insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 container->push_front(__value);
 return *this;
      }

      front_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_front(std::move(__value));
 return *this;
      }


      /// Simply returns *this.
      front_insert_iterator&
      operator*()
      { return *this; }

      /// Simply returns *this.  (This %iterator does not @a move.)
      front_insert_iterator&
      operator++()
      { return *this; }

      /// Simply returns *this.  (This %iterator does not @a move.)
      front_insert_iterator
      operator++(int)
      { return *this; }
    };

  /**
   *  @param  __x  A container of arbitrary type.
   *  @return  An instance of front_insert_iterator working on @p x.
   *
   *  This wrapper function helps in creating front_insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }

  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator inserts it in the container at the
   *  %iterator's position, rather than overwriting the value at that
   *  position.
   *
   *  (Sequences will actually insert a @e copy of the value before the
   *  %iterator's position.)
   *
   *  Tip:  Using the inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    
# 639 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h"
   public
# 639 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
            :
      _Container* container;
      typename _Container::iterator iter;

    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;

      /**
       *  The only way to create this %iterator is with a container and an
       *  initial position (a normal %iterator into the container).
      */
      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(std::__addressof(__x)), iter(__i) {}

      /**
       *  @param  __value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator maintains its own position in the
       *  container.  Assigning a value to the %iterator will insert the
       *  value into the container at the place before the %iterator.
       *
       *  The position is maintained such that subsequent assignments will
       *  insert values immediately after one another.  For example,
       *  @code
       *     // vector v contains A and Z
       *
       *     insert_iterator i (v, ++v.begin());
       *     i = 1;
       *     i = 2;
       *     i = 3;
       *
       *     // vector v contains A, 1, 2, 3, and Z
       *  @endcode
      */
# 686 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
      insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }

      insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 iter = container->insert(iter, std::move(__value));
 ++iter;
 return *this;
      }


      /// Simply returns *this.
      insert_iterator&
      operator*()
      { return *this; }

      /// Simply returns *this.  (This %iterator does not @a move.)
      insert_iterator&
      operator++()
      { return *this; }

      /// Simply returns *this.  (This %iterator does not @a move.)
      insert_iterator&
      operator++(int)
      { return *this; }
    };

  /**
   *  @param __x  A container of arbitrary type.
   *  @return  An instance of insert_iterator working on @p __x.
   *
   *  This wrapper function helps in creating insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }

  // @} group iterators


} // namespace

namespace __gnu_cxx
{


  // This iterator adapter is @a normal in the sense that it does not
  // change the semantics of any of the operators of its iterator
  // parameter.  Its primary purpose is to convert an iterator that is
  // not a class, e.g. a pointer, into an iterator that is a class.
  // The _Container parameter exists solely so that different containers
  // using this template can instantiate different types, even if the
  // _Iterator parameter is the same.
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    
# 759 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h"
   public
# 759 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
            :
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      constexpr __normal_iterator() noexcept
      : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) noexcept
      : _M_current(__i) { }

      // Allow iterator to const_iterator conversion
      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i) noexcept
        : _M_current(__i.base()) { }

      // Forward iterator requirements
      reference
      operator*() const noexcept
      { return *_M_current; }

      pointer
      operator->() const noexcept
      { return _M_current; }

      __normal_iterator&
      operator++() noexcept
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int) noexcept
      { return __normal_iterator(_M_current++); }

      // Bidirectional iterator requirements
      __normal_iterator&
      operator--() noexcept
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int) noexcept
      { return __normal_iterator(_M_current--); }

      // Random access iterator requirements
      reference
      operator[](difference_type __n) const noexcept
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(difference_type __n) noexcept
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(difference_type __n) const noexcept
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(difference_type __n) noexcept
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(difference_type __n) const noexcept
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const noexcept
      { return _M_current; }
    };

  // Note: In what follows, the left- and right-hand-side iterators are
  // allowed to vary in types (conceptually in cv-qualification) so that
  // comparison between cv-qualified and non-cv-qualified iterators be
  // valid.  However, the greedy and unfriendly operators in std::rel_ops
  // will make overload resolution ambiguous (when in scope) if we don't
  // provide overloads whose operands are of the same type.  Can someone
  // remind me what generic programming is about? -- Gaby

  // Forward iterator requirements
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() != __rhs.base(); }

  // Random access iterator requirements
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() >= __rhs.base(); }

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // According to the resolution of DR179 not only the various comparison
  // operators but also operator- must accept mixed iterator/const_iterator
  // parameters.
  template<typename _IteratorL, typename _IteratorR, typename _Container>

    // DR 685.
    inline auto
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
    -> decltype(__lhs.base() - __rhs.base())





    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    noexcept
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }


} // namespace

namespace std
{


  template<typename _Iterator, typename _Container>
    _Iterator
    __niter_base(__gnu_cxx::__normal_iterator<_Iterator, _Container> __it)
    { return __it.base(); }


} // namespace



namespace std
{


  /**
   * @addtogroup iterators
   * @{
   */

  // 24.4.3  Move iterators
  /**
   *  Class template move_iterator is an iterator adapter with the same
   *  behavior as the underlying iterator except that its dereference
   *  operator implicitly converts the value returned by the underlying
   *  iterator's dereference operator to an rvalue reference.  Some
   *  generic algorithms can be called with move iterators to replace
   *  copying with moving.
   */
  template<typename _Iterator>
    class move_iterator
    {
    
# 1009 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h"
   public
# 1009 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 3
            :
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;
      typedef typename __traits_type::reference __base_ref;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      // NB: DR 680.
      typedef _Iterator pointer;
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 2106. move_iterator wrapping iterators returning prvalues
      typedef typename conditional<is_reference<__base_ref>::value,
    typename remove_reference<__base_ref>::type&&,
    __base_ref>::type reference;

      move_iterator()
      : _M_current() { }

      explicit
      move_iterator(iterator_type __i)
      : _M_current(__i) { }

      template<typename _Iter>
 move_iterator(const move_iterator<_Iter>& __i)
 : _M_current(__i.base()) { }

      iterator_type
      base() const
      { return _M_current; }

      reference
      operator*() const
      { return static_cast<reference>(*_M_current); }

      pointer
      operator->() const
      { return _M_current; }

      move_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      move_iterator
      operator++(int)
      {
 move_iterator __tmp = *this;
 ++_M_current;
 return __tmp;
      }

      move_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      move_iterator
      operator--(int)
      {
 move_iterator __tmp = *this;
 --_M_current;
 return __tmp;
      }

      move_iterator
      operator+(difference_type __n) const
      { return move_iterator(_M_current + __n); }

      move_iterator&
      operator+=(difference_type __n)
      {
 _M_current += __n;
 return *this;
      }

      move_iterator
      operator-(difference_type __n) const
      { return move_iterator(_M_current - __n); }

      move_iterator&
      operator-=(difference_type __n)
      {
 _M_current -= __n;
 return *this;
      }

      reference
      operator[](difference_type __n) const
      { return std::move(_M_current[__n]); }
    };

  // Note: See __normal_iterator operators note from Gaby to understand
  // why there are always 2 versions for most of the move_iterator
  // operators.
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator==(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator!=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __x.base() < __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    { return __x.base() < __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator<=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator>(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline bool
    operator>=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  // DR 685.
  template<typename _IteratorL, typename _IteratorR>
    inline auto
    operator-(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }

  template<typename _Iterator>
    inline auto
    operator-(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    operator+(typename move_iterator<_Iterator>::difference_type __n,
       const move_iterator<_Iterator>& __x)
    { return __x + __n; }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    make_move_iterator(_Iterator __i)
    { return move_iterator<_Iterator>(__i); }

  template<typename _Iterator, typename _ReturnType
    = typename conditional<__move_if_noexcept_cond
      <typename iterator_traits<_Iterator>::value_type>::value,
                _Iterator, move_iterator<_Iterator>>::type>
    inline _ReturnType
    __make_move_if_noexcept_iterator(_Iterator __i)
    { return _ReturnType(__i); }

  // Overload for pointers that matches std::move_if_noexcept more closely,
  // returning a constant iterator when we don't want to move.
  template<typename _Tp, typename _ReturnType
    = typename conditional<__move_if_noexcept_cond<_Tp>::value,
      const _Tp*, move_iterator<_Tp*>>::type>
    inline _ReturnType
    __make_move_if_noexcept_iterator(_Tp* __i)
    { return _ReturnType(__i); }

  // @} group iterators

  template<typename _Iterator>
    auto
    __niter_base(move_iterator<_Iterator> __it)
    -> decltype(make_move_iterator(__niter_base(__it.base())))
    { return make_move_iterator(__niter_base(__it.base())); }

  template<typename _Iterator>
    struct __is_move_iterator<move_iterator<_Iterator> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<typename _Iterator>
    auto
    __miter_base(move_iterator<_Iterator> __it)
    -> decltype(__miter_base(__it.base()))
    { return __miter_base(__it.base()); }


} // namespace
# 68 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\concept_check.h" 1 3
// Concept-checking control -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/concept_check.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 */
# 69 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\debug\\debug.h" 1 3
// Debugging support implementation -*- C++ -*-

// Copyright (C) 2003-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file debug/debug.h
 *  This file is a GNU debug extension to the Standard C++ Library.
 */




/** Macros and namespaces used by the implementation outside of debug
 *  wrappers to verify certain properties. The __glibcxx_requires_xxx
 *  macros are merely wrappers around the __glibcxx_check_xxx wrappers
 *  when we are compiling with debug mode, but disappear when we are
 *  in release mode so that there is no checking performed in, e.g.,
 *  the standard library algorithms.
*/

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\debug\\assertions.h" 1 3
// Debugging support implementation -*- C++ -*-

// Copyright (C) 2003-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file debug/assertions.h
 *  This file is a GNU debug extension to the Standard C++ Library.
 */
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\debug\\debug.h" 2 3

// Debug mode namespaces.

/**
 * @namespace std::__debug
 * @brief GNU debug code, replaces standard behavior with debug behavior.
 */
namespace std
{
  namespace __debug { }
}

/** @namespace __gnu_debug
 *  @brief GNU debug classes for public use.
*/
namespace __gnu_debug
{
  using namespace std::__debug;
}
# 70 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */
# 71 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\predefined_ops.h" 1 3
// Default predicates for internal use -*- C++ -*-

// Copyright (C) 2013-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file predefined_ops.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */




namespace __gnu_cxx
{
namespace __ops
{
  struct _Iter_less_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      constexpr
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 < *__it2; }
  };
  constexpr
  inline _Iter_less_iter
  __iter_less_iter()
  { return _Iter_less_iter(); }

  struct _Iter_less_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it < __val; }
    };

  inline _Iter_less_val
  __iter_less_val()
  { return _Iter_less_val(); }

  inline _Iter_less_val
  __iter_comp_val(_Iter_less_iter)
  { return _Iter_less_val(); }

  struct _Val_less_iter
  {
    template<typename _Value, typename _Iterator>
      bool
      operator()(_Value& __val, _Iterator __it) const
      { return __val < *__it; }
    };

  inline _Val_less_iter
  __val_less_iter()
  { return _Val_less_iter(); }

  inline _Val_less_iter
  __val_comp_iter(_Iter_less_iter)
  { return _Val_less_iter(); }

  struct _Iter_equal_to_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 == *__it2; }
    };

  inline _Iter_equal_to_iter
  __iter_equal_to_iter()
  { return _Iter_equal_to_iter(); }

  struct _Iter_equal_to_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it == __val; }
    };

  inline _Iter_equal_to_val
  __iter_equal_to_val()
  { return _Iter_equal_to_val(); }

  inline _Iter_equal_to_val
  __iter_comp_val(_Iter_equal_to_iter)
  { return _Iter_equal_to_val(); }

  template<typename _Compare>
    struct _Iter_comp_iter
    {
      _Compare _M_comp;
      constexpr
      _Iter_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator1, typename _Iterator2>
        constexpr
        bool
        operator()(_Iterator1 __it1, _Iterator2 __it2)
        { return bool(_M_comp(*__it1, *__it2)); }
    };

  template<typename _Compare>
    constexpr
    inline _Iter_comp_iter<_Compare>
    __iter_comp_iter(_Compare __comp)
    { return _Iter_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    struct _Iter_comp_val
    {
      _Compare _M_comp;

      _Iter_comp_val(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator, typename _Value>
 bool
 operator()(_Iterator __it, _Value& __val)
 { return bool(_M_comp(*__it, __val)); }
    };

  template<typename _Compare>
   inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Compare __comp)
    { return _Iter_comp_val<_Compare>(__comp); }

  template<typename _Compare>
    inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Iter_comp_iter<_Compare> __comp)
    { return _Iter_comp_val<_Compare>(__comp._M_comp); }

  template<typename _Compare>
    struct _Val_comp_iter
    {
      _Compare _M_comp;

      _Val_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Value, typename _Iterator>
 bool
 operator()(_Value& __val, _Iterator __it)
 { return bool(_M_comp(__val, *__it)); }
    };

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Compare __comp)
    { return _Val_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Iter_comp_iter<_Compare> __comp)
    { return _Val_comp_iter<_Compare>(__comp._M_comp); }

  template<typename _Value>
    struct _Iter_equals_val
    {
      _Value& _M_value;

      _Iter_equals_val(_Value& __value)
 : _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return *__it == _M_value; }
    };

  template<typename _Value>
    inline _Iter_equals_val<_Value>
    __iter_equals_val(_Value& __val)
    { return _Iter_equals_val<_Value>(__val); }

  template<typename _Iterator1>
    struct _Iter_equals_iter
    {
      typename std::iterator_traits<_Iterator1>::reference _M_ref;

      _Iter_equals_iter(_Iterator1 __it1)
 : _M_ref(*__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return *__it2 == _M_ref; }
    };

  template<typename _Iterator>
    inline _Iter_equals_iter<_Iterator>
    __iter_comp_iter(_Iter_equal_to_iter, _Iterator __it)
    { return _Iter_equals_iter<_Iterator>(__it); }

  template<typename _Predicate>
    struct _Iter_pred
    {
      _Predicate _M_pred;

      _Iter_pred(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_pred<_Predicate>
    __pred_iter(_Predicate __pred)
    { return _Iter_pred<_Predicate>(__pred); }

  template<typename _Compare, typename _Value>
    struct _Iter_comp_to_val
    {
      _Compare _M_comp;
      _Value& _M_value;

      _Iter_comp_to_val(_Compare __comp, _Value& __value)
 : _M_comp(__comp), _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_comp(*__it, _M_value)); }
    };

  template<typename _Compare, typename _Value>
    _Iter_comp_to_val<_Compare, _Value>
    __iter_comp_val(_Compare __comp, _Value &__val)
    { return _Iter_comp_to_val<_Compare, _Value>(__comp, __val); }

  template<typename _Compare, typename _Iterator1>
    struct _Iter_comp_to_iter
    {
      _Compare _M_comp;
      typename std::iterator_traits<_Iterator1>::reference _M_ref;

      _Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1)
 : _M_comp(__comp), _M_ref(*__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return bool(_M_comp(*__it2, _M_ref)); }
    };

  template<typename _Compare, typename _Iterator>
    inline _Iter_comp_to_iter<_Compare, _Iterator>
    __iter_comp_iter(_Iter_comp_iter<_Compare> __comp, _Iterator __it)
    { return _Iter_comp_to_iter<_Compare, _Iterator>(__comp._M_comp, __it); }

  template<typename _Predicate>
    struct _Iter_negate
    {
      _Predicate _M_pred;

      _Iter_negate(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return !bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_negate<_Predicate>
    __negate(_Iter_pred<_Predicate> __pred)
    { return _Iter_negate<_Predicate>(__pred._M_pred); }

} // namespace __ops
} // namespace __gnu_cxx
# 72 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 2 3

namespace std
{

# 108 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 3
  /**
   *  @brief Swaps the contents of two iterators.
   *  @ingroup mutating_algorithms
   *  @param  __a  An iterator.
   *  @param  __b  Another iterator.
   *  @return   Nothing.
   *
   *  This function swaps the values pointed to by two iterators, not the
   *  iterators themselves.
  */
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      // concept requirements
     

     
# 148 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 3
      swap(*__a, *__b);

    }

  /**
   *  @brief Swap the elements of two sequences.
   *  @ingroup mutating_algorithms
   *  @param  __first1  A forward iterator.
   *  @param  __last1   A forward iterator.
   *  @param  __first2  A forward iterator.
   *  @return   An iterator equal to @p first2+(last1-first1).
   *
   *  Swaps each element in the range @p [first1,last1) with the
   *  corresponding element in the range @p [first2,(last1-first1)).
   *  The ranges must not overlap.
  */
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {
      // concept requirements
     

     

      ;

      for (; __first1 != __last1; ++__first1, (void)++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }

  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @return   The lesser of the parameters.
   *
   *  This is the simple classic generic implementation.  It will work on
   *  temporary expressions, since they are only evaluated once, unlike a
   *  preprocessor macro.
  */
  template<typename _Tp>
    constexpr
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {
      // concept requirements
     
      //return __b < __a ? __b : __a;
      if (__b < __a)
 return __b;
      return __a;
    }

  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @return   The greater of the parameters.
   *
   *  This is the simple classic generic implementation.  It will work on
   *  temporary expressions, since they are only evaluated once, unlike a
   *  preprocessor macro.
  */
  template<typename _Tp>
    constexpr
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {
      // concept requirements
     
      //return  __a < __b ? __b : __a;
      if (__a < __b)
 return __b;
      return __a;
    }

  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @param  __comp  A @link comparison_functors comparison functor@endlink.
   *  @return   The lesser of the parameters.
   *
   *  This will work on temporary expressions, since they are only evaluated
   *  once, unlike a preprocessor macro.
  */
  template<typename _Tp, typename _Compare>
    constexpr
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      //return __comp(__b, __a) ? __b : __a;
      if (__comp(__b, __a))
 return __b;
      return __a;
    }

  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @param  __comp  A @link comparison_functors comparison functor@endlink.
   *  @return   The greater of the parameters.
   *
   *  This will work on temporary expressions, since they are only evaluated
   *  once, unlike a preprocessor macro.
  */
  template<typename _Tp, typename _Compare>
    constexpr
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      //return __comp(__a, __b) ? __b : __a;
      if (__comp(__a, __b))
 return __b;
      return __a;
    }

  // Fallback implementation of the function in bits/stl_iterator.h used to
  // remove the __normal_iterator wrapper. See copy, fill, ...
  template<typename _Iterator>
    inline _Iterator
    __niter_base(_Iterator __it)
    { return __it; }

  // All of these auxiliary structs serve two purposes.  (1) Replace
  // calls to copy with memmove whenever possible.  (Memmove, not memcpy,
  // because the input and output ranges are permitted to overlap.)
  // (2) If we're using random access iterators, then write the loop as
  // a for loop with an explicit count.

  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, (void)++__first)
     *__result = *__first;
   return __result;
 }
    };


  template<typename _Category>
    struct __copy_move<true, false, _Category>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, (void)++__first)
     *__result = std::move(*__first);
   return __result;
 }
    };


  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };


  template<>
    struct __copy_move<true, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = std::move(*__first);
       ++__first;
       ++__result;
     }
   return __result;
 }
    };


  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {

   using __assignable = conditional<_IsMove,
        is_move_assignable<_Tp>,
        is_copy_assignable<_Tp>>;
   // trivial types can have deleted assignment
   static_assert( __assignable::type::value, "type is not assignable" );

   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }

  // Helpers for streambuf iterators (either istream or ostream).
  // NB: avoid including <iosfwd>, relatively large.
  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }

  /**
   *  @brief Copies the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  __first  An input iterator.
   *  @param  __last   An input iterator.
   *  @param  __result An output iterator.
   *  @return   result + (first - last)
   *
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).  Result may not be contained within
   *  [first,last); the copy_backward function should be used instead.
   *
   *  Note that the end of the output range is permitted to be contained
   *  within [first,last).
  */
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {
      // concept requirements
     
     

      ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }


  /**
   *  @brief Moves the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  __first  An input iterator.
   *  @param  __last   An input iterator.
   *  @param  __result An output iterator.
   *  @return   result + (first - last)
   *
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).  Result may not be contained within
   *  [first,last); the move_backward function should be used instead.
   *
   *  Note that the end of the output range is permitted to be contained
   *  within [first,last).
  */
  template<typename _II, typename _OI>
    inline _OI
    move(_II __first, _II __last, _OI __result)
    {
      // concept requirements
     
     

      ;

      return std::__copy_move_a2<true>(std::__miter_base(__first),
           std::__miter_base(__last), __result);
    }






  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };


  template<typename _Category>
    struct __copy_move_backward<true, false, _Category>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = std::move(*--__last);
   return __result;
 }
    };


  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };


  template<>
    struct __copy_move_backward<true, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = std::move(*--__last);
   return __result;
 }
    };


  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {

   using __assignable = conditional<_IsMove,
        is_move_assignable<_Tp>,
        is_copy_assignable<_Tp>>;
   // trivial types can have deleted assignment
   static_assert( __assignable::type::value, "type is not assignable" );

   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }

  /**
   *  @brief Copies the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  __first  A bidirectional iterator.
   *  @param  __last   A bidirectional iterator.
   *  @param  __result A bidirectional iterator.
   *  @return   result - (first - last)
   *
   *  The function has the same effect as copy, but starts at the end of the
   *  range and works its way to the start, returning the start of the result.
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).
   *
   *  Result may not be in the range (first,last].  Use copy instead.  Note
   *  that the start of the output range may overlap [first,last).
  */
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      // concept requirements
     
     
     


      ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }


  /**
   *  @brief Moves the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  __first  A bidirectional iterator.
   *  @param  __last   A bidirectional iterator.
   *  @param  __result A bidirectional iterator.
   *  @return   result - (first - last)
   *
   *  The function has the same effect as move, but starts at the end of the
   *  range and works its way to the start, returning the start of the result.
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).
   *
   *  Result may not be in the range (first,last].  Use move instead.  Note
   *  that the start of the output range may overlap [first,last).
  */
  template<typename _BI1, typename _BI2>
    inline _BI2
    move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      // concept requirements
     
     
     


      ;

      return std::__copy_move_backward_a2<true>(std::__miter_base(__first),
      std::__miter_base(__last),
      __result);
    }






  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }

  // Specialization: for char types we can use memset.
  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      if (const size_t __len = __last - __first)
 __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
    }

  /**
   *  @brief Fills the range [first,last) with copies of value.
   *  @ingroup mutating_algorithms
   *  @param  __first  A forward iterator.
   *  @param  __last   A forward iterator.
   *  @param  __value  A reference-to-const of arbitrary type.
   *  @return   Nothing.
   *
   *  This function fills a range with copies of the same value.  For char
   *  types filling contiguous areas of memory, this becomes an inline call
   *  to @c memset or @c wmemset.
  */
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {
      // concept requirements
     

      ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }

  /**
   *  @brief Fills the range [first,first+n) with copies of value.
   *  @ingroup mutating_algorithms
   *  @param  __first  An output iterator.
   *  @param  __n      The count of copies to perform.
   *  @param  __value  A reference-to-const of arbitrary type.
   *  @return   The iterator at first+n.
   *
   *  This function fills a range with copies of the same value.  For char
   *  types filling contiguous areas of memory, this becomes an inline call
   *  to @c memset or @ wmemset.
   *
   *  _GLIBCXX_RESOLVE_LIB_DEFECTS
   *  DR 865. More algorithms that throw away information
  */
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {
      // concept requirements
     

      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, (void)++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   if (const size_t __len = (__last1 - __first1))
     return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
   return true;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = ((__is_integer<_ValueType1>::__value
         || __is_pointer<_ValueType1>::__value)
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }

  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<typename _II1, typename _II2, typename _Compare>
    bool
    __lexicographical_compare_impl(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2,
       _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, (void)++__first2)
 {
   if (__comp(__first1, __first2))
     return true;
   if (__comp(__first2, __first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 return std::__lexicographical_compare_impl(__first1, __last1,
         __first2, __last2,
     __gnu_cxx::__ops::__iter_less_iter());
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   if (const size_t __len = std::min(__len1, __len2))
     if (int __result = __builtin_memcmp(__first1, __first2, __len))
       return __result < 0;
   return __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    __lower_bound(_ForwardIterator __first, _ForwardIterator __last,
    const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;

      _DistanceType __len = std::distance(__first, __last);

      while (__len > 0)
 {
   _DistanceType __half = __len >> 1;
   _ForwardIterator __middle = __first;
   std::advance(__middle, __half);
   if (__comp(__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }

  /**
   *  @brief Finds the first position in which @a val could be inserted
   *         without changing the ordering.
   *  @param  __first   An iterator.
   *  @param  __last    Another iterator.
   *  @param  __val     The search term.
   *  @return         An iterator pointing to the first element <em>not less
   *                  than</em> @a val, or end() if every element is less than 
   *                  @a val.
   *  @ingroup binary_search_algorithms
  */
  template<typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      // concept requirements
     
     

      ;

      return std::__lower_bound(__first, __last, __val,
    __gnu_cxx::__ops::__iter_less_val());
    }

  /// This is a helper function for the sort routines and for random.tcc.
  //  Precondition: __n > 0.
  inline constexpr int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline constexpr unsigned
  __lg(unsigned __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline constexpr long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline constexpr unsigned long
  __lg(unsigned long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline constexpr long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

  inline constexpr unsigned long long
  __lg(unsigned long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }





  /**
   *  @brief Tests a range for element-wise equality.
   *  @ingroup non_mutating_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @return   A boolean true or false.
   *
   *  This compares the elements of two ranges using @c == and returns true or
   *  false depending on whether all of the corresponding elements of the
   *  ranges are equal.
  */
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      // concept requirements
     
     
     


      ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }

  /**
   *  @brief Tests a range for element-wise equality.
   *  @ingroup non_mutating_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @param __binary_pred A binary predicate @link functors
   *                  functor@endlink.
   *  @return         A boolean true or false.
   *
   *  This compares the elements of two ranges using the binary_pred
   *  parameter, and returns true or
   *  false depending on whether all of the corresponding elements of the
   *  ranges are equal.
  */
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {
      // concept requirements
     
     
      ;

      for (; __first1 != __last1; ++__first1, (void)++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }





  /**
   *  @brief Tests a range for element-wise equality.
   *  @ingroup non_mutating_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @param  __last2   An input iterator.
   *  @return   A boolean true or false.
   *
   *  This compares the elements of two ranges using @c == and returns true or
   *  false depending on whether all of the corresponding elements of the
   *  ranges are equal.
  */
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
    {
      // concept requirements
     
     
     


      ;
      ;

      using _RATag = random_access_iterator_tag;
      using _Cat1 = typename iterator_traits<_II1>::iterator_category;
      using _Cat2 = typename iterator_traits<_II2>::iterator_category;
      using _RAIters = __and_<is_same<_Cat1, _RATag>, is_same<_Cat2, _RATag>>;
      if (_RAIters())
 {
   auto __d1 = std::distance(__first1, __last1);
   auto __d2 = std::distance(__first2, __last2);
   if (__d1 != __d2)
     return false;
   return std::equal(__first1, __last1, __first2);
 }

      for (; __first1 != __last1 && __first2 != __last2;
   ++__first1, (void)++__first2)
 if (!(*__first1 == *__first2))
   return false;
      return __first1 == __last1 && __first2 == __last2;
    }

  /**
   *  @brief Tests a range for element-wise equality.
   *  @ingroup non_mutating_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @param  __last2   An input iterator.
   *  @param __binary_pred A binary predicate @link functors
   *                  functor@endlink.
   *  @return         A boolean true or false.
   *
   *  This compares the elements of two ranges using the binary_pred
   *  parameter, and returns true or
   *  false depending on whether all of the corresponding elements of the
   *  ranges are equal.
  */
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _IIter2 __last2, _BinaryPredicate __binary_pred)
    {
      // concept requirements
     
     
      ;
      ;

      using _RATag = random_access_iterator_tag;
      using _Cat1 = typename iterator_traits<_IIter1>::iterator_category;
      using _Cat2 = typename iterator_traits<_IIter2>::iterator_category;
      using _RAIters = __and_<is_same<_Cat1, _RATag>, is_same<_Cat2, _RATag>>;
      if (_RAIters())
 {
   auto __d1 = std::distance(__first1, __last1);
   auto __d2 = std::distance(__first2, __last2);
   if (__d1 != __d2)
     return false;
   return std::equal(__first1, __last1, __first2,
           __binary_pred);
 }

      for (; __first1 != __last1 && __first2 != __last2;
   ++__first1, (void)++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return __first1 == __last1 && __first2 == __last2;
    }


  /**
   *  @brief Performs @b dictionary comparison on ranges.
   *  @ingroup sorting_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @param  __last2   An input iterator.
   *  @return   A boolean true or false.
   *
   *  <em>Returns true if the sequence of elements defined by the range
   *  [first1,last1) is lexicographically less than the sequence of elements
   *  defined by the range [first2,last2).  Returns false otherwise.</em>
   *  (Quoted from [25.3.8]/1.)  If the iterators are all character pointers,
   *  then this is an inline call to @c memcmp.
  */
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {





     
     
     
     
      ;
      ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }

  /**
   *  @brief Performs @b dictionary comparison on ranges.
   *  @ingroup sorting_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @param  __last2   An input iterator.
   *  @param  __comp  A @link comparison_functors comparison functor@endlink.
   *  @return   A boolean true or false.
   *
   *  The same as the four-parameter @c lexicographical_compare, but uses the
   *  comp parameter instead of @c <.
  */
  template<typename _II1, typename _II2, typename _Compare>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      // concept requirements
     
     
      ;
      ;

      return std::__lexicographical_compare_impl
 (__first1, __last1, __first2, __last2,
  __gnu_cxx::__ops::__iter_comp_iter(__comp));
    }

  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __binary_pred(__first1, __first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

  /**
   *  @brief Finds the places in ranges which don't match.
   *  @ingroup non_mutating_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @return   A pair of iterators pointing to the first mismatch.
   *
   *  This compares the elements of two ranges using @c == and returns a pair
   *  of iterators.  The first iterator points into the first range, the
   *  second iterator points into the second range, and the elements pointed
   *  to by the iterators are not equal.
  */
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {
      // concept requirements
     
     
     


      ;

      return std::__mismatch(__first1, __last1, __first2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }

  /**
   *  @brief Finds the places in ranges which don't match.
   *  @ingroup non_mutating_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @param __binary_pred A binary predicate @link functors
   *         functor@endlink.
   *  @return   A pair of iterators pointing to the first mismatch.
   *
   *  This compares the elements of two ranges using the binary_pred
   *  parameter, and returns a pair
   *  of iterators.  The first iterator points into the first range, the
   *  second iterator points into the second range, and the elements pointed
   *  to by the iterators are not equal.
  */
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      // concept requirements
     
     
      ;

      return std::__mismatch(__first1, __last1, __first2,
 __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }



  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _InputIterator2 __last2,
        _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __first2 != __last2
      && __binary_pred(__first1, __first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

  /**
   *  @brief Finds the places in ranges which don't match.
   *  @ingroup non_mutating_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @param  __last2   An input iterator.
   *  @return   A pair of iterators pointing to the first mismatch.
   *
   *  This compares the elements of two ranges using @c == and returns a pair
   *  of iterators.  The first iterator points into the first range, the
   *  second iterator points into the second range, and the elements pointed
   *  to by the iterators are not equal.
  */
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2)
    {
      // concept requirements
     
     
     


      ;
      ;

      return std::__mismatch(__first1, __last1, __first2, __last2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }

  /**
   *  @brief Finds the places in ranges which don't match.
   *  @ingroup non_mutating_algorithms
   *  @param  __first1  An input iterator.
   *  @param  __last1   An input iterator.
   *  @param  __first2  An input iterator.
   *  @param  __last2   An input iterator.
   *  @param __binary_pred A binary predicate @link functors
   *         functor@endlink.
   *  @return   A pair of iterators pointing to the first mismatch.
   *
   *  This compares the elements of two ranges using the binary_pred
   *  parameter, and returns a pair
   *  of iterators.  The first iterator points into the first range, the
   *  second iterator points into the second range, and the elements pointed
   *  to by the iterators are not equal.
  */
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2,
      _BinaryPredicate __binary_pred)
    {
      // concept requirements
     
     
      ;
      ;

      return std::__mismatch(__first1, __last1, __first2, __last2,
        __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }



} // namespace std

// NB: This file is included within many other C++ includes, as a way
// of getting the base algorithms. So, make sure that parallel bits
// come in too if requested. 
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\char_traits.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\postypes.h" 1 3
// Position types -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/postypes.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */

//
// ISO C++ 14882: 27.4.1 - Types
// ISO C++ 14882: 27.4.3 - Template class fpos
//




       
# 39 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\postypes.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cwchar
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c wchar.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 21.4
//

       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 2 3


# 1 "c:\\vcast\\mingw\\include\\wchar.h" 1 3
/*
 * wchar.h
 *
 * Declarations relating to support for wide characters; many are simply
 * inherited by (sub-optimal) inclusion of other header files.
 *
 * $Id: wchar.h,v ec519c2a99b3 2017/01/28 16:20:51 keithmarshall $
 *
 * Unattributed original source.
 * Adapted by Rob Savoye <rob@cygnus.com>
 * Copyright (C) 1997, 1999-2009, 2011, 2015, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 36 "c:\\vcast\\mingw\\include\\wchar.h" 3

/* This header declares prototypes for wchar_t string functions, as are
 * prescribed by ISO-C, but which MSVC also expects, (in contravention of
 * ISO-C prescriptions), to find in <string.h>.  To accommodate this MSVC
 * anomaly, we make provision for <string.h> to include a selected subset
 * of <wchar.h>; thus, we do not immediately define _WCHAR_T...
 */

/* ...but defer it until we have confirmed that this is NOT inclusion for
 * only this subset of <wchar.h> declarations.
 */


/* All MinGW headers are required to include <_mingw.h>; in the case of
 * selective inclusion by <string.h>, we expect it to have already done
 * so, but since that doesn't apply here, we must do it ourselves.
 */
# 1 "c:\\vcast\\mingw\\include\\_mingw.h" 1 3

/*
 * _mingw.h
 *
 * MinGW specific macros included by ALL mingwrt include files; (this file
 * is part of the MinGW32 runtime library package).
 *
 * $Id: _mingw.h.in,v dab5f46101c7 2017/06/05 19:15:12 keithmarshall $
 *
 * Written by Mumit Khan  <khan@xraylith.wisc.edu>
 * Copyright (C) 1999, 2001-2011, 2014-2017, MinGW.org Project
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */


/* In previous versions, __MINGW32_VERSION was expressed as a dotted
 * numeric pair, representing major.minor; unfortunately, this doesn't
 * adapt well to the inclusion of a patch-level component, since the
 * major.minor.patch dotted triplet representation is not valid as a
 * numeric entity.  Thus, for this version, we adopt a representation
 * which encodes the version as a long integer value, expressing:
 *
 *   __MINGW32_VERSION = 1,000,000 * major + 1,000 * minor + patch
 *
 * DO NOT EDIT these package version assignments manually; they are
 * derived from the package version specification within configure.ac,
 * whence they are propagated automatically, at package build time.
 */






       
# 56 "c:\\vcast\\mingw\\include\\_mingw.h" 3



/* Legacy versions of mingwrt use the macro __MSVCRT_VERSION__ to
 * enable evolving features of different MSVCRT.DLL versions.  This
 * usage is no longer recommended, but the __MSVCRT_VERSION__ macro
 * remains useful when a non-freely distributable MSVCRxx.DLL is to
 * be substituted for MSVCRT.DLL; for such usage, the substitute
 * MSVCRxx.DLL may be identified as specified in...
 */
# 1 "c:\\vcast\\mingw\\include\\msvcrtver.h" 1 3
/*
 * msvcrtver.h
 *
 * Macros for identification of specific versions of MSVC runtime
 * libraries, which may be substituted for MSVCRT.DLL
 *
 * $Id: msvcrtver.h,v 6d8ad2c4dde7 2015/06/19 11:43:28 keithmarshall $
 *
 * Written by Keith Marshall <keithmarshall@users.sourceforge.net>
 * Copyright (C) 2015, MinGW.org Project
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */


       
# 36 "c:\\vcast\\mingw\\include\\msvcrtver.h" 3

/* When it is intended to link an application with any one of the
 * MSVC version specific MSVCRxx.DLL libraries, rather than with the
 * OS default MSVCRT.DLL, the particular substitute MSVCRxx.DLL may
 * be specified as any one of the following...
 */
# 53 "c:\\vcast\\mingw\\include\\msvcrtver.h" 3
/* This may be set, when the intent is to link with any of the above
 * non-freely distributable MSVCRxx.DLL libraries, rather than with the
 * pseudo-free MSVCRT.DLL provided as an OS component.  High byte is the
 * major version number, low byte is the minor; however, users are advised
 * to use custom GCC specs files to set this, while also substituting the
 * appropriate library in place of MSVCRT.DLL, rather than to simply set
 * it directly.
 *
 * It should be noted that __MSVCRT_VERSION__ is NOT a good indicator of
 * evolving MSVCRT.DLL features; that is better accomplished by using the
 * NTDDI_VERSION setting from the Windows API.  Thus, users of MSVCRT.DLL
 * should NOT set __MSVCRT_VERSION__, leaving us to establish a default,
 * equivalent to MSVCR60.DLL, which seems reasonably well aligned with
 * the feature set of the earliest MSVCRT.DLL version we support.
 */



/* This is an exception to the normal rule, that all mingwrt system
 * header files should include _mingw.h, since inclusion of _mingw.h
 * itself will cause this file to be included.  Thus, we recommend
 * that this file should not be included directly, but we do not
 * forbid doing so; however, in this event...
 */
# 67 "c:\\vcast\\mingw\\include\\_mingw.h" 2 3


/* A better inference than __MSVCRT_VERSION__, of the capabilities
 * supported by the operating system default MSVCRT.DLL, is provided
 * by the Windows API version identification macros.
 */
# 1 "c:\\vcast\\mingw\\include\\w32api.h" 1 3
/*
 * w32api.h
 *
 * Package version identification, operating system support level set up,
 * and "convenience" macros to be shared by all package header files.
 *
 * $Id: w32api.h.in,v 0bd67cc9bc86 2017/03/20 20:01:38 keithmarshall $
 *
 * Written by Earnie Boyd  <earnie@users.sourceforge.net>
 * Copyright (C) 2001-2011, 2015, 2016, MinGW.org Project
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */


       
# 36 "c:\\vcast\\mingw\\include\\w32api.h" 3

/* Package version identification: formerly specified as a simple
 * dotted numeric pair representing major.minor, this doesn't adapt
 * well to the inclusion of the patch-level, since the dotted triplet
 * representation of major.minor.patch is not a valid representation
 * of a numeric entity.  Thus, from version 3.18 onwards we adopt a
 * representation which encodes the version as a long integer value,
 * expressing:
 *
 *   __W32API_VERSION = 1,000,000 * major + 1,000 * minor + patch
 *
 * DO NOT EDIT these package version assignments manually; they are
 * derived from the package version specification within configure.ac,
 * whence they are propagated automatically, at package build time.
 */





/* The underlying operating system platform version, and its
 * identifying macros for application support, are established by:
 */
# 1 "c:\\vcast\\mingw\\include\\sdkddkver.h" 1 3
/*
 * sdkddkver.h
 *
 * Macros to set up the compilation environment, such that it provides
 * support for a user specified host OS version, (default Win2K).
 *
 * $Id: sdkddkver.h,v d7ac2ac748a9 2016/11/25 21:29:02 keithmarshall $
 *
 * Written by Earnie Boyd  <earnie@users.sourceforge.net>
 * Copyright (C) 2012, 2013, 2015, MinGW.org Project
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */


       
# 36 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3

/* Define masks for extracting version components from NTDDI_VERSION;
 * values and names are guessed based on comments in the documentation; see
 * http://msdn.microsoft.com/en-us/library/windows/desktop/aa383745(v=vs.85).aspx
 */




/* Macros to facilitate such extraction; derived from comments on MSDN or
 * on social.microsoft.com
 */





/* Macros to construct a minimal NTDDI_VERSION from a _WIN32_WINNT value.
 */



/* Version constants specifying _WIN32_WINNT versions; these are defined at
 * http://msdn.microsoft.com/en-us/library/windows/desktop/aa383745(v=vs.85).aspx
 * (values for legacy platforms have been inferred from historical knowledge).
 */
# 79 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3
/* Version constants specifying Internet Explorer versions; also defined at
 * http://msdn.microsoft.com/en-us/library/windows/desktop/aa383745(v=vs.85).aspx
 */
# 98 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3
/* Version constants specifying NTDDI_VERSION; these are also defined at
 * http://msdn.microsoft.com/en-us/library/windows/desktop/aa383745(v=vs.85).aspx
 */
# 147 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3
/* Although NTDDI_VERSION is now the preferred designator for the
 * level of support required from the operating system, legacy code
 * is likely to have specified WINVER, from which _WIN32_WINNT may
 * be inferred.
 */
# 163 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3
/* Stipulate defaults; check consistency of any user specified overrides.
 */
# 204 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3
/* Map GCC architecture identification macros to their MSVC equivalents.
 * This mapping was previously specified in <winnt.h>, and duplicated in
 * <windows.h>; it is now only defined here, because both <windows.h> and
 * <winnt.h> must include this file anyway, and the potentially error prone
 * burden of maintaining duplicates is as unnecessary as it is undesirable.
 */

 /* Note that we must process the _M_IX86 equivalent macros in diminishing
  * order of processor version, since GCC defines __i386__ as identification
  * for the X86 processor family, in addition to any one of the other three
  * macros, which may be used to identify a particular processor version.
  */
# 230 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3
/* The preceding logic may have established the host type as X86, or it
 * may have done nothing at all; we must check further.
 */

 /* We've established that we ARE compiling for an X86 host; any MinGW32
  * compiler SHOULD have set this for us already...
  */
# 245 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3
  /* MSVC defines this, to provide additional information about particular
   * capabilties of the X86 host environment; specifically...
   */
# 260 "c:\\vcast\\mingw\\include\\sdkddkver.h" 3
   /* ...and this disallows its use, entirely.
    */




/* When not compiling for an X86 host; check mapping from other possible
 * GCC architecture identifiers, to their MSVC equivalents.
 */
# 60 "c:\\vcast\\mingw\\include\\w32api.h" 2 3

/* The following defines are for documentation purposes.  Although not used
 * within it, they were provided in earlier versions of the Win32 API, as a
 * convenience for users who wished to symbolically declare a minimum level
 * of required operating system and Internet Explorer version support, when
 * assigning WINVER, _WIN32_WINDOWS, _WIN32_WINNT, and _WIN32_IE values.
 *
 * Each of the following "old name" macros is now considered deprecated in
 * favour of manifest "preferred name" macro definitions from <sdkddkver.h>.
 * Hence, redefine each in terms of the appropriate "preferred name" macro;
 * new code should avoid the old names, and use the preferred name instead.
 *
 *
 * _WIN32_WINDOWS and/or WINVER may be set to any of the following manifest
 * values, to specify a minimum Win9x support level requirement:
 *
 *      Old Name	Preferred Name
 *      -------------	------------------
 */




/* _WIN32_WINNT and/or WINVER may be set to any of the following manifest
 * values, to specify a minimum WinNT support level requirement:
 *
 *      Old Name	Preferred Name
 *      -------------	------------------
 */






/* _WIN32_IE may be set to any of the following manifest values, to
 * specify a minimum Internet Explorer support level requirement:
 *
 *      Old Name	Preferred Name
 *      -------------	------------------
 */
# 118 "c:\\vcast\\mingw\\include\\w32api.h" 3
/* Only Microsoft could attempt to justify this insanity: when building
 * a UTF-16LE application -- apparently their understanding of Unicode is
 * limited to this -- the C/C++ runtime requires that the user must define
 * the _UNICODE macro, while to use the Windows API's UTF-16LE capabilities,
 * it is the UNICODE macro, (without the leading underscore), which must be
 * defined.  The (bogus) explanation appears to be that it is the C standard
 * which dictates the requirement for the leading underscore, to avoid any
 * possible conflict with a user defined symbol; (bogus because the macro
 * must be user defined anyway -- it is not a private symbol -- and in
 * any case, the Windows API already reserves the UNICODE symbol as
 * a user defined macro, with equivalent intent.
 *
 * The real explanation, of course, is that this is just another example
 * of Microsoft irrationality; in any event, there seems to be no sane
 * scenario in which defining one without the other would be required,
 * or indeed would not raise potential for internal inconsistency, so we
 * ensure that either both are, or neither is defined.
 */





/* Related to the UNICODE macro definition, there are many functions in
 * the Win32 API with a generic name, which is mapped to a variant with
 * wchar_t UTF-16LE encoding of string arguments, in cases when UNICODE
 * is defined, as facilitated by the following macro...
 */





 /* ...or by appending an "A" suffix, to select an ANSI variant with
  * char encoding of string arguments, when UNICODE is not defined.
  */


/* Further related, the __AW_EXTENDED__ macro reproduces the effect of
 * __AW_SUFFIXED__, with the addition of a single underscore character
 * separating the base name from the appropriate suffix.
 */


/* __AW_EXTENDED__ may often be used to map manifest string constants.
 * The following triplet provide a convenient mechanism to derive the
 * UNICODE variant of the string from its ANSI definition; (note that
 * this requires a two stage expansion, to ensure that the "L" prefix
 * is attached to the expansion of the ANSI string definition, rather
 * than just to the defining macro name).
 */




/* Further uses of __AW_SUFFIXED__ and __AW_EXTENDED__, encapsulated
 * within __AW_ALIAS__ and __AW_ALIAS_EX__; each provides a convenient
 * generic mapping for type names with alternative representations for
 * UNICODE and non-UNICODE usage.
 */




/* When compiling C++ code, these macros provide a convenient notation
 * for designating those sections of system header files which declare
 * prototypes for API functions with "C" binding...
 */
# 74 "c:\\vcast\\mingw\\include\\_mingw.h" 2 3

/* The following are defined by the user (or by the compiler), to specify how
 * identifiers are imported from a DLL.  All headers should include this first,
 * and then use __DECLSPEC_SUPPORTED to choose between the old ``__imp__name''
 * style or the __MINGW_IMPORT style for declarations.
 *
 * __DECLSPEC_SUPPORTED            Defined if dllimport attribute is supported.
 * __MINGW_IMPORT                  The attribute definition to specify imported
 *                                 variables/functions.
 * _CRTIMP                         As above.  For MS compatibility.
 *
 * Macros to enable MinGW features which deviate from standard MSVC
 * compatible behaviour; these may be specified directly in user code,
 * activated implicitly, (e.g. by specifying _POSIX_C_SOURCE or such),
 * or by inclusion in __MINGW_FEATURES__:
 *
 * __USE_MINGW_ANSI_STDIO          Select a more ANSI C99 compatible
 *                                 implementation of printf() and friends;
 *                                 (users should not set this directly).
 *
 * Other macros:
 *
 * __int64                         define to be long long.  Using a typedef
 *                                 doesn't work for "unsigned __int64"
 *
 *
 * Manifest definitions for flags to control globbing of the command line
 * during application start up, (before main() is called).  The first pair,
 * when assigned as bit flags within _CRT_glob, select the globbing algorithm
 * to be used; (the MINGW algorithm overrides MSCVRT, if both are specified).
 * Prior to mingwrt-3.21, only the MSVCRT option was supported; this choice
 * may produce different results, depending on which particular version of
 * MSVCRT.DLL is in use; (in recent versions, it seems to have become
 * definitively broken, when globbing within double quotes).
 */


/* From mingwrt-3.21 onward, this should be the preferred choice; it will
 * produce consistent results, regardless of the MSVCRT.DLL version in use.
 */


/* When the __CRT_GLOB_USE_MINGW__ flag is set, within _CRT_glob, the
 * following additional options are also available; they are not enabled
 * by default, but the user may elect to enable any combination of them,
 * by setting _CRT_glob to the boolean sum (i.e. logical OR combination)
 * of __CRT_GLOB_USE_MINGW__ and the desired options.
 *
 *    __CRT_GLOB_USE_SINGLE_QUOTE__	allows use of single (apostrophe)
 *    					quoting characters, analogously to
 *    					POSIX usage, as an alternative to
 *    					double quotes, for collection of
 *    					arguments separated by white space
 *    					into a single logical argument.
 *
 *    __CRT_GLOB_BRACKET_GROUPS__	enable interpretation of bracketed
 *    					character groups as POSIX compatible
 *    					globbing patterns, matching any one
 *    					character which is either included
 *    					in, or excluded from the group.
 *
 * The following options, which may also be specified within _CRT_glob,
 * are specified in terms of their glob() flags, as defined in <glob.h>
 *
 *    GLOB_CASEMATCH			enable case sensitive matching for
 *    					globbing patterns; this is default
 *    					behaviour for POSIX, but because of
 *    					the case insensitive nature of the
 *    					MS-Windows file system, it is more
 *    					appropriate to use case insensitive
 *    					globbing as the MinGW default.
 *
 *    GLOB_BRACE			enable expansion of GNU style brace
 *    					delimited expression groups within
 *    					the globbing pattern.
 *
 */



/* The MinGW globbing algorithm uses the ASCII DEL control code as a marker
 * for globbing characters which were embedded within quoted arguments; (the
 * quotes are stripped away BEFORE the argument is globbed; the globbing code
 * treats the marked character as immutable, and strips out the DEL markers,
 * before storing the resultant argument).  The DEL code is mapped to this
 * function here; DO NOT change it, without rebuilding the runtime.
 */



/* Manifest definitions identifying the flag bits, controlling activation
 * of MinGW features, as specified by the user in __MINGW_FEATURES__.
 */

/*
 * The following three are not yet formally supported; they are
 * included here, to document anticipated future usage.
 */





/* Try to avoid problems with outdated checks for GCC __attribute__ support.
 */
# 223 "c:\\vcast\\mingw\\include\\_mingw.h" 3
   /* Note the extern. This is needed to work around GCC's
      limitations in handling dllimport attribute.  */
# 242 "c:\\vcast\\mingw\\include\\_mingw.h" 3
/*
 * The next two defines can cause problems if user code adds the
 * __cdecl attribute like so:
 * void __attribute__ ((__cdecl)) foo(void);
 */
# 301 "c:\\vcast\\mingw\\include\\_mingw.h" 3
  /* A special form of __CRT_INLINE is provided; it will ALWAYS request
   * inlining when possible.  Originally specified as _CRTALIAS, this is
   * now deprecated in favour of __CRT_ALIAS, for syntactic consistency
   * with __CRT_INLINE itself.
   */






/*
 * Each function which is implemented as a __CRT_ALIAS should also be
 * accompanied by an externally visible interface.  The following pair
 * of macros provide a mechanism for implementing this, either as a stub
 * redirecting to an alternative external function, or by compilation of
 * the normally inlined code into free standing object code; each macro
 * provides a way for us to offer arbitrary hints for use by the build
 * system, while remaining transparent to the compiler.
 */
# 350 "c:\\vcast\\mingw\\include\\_mingw.h" 3
/* Attribute `nonnull' was valid as of gcc 3.3.  We don't use GCC's
   variadiac macro facility, because variadic macros cause syntax
   errors with  --traditional-cpp.  */
# 372 "c:\\vcast\\mingw\\include\\_mingw.h" 3
/* TODO: Mark (almost) all CRT functions as __MINGW_NOTHROW.  This will
allow GCC to optimize away some EH unwind code, at least in DW2 case.  */

/* Activation of MinGW specific extended features:
 */

/* Users should not set this directly; rather, define one (or more)
 * of the feature test macros (tabulated below), or specify any of the
 * compiler's command line options, (e.g. -posix, -ansi, or -std=c...),
 * which cause _POSIX_SOURCE, or __STRICT_ANSI__ to be defined.
 *
 * We must check this BEFORE we specifiy any implicit _POSIX_C_SOURCE,
 * otherwise we would always implicitly choose __USE_MINGW_ANSI_STDIO,
 * even if none of these selectors are specified explicitly...
 */
# 398 "c:\\vcast\\mingw\\include\\_mingw.h" 3
   /* otherwise use whatever __MINGW_FEATURES__ specifies...
    */




/* Some applications may define _XOPEN_SOURCE, without assigning any
 * value to it.  Such usage may have been permitted in early SUS, but
 * it became obsolete as of SUSv2.  Attempt to detect obsolete usage,
 * as it makes an effective evaluation of any _XOPEN_SOURCE version
 * dependency difficult, (without the use of ugly kludges at EVERY
 * point of reference which attempts a version comparison).
 */
# 430 "c:\\vcast\\mingw\\include\\_mingw.h" 3
 /* Users may define this, either directly or indirectly, to explicitly
  * enable a particular level of visibility for the subset of those POSIX
  * features which are supported by MinGW; (notice that this offers no
  * guarantee that any particular POSIX feature will be supported).
  */
# 456 "c:\\vcast\\mingw\\include\\_mingw.h" 3
  /*
   * No explicit level of support has been specified; implicitly grant
   * the most comprehensive level to any compilation unit which requests
   * either GNU or BSD feature support, or does not seek to be strictly
   * ANSI-C compliant.
   */



   /* For this default case, unless it has already been specified
    * otherwise, we enable some GNU glibc extensions, which may be
    * considered as violations of strict POSIX.1 conformance.
    */
# 482 "c:\\vcast\\mingw\\include\\_mingw.h" 3
 /* libmingwex.a provides free-standing implementations for many of the
  * functions which were introduced in C99; MinGW headers do not expose
  * prototypes for these, unless this feature test macro is defined, by
  * the user, or implied by other standards.  We will use a bit-mapped
  * representation, comprising the bit-wise sum of:
  *
  *   0x08  user declared
  *   0x04  required by C compiler, supporting ISO-C99
  *   0x02  required by C++ compiler, supporting ISO-C++11
  *   0x01  required to support recent POSIX.1 features
  *
  * to ensure that we can identify the reason for implicit declaration,
  * (in the event that we may need to discriminate).
  */
# 504 "c:\\vcast\\mingw\\include\\_mingw.h" 3
  /* C++11 also incorporates many (if not all) of the ISO-C99 features,
   * which we have guarded by _ISOC99_SOURCE; enable such features, to
   * the required extent, (which is likely also sufficient to support
   * any POSIX.1 dependencies).
   */
# 539 "c:\\vcast\\mingw\\include\\_mingw.h" 3
 /* Enable mingw32 extensions by default, except when __STRICT_ANSI__
  * conformity mode has been enabled.
  */
# 54 "c:\\vcast\\mingw\\include\\wchar.h" 2 3


 /* MSDN says that isw* char classifications appear in both <wchar.h>,
  * and in <wctype.h>.  Although these <wctype.h> classifications are as
  * prescribed by ISO-C, their exposure in <wchar.h> is not; nonetheless,
  * we replicate them here, for MSDN conformity.
  */
# 1 "c:\\vcast\\mingw\\include\\wctype.h" 1 3
/*
 * wctype.h
 *
 * Functions for wide character classification and conversion.
 *
 * $Id: wctype.h,v 6895efd6bc57 2017/01/29 10:09:49 keithmarshall $
 *
 * Written by Mumit Khan <khan@xraylith.wisc.edu>
 * Copyright (C) 1999-2003, 2005-2007, 2016, 2017, MinGW.org Project
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 34 "c:\\vcast\\mingw\\include\\wctype.h" 3


/* Perversely, (since they provide <wctype.h> themselves), Microsoft
 * say that most of the definitions and declarations which follow are
 * provided by <ctype.h>, rather than here; (this conflicts with both
 * ISO-C and POSIX).  We prefer to provide them here, for ISO-C/POSIX
 * conformance, while also exposing them for selective inclusion by
 * <ctype.h>, to maintain Microsoft compatibility.
 *
 * We define the <wctype.h> multiple inclusion guard macro only when
 * <wctype.h> is included directly, NOT when included via <ctype.h>
 */


/* All MinGW headers must include <_mingw.h>; when sourced by <ctype.h>,
 * we may delegate that responsibility to it, but in the case of direct
 * inclusion, we must address it ourselves.
 */



/* The following flags are used to tell iswctype() and _isctype() what
 * character classes are to be matched; (note that _BLANK will match for
 * SP and non-ASCII horizontal space chars -- e.g. for "no-break space",
 * 0xA0, in CP1250 -- but NOT for HT).
 *
 * These are defined such that they will be made visible by inclusion
 * of either <wctype.h> (this file), or <ctype.h>:
 */
# 75 "c:\\vcast\\mingw\\include\\wctype.h" 3
/* ISO-C and POSIX specify that <wctype.h> must define wint_t, wctype_t,
 * and the WEOF macro, (which also requires wchar_t), as they are defined
 * in <wchar.h>; since <wchar.h> gets wint_t, (and wchar_t), from <stddef.h>,
 * we do likewise here.  Furthermore, to maintain Microsoft compatibility,
 * we must also do this on behalf of <ctype.h>; however...
 */

/* ...we need not incur the overhead of doing it twice, when both <ctype.h>
 * and <wctype.h> have been included.
 */


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 283 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 310 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 357 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef short unsigned int wint_t;




/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 88 "c:\\vcast\\mingw\\include\\wctype.h" 2 3

typedef wchar_t wctype_t;


extern "C" {

/* Wide character classification functions.  In typically perverse
 * fashion, and contrary to both ISO-C and POSIX, Microsoft specify
 * that these should be declared in <ctype.h>; thus, to accommodate
 * this persersity, we make them visible here, irrespective of any
 * selective inclusion filter macro.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswalnum (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswalpha (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswascii (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswcntrl (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswctype (wint_t, wctype_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswdigit (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswgraph (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswlower (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswprint (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswpunct (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswspace (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswupper (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswxdigit (wint_t);

__attribute__((__deprecated__))
/* This function is exported by all versions of MSVCRT.DLL, (up to and
 * including that in Windows-7), and in all non-free counterparts up to
 * and including MSVCR120.DLL, but as of MSVC-2013, Microsoft declare
 * it to be obsolete.  DO NOT USE IT!  Use iswctype() instead.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int is_wctype (wint_t, wctype_t);


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iswblank (wint_t);


/* Wide character case transliteration functions; the following conform
 * to the ISO-C and POSIX standard declarations; Microsoft, at one time,
 * specified both as taking a wchar_t argument, and returning a wchar_t
 * result, but now take a wint_t argument, and return int.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towlower (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towupper (wint_t);
# 182 "c:\\vcast\\mingw\\include\\wctype.h" 3
}




/* Although Microsoft make most of the content, which ISO-C and POSIX say
 * should be in <wctype.h>, available through <ctype.h>, the declarations
 * in this section are exclusive to <wctype.h>
 */
typedef wchar_t wctrans_t;

extern "C" {

/* These are provided in libmingwex.a.  Note, that they are also exported
 * by the MS C++ runtime lib (MSVCP60.DLL).  The MSVCP60.DLL implementations
 * of wctrans and towctrans are not C99 compliant in that wctrans("tolower")
 * returns 0, while C99 specifies that a non-zero value should be returned
 * for a valid string descriptor.  If you want the MS behaviour (and you
 * have MSVCP60.DLL in your path) add -lmsvcp60 to your command line.
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t towctrans (wint_t, wctrans_t);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wctrans_t wctrans (const char*);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wctype_t wctype (const char*);

}
# 62 "c:\\vcast\\mingw\\include\\wchar.h" 2 3

 /* This is also necessary, to support the non-ANSI wchar.h declarations
  * which MSDN identifies as being provided here.
  */
# 1 "c:\\vcast\\mingw\\include\\sys\\types.h" 1 3
/*
 * sys/types.h
 *
 * Definitions of (primarily POSIX) system data types.
 *
 * $Id: types.h,v 6ceeab058f30 2016/10/13 20:03:56 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-1999, 2001, 2003, 2004, 2008, 2011, 2014-2016,
 *   MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\sys\\types.h" 3

/* All the headers include this file.
 */


/* Duplicates of some type definitions from here are also to be
 * provided by other system headers; use __need_TYPENAME selector
 * macros to make them selectively visible...
 */


 /*
  * ...and define the multiple inclusion guard macro for this
  * header, ONLY IF no such selector macro is defined.
  */




/* First handle those typedefs which POSIX requires us to be able
 * to expose selectively, via other system headers.
 */


 /* We base this on an implementation specific private typedef,
  * analogous to our __off64_t (defined below)...
  */
  typedef long __off32_t;

 /* The POSIX off_t typedef is uglified, by Microsoft, as _off_t;
  * ensure that we provide support for the Microsoft form...
  */
  typedef __off32_t _off_t;


  /* ...but note that this form should ALWAYS be preferred when
   * compiling POSIX compatible source code, and should also be
   * made generally available unless Microsoft's old names have
   * been suppressed, (by defining _NO_OLDNAMES).
   */
  typedef _off_t off_t;
# 88 "c:\\vcast\\mingw\\include\\sys\\types.h" 3
 /* This is neither an ISO-C standard type, nor even a POSIX
  * standard type; keep it runtime implementation specific.
  */
  typedef long long __off64_t;


  /* GCC itself, (specifically libgfortran.a), gratuitously
   * assumes that non-standard type off64_t is defined; make
   * it so, pending upstream correction.
   */
  typedef __off64_t off64_t;
# 112 "c:\\vcast\\mingw\\include\\sys\\types.h" 3
 /* POSIX ssize_t typedef, uglified by Microsoft as _ssize_t; ensure
  * that we support the Microsoft form...
  */
  typedef int _ssize_t;


  /* ...but note that this form should ALWAYS be preferred when
   * compiling POSIX compatible source code, and should also be
   * made generally available unless Microsoft's old names have
   * been suppressed, (by defining _NO_OLDNAMES).
   */
  typedef _ssize_t ssize_t;
# 136 "c:\\vcast\\mingw\\include\\sys\\types.h" 3
 /* Current versions of MSVC define time_t ambiguously, in terms of
  * one of the following unambiguous internal types:
  */
  typedef long __time32_t; /* unambiguous 32-bit time_t */
  typedef long long __time64_t; /* unambiguous 64-bit time_t */


  /* From MSVCR80.DLL onwards, Microsoft have royally messed up the
   * definition of time_t; maintain POSIX consistency, (as MSVCRT.DLL
   * itself does), unless the user is explicitly using one of these
   * brain damaged DLL variants, and has not elected to retain the
   * 32-bit time_t representation.
   */
   typedef __time32_t time_t;







  /* Assume any compiler which is not GCC-4.x or newer may require
   * guarding against repeated time_t typedefs.
   */






/* This is normal <sys/types.h> inclusion, i.e. for its own sake.
 *
 * A small subset of the required type definitions are actually
 * furnished by <stddef.h>; get them by selective inclusion...
 */



# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 149 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 160 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 216 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 175 "c:\\vcast\\mingw\\include\\sys\\types.h" 2 3

/* Today, Microsoft generally prefers to prefix POSIX type names
 * with an ugly initial underscore; ensure that we provide support
 * for this ungainly practice.
 */

 /* Additionally, note that _dev_t is a special case, requiring
  * this definition when linking with MSVCRT.DLL...
  */
typedef unsigned int _dev_t;







 /* ...while the remaining type names have consistent definitions,
  * regardless of any particular DLL association.
  */
typedef short _ino_t;
typedef unsigned short _mode_t;
typedef int _pid_t;
typedef int _sigset_t;

/* Users who value portability should prefer...
 */

 /* ...the standard POSIX type names, (which are consistent with
  * earlier Microsoft naming practice, and are also historically
  * exposed by MinGW, except when _NO_OLDNAMES is defined).
  */
typedef _dev_t dev_t;
typedef _ino_t ino_t;
typedef _mode_t mode_t;
typedef _pid_t pid_t;
typedef _sigset_t sigset_t;


typedef long long fpos64_t;


/* useconds_t is an obsolete POSIX data type; we continue to define
 * it here, for backward compatibility, but we flag it as deprecated,
 * due to its obsolete status.
 */
typedef unsigned long useconds_t __attribute__((__deprecated__));
# 67 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
# 77 "c:\\vcast\\mingw\\include\\wchar.h" 3
/* ISO-C, POSIX, and Microsoft specify an overlap of content between
 * <wchar.h> and other system header files; by inclusion of such other
 * headers within this "__WCHAR_H_SOURCED__" scope, we may selectively
 * retrieve the overlapping content, without requiring duplication of
 * that content here; thus, from...
 */
# 1 "c:\\vcast\\mingw\\include\\stdio.h" 1 3
/*
 * stdio.h
 *
 * Definitions of types and prototypes of functions for operations on
 * standard input and standard output streams.
 *
 * $Id: stdio.h,v cfaff99b541a 2017/05/24 22:11:33 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2005, 2007-2010, 2014-2017, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * NOTE: The file manipulation functions provided by Microsoft seem to
 * work with either slash (/) or backslash (\) as the directory separator;
 * (this is consistent with Microsoft's own documentation, on MSDN).
 *
 */

       
# 39 "c:\\vcast\\mingw\\include\\stdio.h" 3

/* When including <wchar.h>, some of the definitions and declarations
 * which are nominally provided in <stdio.h> must be duplicated.  Rather
 * than require duplicated maintenance effort, we provide for partial
 * inclusion of <stdio.h> by <wchar.h>; only when not included in
 * this partial fashion...
 */
# 54 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* All the headers include this file.
 */



/* POSIX stipulates that the following set of types, (as identified by
 * __need_TYPENAME macros), shall be defined consistently with <stddef.h>;
 * by defining the appropriate __need_TYPENAME macros, we may selectively
 * obtain the required definitions by inclusion of <stddef.h>, WITHOUT
 * automatic exposure of any of its additional content.
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 70 "c:\\vcast\\mingw\\include\\stdio.h" 2 3


 /* Similarly, for types defined in <sys/types.h>, (which are explicitly
  * dependent on the POSIX.1-2008 feature test)...
  */





 /* ...while this is required to support our fseeko64() and ftello64()
  * implementations, (neither of which is in any way standardized)...
  */


/* It is sufficient to test for just one define from each of the two
 * preceding groups...
 */

 /* ...to identify a requirement for selective inclusion of one or more
  * of these type definitions from "sys/types.h"; (note that we use the
  * #include "..." form here, to ensure that we get the correct header
  * file, relative to the location of this <stdio.h>).
  */
# 1 "c:\\vcast\\mingw\\include\\sys/types.h" 1 3
/*
 * sys/types.h
 *
 * Definitions of (primarily POSIX) system data types.
 *
 * $Id: types.h,v 6ceeab058f30 2016/10/13 20:03:56 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-1999, 2001, 2003, 2004, 2008, 2011, 2014-2016,
 *   MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
# 95 "c:\\vcast\\mingw\\include\\stdio.h" 2 3



 /* Also similarly, for the va_list type, defined in "stdarg.h"
  */


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 1 3 4
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 103 "c:\\vcast\\mingw\\include\\stdio.h" 2 3
# 130 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* The maximum length of a file name.  It may be better to use the Windows'
 * GetVolumeInformation() function in preference to this constant, but hey,
 * this works!  Note that <io.h> also defines it, but we don't guard it, so
 * that the compiler has a chance to catch inconsistencies.
 *
 * FIXME: Right now, we define this unconditionally for both full <stdio.h>
 * inclusion, and for partial inclusion on behalf of <wchar.h>, (which needs
 * it for some non-ANSI structure declarations).  The conditions under which
 * <wchar.h> needs this require review, because defining it as a consequence
 * of including <wchar.h> alone may violate strict ANSI conformity.
 */
# 200 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* The structure underlying the FILE type; this should be defined when
 * including either <stdio.h> or <wchar.h>.  If both header include guards
 * are now in place, then we must currently be including <stdio.h> in its
 * own right, having already processed this block during a prior partial
 * inclusion by <wchar.h>; there is no need to process it a second time.
 *
 * Some believe that nobody in their right mind should make use of the
 * internals of this structure. Provided by Pedro A. Aranda Gutiirrez
 * <paag@tid.es>.
 */
typedef struct _iobuf
{
  char *_ptr;
  int _cnt;
  char *_base;
  int _flag;
  int _file;
  int _charbuf;
  int _bufsiz;
  char *_tmpfname;
} FILE;
# 250 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* ...because, we need this regardless of the inclusion mode...
 */
extern "C" {
# 952 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* The following are declared when including either <stdio.h> or <wchar.h>.
 * If both header include guards are now in place, then we must currently be
 * including <stdio.h> in its own right, having already processed this block
 * during prior partial inclusion by <wchar.h>; there is no need to process
 * it a second time.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwprintf (FILE *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wprintf (const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vfwprintf (FILE *, const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vwprintf (const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _snwprintf (wchar_t *, size_t, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vscwprintf (const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vsnwprintf (wchar_t *, size_t, const wchar_t *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwscanf (FILE *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wscanf (const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int swscanf (const wchar_t *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fgetwc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fputwc (wchar_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t ungetwc (wchar_t, FILE *);


/* These differ from the ISO C prototypes, which have a maxlen parameter (like snprintf).
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int swprintf (wchar_t *, const wchar_t *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vswprintf (wchar_t *, const wchar_t *, __builtin_va_list);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * fgetws (wchar_t *, int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputws (const wchar_t *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t getwc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t getwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t putwc (wint_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t putwchar (wint_t);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _getws (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putws (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfdopen(int, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfopen (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfreopen (const wchar_t *, const wchar_t *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wfsopen (const wchar_t *, const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _wtmpnam (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t * _wtempnam (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wrename (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wremove (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _wperror (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _wpopen (const wchar_t *, const wchar_t *);






__attribute__((__cdecl__)) __attribute__((__nothrow__)) int snwprintf (wchar_t *, size_t, const wchar_t *, ...);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int vsnwprintf (wchar_t *, size_t, const wchar_t *, __builtin_va_list);
# 1016 "c:\\vcast\\mingw\\include\\stdio.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int vwscanf (const wchar_t *__restrict__, __builtin_va_list);
__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vfwscanf (FILE *__restrict__, const wchar_t *__restrict__, __builtin_va_list);
__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vswscanf (const wchar_t *__restrict__, const wchar_t * __restrict__, __builtin_va_list);
# 1048 "c:\\vcast\\mingw\\include\\stdio.h" 3
}
# 84 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
/* ...we obtain (possibly indirect) definitions and declarations for:
 *
 *  macros  NULL, FILENAME_MAX
 *  types   size_t, wchar_t, wint_t, va_list (a.k.a. __VALIST), FILE
 *  types   ssize_t, off_t, __off64_t, (conditionally, as needed)
 *
 *  int     fwprintf (FILE *, const wchar_t *, ...);
 *  int     wprintf (const wchar_t *, ...);
 *  int     vfwprintf (FILE *, const wchar_t *, __VALIST);
 *  int     vwprintf (const wchar_t *, __VALIST);
 *  int     snwprintf (wchar_t *, size_t, const wchar_t *, ...);
 *  int    _snwprintf (wchar_t *, size_t, const wchar_t *, ...);
 *  int    _vscwprintf (const wchar_t *, __VALIST);
 *  int    _vsnwprintf (wchar_t *, size_t, const wchar_t *, __VALIST);
 *  int     vsnwprintf (wchar_t *, size_t, const wchar_t *, __VALIST);
 *  int     fwscanf (FILE *, const wchar_t *, ...);
 *  int     wscanf (const wchar_t *, ...);
 *  int     swscanf (const wchar_t *, const wchar_t *, ...);
 *  int     vwscanf (const wchar_t *, __VALIST);
 *  int     vfwscanf (FILE *, const wchar_t *, __VALIST);
 *  int     vswscanf (const wchar_t *, const wchar_t *, __VALIST);
 *  wint_t  fgetwc (FILE *);
 *  wint_t  fputwc (wchar_t, FILE *);
 *  wint_t  ungetwc (wchar_t, FILE *);
 *
 * The following pair of Microsoft functions conflict with their
 * corresponding ISO-C prototypes; consequently they will not be
 * declared when "__STRICT_ANSI__" checking is in effect:
 *
 *  int  swprintf (wchar_t *, const wchar_t *, ...);
 *  int  vswprintf (wchar_t *, const wchar_t *, __VALIST);
 *
 * The following group of functions is specified by ISO-C, but
 * their Microsoft implementations are available only if use of
 * "__MSVCRT__" is specified:
 *
 *  wchar_t * fgetws (wchar_t *, int, FILE *);
 *  int       fputws (const wchar_t *, FILE *);
 *  wint_t    getwc (FILE *);
 *  wint_t    getwchar (void);
 *  wint_t    putwc (wint_t, FILE *);
 *  wint_t    putwchar (wint_t);
 *
 * The following group of functions is also dependent on use of
 * "__MSVCRT__"; however, these are Microsoft specific, so they
 * are not declared if "__STRICT_ANSI__" checking is specified:
 *
 *  wchar_t * _getws (wchar_t *);
 *  int       _putws (const wchar_t *);
 *  FILE    * _wfdopen (int, const wchar_t *);
 *  FILE    * _wfopen (const wchar_t *, const wchar_t *);
 *  FILE    * _wfreopen (const wchar_t *, const wchar_t *, FILE *);
 *  FILE    * _wfsopen (const wchar_t *, const wchar_t *, int);
 *  wchar_t * _wtmpnam (wchar_t *);
 *  wchar_t * _wtempnam (const wchar_t *, const wchar_t *);
 *  int       _wrename (const wchar_t *, const wchar_t *);
 *  int       _wremove (const wchar_t *);
 *  void      _wperror (const wchar_t *);
 *  FILE    * _wpopen (const wchar_t *, const wchar_t *);
 *
 *
 * In similar fashion, from...
 */
# 1 "c:\\vcast\\mingw\\include\\stdlib.h" 1 3
/*
 * stdlib.h
 *
 * ANSI/POSIX + Microsoft compatible standard library function prototypes,
 * associated macros, and manifest constant definitions.
 *
 * $Id: stdlib.h,v 2f3798017d64 2016/11/28 14:14:48 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2009, 2011, 2014-2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\stdlib.h" 3

/* Some of the content of this header is made selectively accessible,
 * when indirectly included via <wchar.h>; only when we have established
 * that this inclusion is NOT via this selective method...
 */
# 90 "c:\\vcast\\mingw\\include\\stdlib.h" 3
extern "C" {
# 390 "c:\\vcast\\mingw\\include\\stdlib.h" 3
/* Prototypes which are to be declared both here, in <stdlib.h>,
 * and also in <wchar.h>; declare them here, such that they may be
 * selectively included by <wchar.h>.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
long wcstol (const wchar_t *, wchar_t **, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long wcstoul (const wchar_t *, wchar_t **, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double wcstod (const wchar_t *, wchar_t **);


/* Variants on wcstod(), specified by ISO-C99; once again, MSVCRT.DLL
 * doesn't have them, but we offer them in libmingwex.a
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__))
float wcstof (const wchar_t *__restrict__, wchar_t **__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long double wcstold (const wchar_t *__restrict__, wchar_t **__restrict__);
# 451 "c:\\vcast\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetenv (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wputenv (const wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wsearchenv (const wchar_t *, const wchar_t *, wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wsystem (const wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wmakepath (wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *,
    const wchar_t *
  );

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wsplitpath (const wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
wchar_t *_wfullpath (wchar_t *, const wchar_t *, size_t);
# 847 "c:\\vcast\\mingw\\include\\stdlib.h" 3
}
# 148 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
/* ...we obtain prototypes for universally supported functions:
 *
 *  long wcstol (const wchar_t *, wchar_t **, int);
 *  unsigned long wcstoul (const wchar_t *, wchar_t **, int);
 *  double wcstod (const wchar_t *, wchar_t **);
 *
 * The following are Microsoft specific, and require MSCVRT.DLL,
 * or any of its non-free derivatives; they are not available to
 * applications which use CRTDLL.DLL:
 *
 *  wchar_t *_wgetenv (const wchar_t *);
 *  int _wputenv (const wchar_t *);
 *  void _wsearchenv (const wchar_t *, const wchar_t *, wchar_t *);
 *  int _wsystem (const wchar_t *);
 *  void _wmakepath (wchar_t *, const wchar_t *, const wchar_t *,
 *          const wchar_t *, const wchar_t *
 *        );
 *  void _wsplitpath (const wchar_t *, wchar_t *, wchar_t *,
 *          wchar_t *, wchar_t *
 *        );
 *  wchar_t *_wfullpath (wchar_t *, const wchar_t *, size_t);
 *
 * ...with this pair requiring either WinXP (or later), or one of
 * the non-free MSVC runtimes from MSVCR70.DLL onwards:
 *
 *  __int64 _wcstoi64 (const wchar_t *, wchar_t **, int);
 *  unsigned __int64 _wcstoui64 (const wchar_t *, wchar_t **, int);
 *
 *  ...and this pair requiring Win-Vista (or later), or a non-free
 *  MSVC runtime from MSVCR80.DLL onwards:
 *
 *  __int64 _wcstoi64_l (const wchar_t *, wchar_t **, int, _locale_t);
 *  unsigned __int64 _wcstoui64_l (const wchar_t *, wchar_t **,
 *          int, _locale_t);
 *        );
 *
 * ...while this pair are ISO-C99 standards, which are available
 * in libmingwex.a, but not in any version of MSVCRT.DLL, (nor in
 * any of its non-free derivatives prior to MSVCR120.DLL), nor in
 * CRTDLL.DLL:
 *
 *  float wcstof (const wchar_t *restrict, wchar_t **restrict);
 *  long double wcstold (const wchar_t *restrict, wchar_t **restrict);
 *
 *
 * while...
 */

/* ...when NOT compiling with "__STRICT_ANSI__" conformity checking,
 * from...
 */
# 1 "c:\\vcast\\mingw\\include\\direct.h" 1 3
/*
 * direct.h
 *
 * Functions for manipulating paths and directories, (included from io.h),
 * and functions for manipulating the current drive assignment.
 *
 * $Id: direct.h,v 71af661f5309 2016/04/26 22:05:33 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997, 1999-2001, 2003, 2004, 2007, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\direct.h" 3

/* In addition to inclusion in its own right, this header supports
 * selective inclusion by <wchar.h>; thus...
 */
# 60 "c:\\vcast\\mingw\\include\\direct.h" 3
extern "C" {
# 73 "c:\\vcast\\mingw\\include\\direct.h" 3
/* The following group of function prototypes are to be declared
 * either when including <dirent.h> in its own right, or when it
 * is included selectively by <wchar.h>; however...
 */

 /*
  * ...they are available only within MSVCRT.DLL, (i.e. they are
  * NOT provided by CRTDLL.DLL), and if both _DIRENT_H and _WCHAR_H
  * are already defined, by the time we get to here, then this must
  * be an inclusion of <dirent.h> in its own right, AFTER they have
  * already been declared on behalf of <wchar.h>; there is no need
  * to declare them again.
  */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wchdir (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetcwd (wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetdcwd (int, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wmkdir (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wrmdir (const wchar_t *);



}
# 200 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
/* ...we obtain prototypes for each of the following functions,
 * (none of which are available when using CRTDLL.DLL):
 *
 *  int _wchdir (const wchar_t *);
 *  wchar_t *_wgetcwd (wchar_t *, int);
 *  wchar_t *_wgetdcwd (int, wchar_t *, int);
 *  int _wmkdir (const wchar_t *);
 *  int _wrmdir (const wchar_t *);
 *
 *
 * while from...
 */
# 1 "c:\\vcast\\mingw\\include\\sys/stat.h" 1 3
/*
 * stat.h
 *
 * Symbolic constants for opening and creating files, also stat, fstat and
 * chmod functions.
 *
 * $Id: stat.h,v 4cf5070e9a04 2016/07/14 17:59:07 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2001, 2003-2005, 2007, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\sys/stat.h" 3

/* To support selective (partial) inclusion by <wchar.h>...
 */
# 147 "c:\\vcast\\mingw\\include\\sys/stat.h" 3
/* The structure manipulated and returned by stat() and fstat(); note that
 * expansion of the macro provided below will yield variants of struct stat
 * to conform with Microsoft's usage, (and POSIX usage up to and including
 * POSIX.1-2001, but NOT the extended specification of POSIX.1-2008).
 *
 * NOTE: If called on a directory the values in the time fields are not only
 * invalid, they will cause localtime et. al. to return NULL. And calling
 * asctime with a NULL pointer causes an Invalid Page Fault. So watch it!
 */
# 170 "c:\\vcast\\mingw\\include\\sys/stat.h" 3
/* Here, we expand the preceding macro to yield the actual definition
 * of struct stat, under its current Microsoft "uglified" name...
 */
struct _stat { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; _off_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };


/* ...while this alternative expansion yields its standard POSIX name,
 * (and its original Microsoft name); apart from its name, this must be
 * defined identically to struct _stat above.
 */
struct stat { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; _off_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };



/* This variant of struct stat is required to support the use of the
 * _stati64() function, which is provided by MSVCRT.DLL, but was not
 * present in CRTDLL.DLL...
 */
struct _stati64 { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; __off64_t st_size; time_t st_atime; time_t st_mtime; time_t st_ctime; };


/* ...while this supports the use of the _stat64() function, introduced
 * by MSVCR61.DLL, and subsequently added to MSVCRT.DLL for releases from
 * Win2K onwards...
 */
struct __stat64 { _dev_t st_dev; _ino_t st_ino; _mode_t st_mode; short st_nlink; short st_uid; short st_gid; _dev_t st_rdev; __off64_t st_size; __time64_t st_atime; __time64_t st_mtime; __time64_t st_ctime; };
# 210 "c:\\vcast\\mingw\\include\\sys/stat.h" 3
/* From here on, it is sufficient to leave __struct_stat_defined as
 * a macro which expands to nothing.
 */





extern "C" {
# 338 "c:\\vcast\\mingw\\include\\sys/stat.h" 3
/* This final group of function prototypes, specific to MSVCRT.DLL and its
 * non-free derivatives, are to be declared both when <sys/stat.h> is included
 * directly, and when it is selectively included by <wchar.h>; however, if both
 * _SYS_STAT_H and _WCHAR_H are defined, by the time we get to here, then this
 * must be the direct inclusion case, after having already declared these via
 * selective inclusion by <wchar.h>, and we should not declare these again;
 * (in particular, we should not repeat inline function implementations).
 */

/* As is the case for their regular counterparts, this pair of functions
 * remain available in MSVCRT.DLL itself, but they are not exported from its
 * non-free derivatives from MSVCR80.DLL onwards, whence it is expected that
 * they will be replaced by inline implementations.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstat(const wchar_t *, struct _stat *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstati64 (const wchar_t *, struct _stati64 *);



/* Similarly, this variant was introduced in MSVCR80.DLL, and was subsequently
 * added to MSVCRT.DLL with the release of Win2K...
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wstat64 (const wchar_t *, struct __stat64 *);
# 398 "c:\\vcast\\mingw\\include\\sys/stat.h" 3
}
# 213 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
/* ...we obtain function prototypes, and all associated data type
 * definitions for this pair of actual functions, in all versions of
 * MSVCRT.DLL, and its non-free derivatives preceding MSVCR80.DLL, (or
 * inline replacement implementations for MSVCR80.DLL and later):
 *
 *  int _wstat (const wchar_t *, struct _stat *);
 *  int _wstati64 (const wchar_t *, struct _stati64 *);
 *
 * ...this additional actual function, available in MSVCRT.DLL from
 * Win2K onwards, or in non-free MSVCR61.DLL and again requiring an
 * inline replacement from MSVCR80.DLL onwards:
 *
 *  int _wstat64 (const wchar_t *, struct __stat64 *);
 *
 * ...and these actual functions, which are available only in non-free
 * MSVCR80.DLL, and its later derivatives:
 *
 *  int _wstat32 (const wchar_t *, struct __stat32 *);
 *  int _wstat32i64 (const wchar_t *, struct _stat32i64 *);
 *  int _wstat64i32 (const wchar_t *, struct _stat64i32 *);
 *
 *
 * and from...
 */
# 1 "c:\\vcast\\mingw\\include\\io.h" 1 3
/*
 * io.h
 *
 * System level I/O functions and types.
 *
 * $Id: io.h,v 82e816df4c9b 2016/10/30 18:40:10 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2004, 2007, 2009, 2010, 2014-2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 *
 * NOTE: The file manipulation functions provided by Microsoft seem to
 * work with either slash (/) or backslash (\) as the directory separator;
 * (this is consistent with Microsoft's own documentation, on MSDN).
 *
 */

       
# 39 "c:\\vcast\\mingw\\include\\io.h" 3

/* Defer definition of the _IO_H multiple inclusion guard, to allow
 * for selective inclusion by <wchar.h>, (in which case we should
 * NOT define it).
 */
# 60 "c:\\vcast\\mingw\\include\\io.h" 3
/* This will give us intptr_t, which we need in ALL cases, whether
 * including <io.h> directly, or selectively via <wchar.h>; (note: we
 * use the #include "..." form here, to ensure that we read the type
 * definition directly from the stdint.h header located in the same
 * directory as this <io.h> file).
 */

# 1 "c:\\vcast\\mingw\\include\\stdint.h" 1 3
/*
 * stdint.h
 *
 * Integer type definitions, as prescribed by ISO-C9x Section 7.18
 * Based on ISO/IEC SC22/WG14 9899 Committee draft (SC22 N2794)
 *
 * $Id: stdint.h,v 0e4f78dbc1ba 2016/06/17 14:16:01 keithmarshall $
 *
 * Written by Danny Smith <danny_r_smith_2001@yahoo.co.nz>
 * Copyright (C) 2000-2002, 2004, 2005, 2007, 2009, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\stdint.h" 3

/* To support selective definition of just intptr_t or uintptr_t,
 * we defer definition of the normal multiple inclusion guard macro,
 * until we've determined that neither selection is active.
 */
# 99 "c:\\vcast\\mingw\\include\\stdint.h" 3
/* 7.18.1.4  Integer types capable of holding object pointers.
 */





 typedef int __intptr_t;

typedef __intptr_t intptr_t;
# 68 "c:\\vcast\\mingw\\include\\io.h" 2 3

/* Attributes of files as returned by _findfirst() et al.  MSDN is not
 * explicit about whether or not these should be defined when including
 * <wchar.h>, but since they complement the _wfindfirst() API, which is
 * declared there, it seems logical to make them visible in all cases
 * of <io.h> inclusion.
 */
# 85 "c:\\vcast\\mingw\\include\\io.h" 3
/* The maximum length of a file name.  It may be better to use the Windows'
 * GetVolumeInformation() function in preference to this constant, but hey,
 * this works!  In any case, we use this manifest constant when we declare
 * the _findfirst() API, so its definition must be visible in all places
 * where this, or any of its variants, is declared.
 *
 * Note that <stdio.h> also defines this, but we don't guard it, so that
 * the compiler has a chance to catch inconsistencies.
 */


/* We must define _fsize_t, but some compilers (including GCC prior to
 * version 4.0), may choke if we try to do so more than once...
 */

 /* ...so DO NOT define it during direct <io.h> inclusion, (i.e. _IO_H
  * is defined), if <wchar.h> has already caused it to be defined, (i.e.
  * _WCHAR_H is ALSO defined, but __STRICT_ANSI__ is NOT).
  */
typedef unsigned long _fsize_t;


/* Functions for searching for files: _findfirst() sets errno to ENOENT,
 * and returns -1 if no match is found; otherwise it returns a handle to
 * be used in _findnext() and _findclose() calls. _findnext() may then be
 * used to identify further matches; it updates the search data, returning
 * zero, each time a further match is found, ultimately setting errno to
 * ENOENT, and returning -1 when no further match can be found.  When all
 * expected matches have been identified, _findclose() should be called,
 * to release the resources allocated to the search data.
 *
 * The API comprises several variants of the _findfirst() and _findnext()
 * functions, conforming generally to the usage model:
 *
 *  intptr_t handle = _findfirst (filespec, &search_data );
 *  if (handle >= (intptr_t)(0)) do { process search_data;
 *   } while (_findnext (handle, &search_data));
 *
 * where "filespec" represents a char *, or a wchar_t * specification,
 * (which may include wild cards), for a file name pattern to be matched,
 * and "search_data" represents a variant of the structure:
 */
# 136 "c:\\vcast\\mingw\\include\\io.h" 3
/* Time type and file size variations for __struct_finddata_t apply, for the
 * various functions comprising the file name search API, as tabulated below:
 *
 * Note: this is a reproduction of reference data as published in the MSDN
 * online documentation for the file name search API; it applies, specifically,
 * to the implementation of this API in the non-free run-time library versions
 * from MSVCR80.DLL onwards, (i.e. when __MSVCRT_VERSION__ is defined, and is
 * assigned a value >= 0x800).  When linking to the freely available MSVCRT.DLL
 * runtime, (__MSVCRT_VERSION__ should not be defined), or any earlier version
 * of the non-free run-time, the _USE_32BIT_TIME_T feature test is irrelevant;
 * the information presented in this table should be interpreted as if this
 * feature is always implicitly enabled.
 *
 *  Functions	       _USE_32BIT_TIME_T defined?    __fd_time_t     __fd_size_t
 *
 * _findfirst(),	Not defined			64-bit		32-bit
 * _wfindfirst()
 * _findfirst(),	Defined				32-bit		32-bit
 * _wfindfirst()
 *
 * _findfirst32(),	Not affected by the macro	32-bit		32-bit
 * _wfindfirst32()	definition
 *
 * _findfirst64(),	Not affected by the macro	64-bit		64-bit
 * _wfindfirst64()	definition
 *
 * _findfirsti64(),	Not defined			64-bit		64-bit
 * _wfindfirsti64()
 * _findfirsti64(),	Defined				32-bit		64-bit
 * _wfindfirsti64()
 *
 * _findfirst32i64(),	Not affected by the macro	32-bit		64-bit
 * _wfindfirst32i64()	definition
 *
 * _findfirst64i32(),	Not affected by the macro	64-bit		32-bit
 * _wfindfirst64i32()	definition
 *
 */
extern "C" {
# 331 "c:\\vcast\\mingw\\include\\io.h" 3
/* Wide character file name analogue of the file name search API;
 * declared both here, in <io.h>, and via selective inclusion from
 * <wchar.h>, it mirrors all aspects of the preceding API declarations,
 * except that all file names are expressed as wchar_t.
 */


/* Thus, the original API comprised this pair of generically specified
 * data structures...
 */
struct _wfinddata_t { unsigned attrib; time_t time_create; time_t time_access; time_t time_write; _fsize_t size; wchar_t name[(260)]; };
struct _wfinddatai64_t { unsigned attrib; time_t time_create; time_t time_access; time_t time_write; long long size; wchar_t name[(260)]; };


/* ...with corresponding functions to manipulate them; once again, there
 * is no physical implementation of these in MSVCR80.DLL or later, so we
 * declare them only when it is NOT specified that one of these run-time
 * library versions is to be used.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirst (const wchar_t *, struct _wfinddata_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnext (intptr_t, struct _wfinddata_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirsti64 (const wchar_t *, struct _wfinddatai64_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnexti64 (intptr_t, struct _wfinddatai64_t *);




/* Win2K also added an all-64-bit variant of the _wfinddata API to
 * MSVCRT.DLL, after it originally appeared in MSVCR61.DLL.
 */
struct __wfinddata64_t { unsigned attrib; __time64_t time_create; __time64_t time_access; __time64_t time_write; long long size; wchar_t name[(260)]; };
/*
 * As in the case of the __finddata64_t structure, some MSDN
 * documents, (particularly more recent documents), may refer
 * to __wfinddata64_t by the inconsistently anomalous name of
 * _wfinddata64_t; also support this anomaly.
 */


 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wfindfirst64 (const wchar_t *, struct __wfinddata64_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
int _wfindnext64 (intptr_t, struct __wfinddata64_t *);
# 474 "c:\\vcast\\mingw\\include\\io.h" 3
/* We have no further use for the __struct_finddata_t macro; delete it!
 */


/* MSDN documents that <io.h> must be included to get a prototype for
 * _findclose(), which kind of negates the usefulness of declaring the
 * wchar_t variants of the file name search API in <wchar.h>; mitigate
 * this anomaly, by declaring _findclose() such that either <io.h> or
 * <wchar.h> will provide it.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _findclose (intptr_t);
# 525 "c:\\vcast\\mingw\\include\\io.h" 3
}
# 551 "c:\\vcast\\mingw\\include\\io.h" 3
extern "C" {
# 628 "c:\\vcast\\mingw\\include\\io.h" 3
/* These wchar_t functions are made available for selective inclusion
 * by <wchar.h>, in addition to direct inclusion of <io.h>, but they
 * are only supported by MSVCRT.DLL and derivatives; they don't exist
 * in CRTDLL.DLL.  Furthermore, if both _IO_H and _WCHAR_H have been
 * defined, by the time we get here, then this must be direct <io.h>
 * inclusion, and we've already declared these by prior inclusion of
 * <wchar.h>; there is no need to declare them again.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _waccess (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wchmod (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcreat (const wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wunlink (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wopen (const wchar_t *, int, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wsopen (const wchar_t *, int, int, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wmktemp (wchar_t *);
# 701 "c:\\vcast\\mingw\\include\\io.h" 3
}
# 238 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
/* ...we obtain function prototypes for each of the following, which
 * are available in all versions of MSVCRT.DLL, (and all its non-free
 * derivatives), but are not supported by CRTDLL.DLL:
 *
 *  int _waccess (const wchar_t *, int);
 *  int _wchmod (const wchar_t *, int);
 *  int _wcreat (const wchar_t *, int);
 *  int _wopen (const wchar_t *, int, ...);
 *  int _wsopen (const wchar_t *, int, int, ...);
 *  int _wunlink (const wchar_t *);
 *  wchar_t *_wmktemp (wchar_t *);
 *
 * ...and also function prototypes and definitions of all associated
 * data types and manifest constants for the following, each of which
 * is physically implemented in all versions of MSVCRT.DLL, and in each
 * of its non-free variants prior to MSVCR80.DLL, or emulated by inline
 * replacement functions for MSVCR80.DLL and later:
 *
 *  intptr_t _wfindfirst (wchar_t *, struct _wfinddata_t *);
 *  int _wfindnext (intptr_t, struct _wfinddata_t *);
 *
 *  intptr_t _wfindfirsti64 (wchar_t *, struct _wfinddatai64_t *);
 *  int _wfindnexti64 (intptr_t, struct _wfinddatai64_t *);
 *
 * ...this additional pair of functions, available in all versions of
 * MSVCRT.DLL from Win2K, and non-free variants from MSVCR61.DLL:
 *
 *  intptr_t _wfindfirst64 (wchar_t *, struct __wfinddata64_t *);
 *  int _wfindnext64 (intptr_t, struct __wfinddata64_t *);
 *
 * ...and these, which are only available in the non-free run-times
 * from MSVCR80.DLL onwards:
 *
 *  intptr_t _wfindfirst32 (wchar_t *, struct _wfinddata32_t *);
 *  int _wfindnext32 (intptr_t, struct _wfinddata32_t *);
 *
 *  intptr_t _wfindfirst32i64 (wchar_t *, struct _wfinddata32i64_t *);
 *  int _wfindnext32i64 (intptr_t, struct _wfinddata32i64_t *);
 *
 *  intptr_t _wfindfirst64i32 (wchar_t *, struct _wfinddata64i32_t *);
 *  int _wfindnext64i32 (intptr_t, struct _wfinddata64i32_t *);
 *
 * Additionally, although Microsoft's <wchar.h> may not declare it,
 * this is required to complement all variants of the _wfindfirst()
 * and _wfindnext() API, so we also declare the prototype for:
 *
 *  int _findclose (intptr_t);
 */


/* From...
 */
# 1 "c:\\vcast\\mingw\\include\\time.h" 1 3
/*
 * time.h
 *
 * Type definitions and function declarations relating to date and time.
 *
 * $Id: time.h,v bfab21e13fbe 2016/08/24 23:01:17 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2007, 2011, 2015, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 34 "c:\\vcast\\mingw\\include\\time.h" 3

/* Irrespective of whether this is normal or selective inclusion of
 * <time.h>, we ALWAYS require the definition for time_t; get it by
 * selective inclusion from its primary source, in <sys/types.h>;
 * note that we must ALWAYS delegate this, when __need_time_t is
 * defined, even when _TIME_H had been defined previously, to ensure
 * that __need_time_t is properly reset, and thus cannot compromise
 * a later inclusion of <sys/types.h>
 */


# 1 "c:\\vcast\\mingw\\include\\sys\\types.h" 1 3
/*
 * sys/types.h
 *
 * Definitions of (primarily POSIX) system data types.
 *
 * $Id: types.h,v 6ceeab058f30 2016/10/13 20:03:56 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-1999, 2001, 2003, 2004, 2008, 2011, 2014-2016,
 *   MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
# 46 "c:\\vcast\\mingw\\include\\time.h" 2 3


/* To support selective partial inclusion, we do not immediately define
 * the normal _TIME_H guard macro; initially, we also clear all of those
 * declaraction subset selection macros which are applicable herein.
 */
# 69 "c:\\vcast\\mingw\\include\\time.h" 3
/* This is selective inclusion by <wchar.h>; thus, we do not define the
 * _TIME_H guard macro, and we select only the minimally required subset
 * of declarations to be exposed from within <time.h>
 */


/* Both ISO-C and POSIX stipulate that <wchar.h> shall declare "struct tm"
 * as an incomplete structure, with its complete declaration to be provided
 * by <time.h>; provide an incomplete forward declaration, to satisfy this
 * minimal requirement for selective inclusion by <wchar.h>
 */
struct tm;
# 433 "c:\\vcast\\mingw\\include\\time.h" 3
/* Wide character time function prototypes.  These are nominally declared
 * both here, in <time.h>, and also in <wchar.h>; we declare them here, and
 * make them available for selective inclusion by <wchar.h>, but such that
 * the declarations, and in particular any in-line implementation of the
 * _wctime() function, are visible only on the first time parse, when
 * one of either _TIME_H, or _WCHAR_H, but not both, is defined.
 */
extern "C" {


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wasctime (const struct tm *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wstrdate (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wstrtime (wchar_t *);


/* A __time64_t specific variant of _wctime(), identified as _wctime64(),
 * first appeared in the non-free MSVC specific MSVCR61.DLL, and was added
 * to the freely available platform MSVCRT.DLL from Win2K onwards...
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wctime64 (const __time64_t *);
# 462 "c:\\vcast\\mingw\\include\\time.h" 3
/* Present in all versions of MSVCRT.DLL, but withdrawn from non-free
 * MSVC specific releases from MSVCR80.DLL onwards; in all versions of
 * MSVCRT.DLL, _wctime() accepts a 32-bit time_t argument pointer.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wctime (const time_t *);
# 495 "c:\\vcast\\mingw\\include\\time.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t wcsftime (wchar_t *, size_t, const wchar_t *, const struct tm *);

}



/* We're done with all <time.h> specific content selectors; clear them.
 */
# 291 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
/* ...we always obtain an opaque forward declaration of:
 *
 *  struct tm
 *
 * ...and prototype declarations for the following ISO-C99 function,
 * (which is always provided):
 *
 *  size_t wcsftime (wchar_t *, size_t, const wchar_t *, const struct tm *);
 *
 * ...together with the following non-ISO-C functions, (which are
 * NOT exposed when "__STRICT_ANSI__" checking is enabled):
 *
 *  wchar_t *_wctime (const time_t *);
 *  wchar_t *_wasctime (const struct tm *);
 *  wchar_t *_wstrdate (wchar_t *);
 *  wchar_t *_wstrtime (wchar_t *);
 *
 * Of the preceding group, we also note that, while it remains in
 * all versions of MSVCRT.DLL, (using a strictly 32-bit data type
 * to represent its "time_t" argument), the _wctime() function is
 * NOT present in MSVCR80.DLL, and later versions of the non-free
 * MSVC runtime libraries, in which it is replaced by either of:
 *
 *  wchar_t *_wctime64 (const __time64_t *);
 *  wchar_t *_wctime32 (const __time32_t *);
 *
 * ...with the actual replacement being chosen at compile time, on
 * the basis of the user specified "_USE_32BIT_TIME_T" feature test
 * macro, (a Microsoft specific, brain damaged concept), which maps
 * _wctime() itself, as an in-line alias for its corresponding
 * replacement library function.
 *
 */

/* Once again, when NOT compiling with "__STRICT_ANSI__" conformity
 * checking, from...
 */
# 1 "c:\\vcast\\mingw\\include\\locale.h" 1 3
/*
 * locale.h
 *
 * Functions and types for localization (ie. changing the appearance of
 * output based on the standards of a certain country, or region).
 *
 * $Id: locale.h,v a3059ad5ee79 2016/06/12 19:22:07 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997, 1999-2001, 2003, 2004, 2007, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\locale.h" 3

/* Some headers will include this file, just to acquire a globally
 * consistent definition for the opaque locale_t data object type; it
 * is only useful on Vista, or for users of non-free MSVCR80.DLL, (or
 * its later derivatives), so, when either of these is applicable,
 * ensure that we define it, (if we haven't done so already).
 */
# 63 "c:\\vcast\\mingw\\include\\locale.h" 3
/* When we are interested in more than just locale_t...
 */

/* ...content from <locale.h> is selectively shared with <wchar.h>;
 * defer definition of the normal repeat inclusion guard, until...
 */
# 135 "c:\\vcast\\mingw\\include\\locale.h" 3
extern "C" {
# 146 "c:\\vcast\\mingw\\include\\locale.h" 3
 /* ...whereas, this must be declared in either case; (note that it
  * not necessary to guard against a possible repeat declaration, as
  * the compiler should accept this, without complaint, provided any
  * prior declaration is consistent).
  */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wsetlocale (int, const wchar_t *);
# 178 "c:\\vcast\\mingw\\include\\locale.h" 3
}




/* We've already handled any pending __need_locale_t request; ensure
 * that we cancel it, so that any more comprehensive further request,
 * before _LOCALE_H is defined, will be handled appropriately.
 */
# 329 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
/* ...we obtain the declaration for:
 *
 *   wchar_t *_wsetlocale (int, const wchar_t *);
 *
 *
 * and from...
 */
# 1 "c:\\vcast\\mingw\\include\\process.h" 1 3
/*
 * process.h
 *
 * Declarations of functions for spawning child processes.
 *
 * $Id: process.h,v 0e4f78dbc1ba 2016/06/17 14:16:01 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2001, 2003-2004, 2007-2008, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 34 "c:\\vcast\\mingw\\include\\process.h" 3

/* Defer defining the normal _PROCESS_H multiple inclusion guard macro,
 * to facilitate selective inclusion by <wchar.h>, (in which case we do
 * not wish to define it).
 */
# 64 "c:\\vcast\\mingw\\include\\process.h" 3
/* Mode constants for spawn() functions.
 */
# 84 "c:\\vcast\\mingw\\include\\process.h" 3
/* All Microsoft implementations of the exec() and spawn() functions
 * are declared with intptr_t as their return type; get its definition
 * by selective inclusion from "stdint.h"; (note: use #include "..."
 * here, to avoid side effects from any alternative <stdint.h>, which
 * is not in the same directory as this <process.h>).
 */

# 1 "c:\\vcast\\mingw\\include\\stdint.h" 1 3
/*
 * stdint.h
 *
 * Integer type definitions, as prescribed by ISO-C9x Section 7.18
 * Based on ISO/IEC SC22/WG14 9899 Committee draft (SC22 N2794)
 *
 * $Id: stdint.h,v 0e4f78dbc1ba 2016/06/17 14:16:01 keithmarshall $
 *
 * Written by Danny Smith <danny_r_smith_2001@yahoo.co.nz>
 * Copyright (C) 2000-2002, 2004, 2005, 2007, 2009, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\stdint.h" 3

/* To support selective definition of just intptr_t or uintptr_t,
 * we defer definition of the normal multiple inclusion guard macro,
 * until we've determined that neither selection is active.
 */
# 99 "c:\\vcast\\mingw\\include\\stdint.h" 3
/* 7.18.1.4  Integer types capable of holding object pointers.
 */
# 92 "c:\\vcast\\mingw\\include\\process.h" 2 3

extern "C" {
# 232 "c:\\vcast\\mingw\\include\\process.h" 3
/* Wide character variations of the exec() and spawn() functions are
 * declared both when <process.h> is included directly, and when it is
 * selectively included by <wchar.h>; however, if both _PROCESS_H and
 * _WCHAR_H are defined, by the time we get to here, then this must be
 * the direct inclusion case, and these have already been declared as
 * a result of selective inclusion; there is no need to declare them
 * a second time.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecl (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecle (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexeclp (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexeclpe (const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecv (const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wexecve
(const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wexecvp (const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wexecvpe
(const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnl (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnle (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnlp (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnlpe (int, const wchar_t *, const wchar_t *, ...);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnv (int, const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wspawnve
(int, const wchar_t *, const wchar_t * const *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
intptr_t _wspawnvp (int, const wchar_t *, const wchar_t * const *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) intptr_t _wspawnvpe
(int, const wchar_t *, const wchar_t * const *, const wchar_t * const *);



}
# 337 "c:\\vcast\\mingw\\include\\wchar.h" 2 3
/* ...we obtain function prototypes for:
 *
 *  intptr_t _wexecl (const wchar_t *, const wchar_t *, ...);
 *  intptr_t _wexecle (const wchar_t *, const wchar_t *, ...);
 *  intptr_t _wexeclp (const wchar_t *, const wchar_t *, ...);
 *  intptr_t _wexeclpe (const wchar_t *, const wchar_t *, ...);
 *
 *  intptr_t _wexecv (const wchar_t *, const wchar_t * const *);
 *  intptr_t _wexecve (
 *    const wchar_t *, const wchar_t * const *, const wchar_t * const *
 *   );
 *  intptr_t _wexecvp (const wchar_t *, const wchar_t * const *);
 *  intptr_t _wexecvpe (
 *    const wchar_t *, const wchar_t * const *, const wchar_t * const *
 *   );
 *
 *  intptr_t _wspawnl (int, const wchar_t *, const wchar_t *, ...);
 *  intptr_t _wspawnle (int, const wchar_t *, const wchar_t *, ...);
 *  intptr_t _wspawnlp (int, const wchar_t *, const wchar_t *, ...);
 *  intptr_t _wspawnlpe (int, const wchar_t *, const wchar_t *, ...);
 *
 *  intptr_t _wspawnv (int, const wchar_t *, const wchar_t * const *);
 *  intptr_t _wspawnve (
 *    int, const wchar_t *, const wchar_t * const *, const wchar_t * const *
 *   );
 *  intptr_t _wspawnvp (int, const wchar_t *, const wchar_t * const *);
 *  intptr_t _wspawnvpe (
 *    int, const wchar_t *, const wchar_t * const *, const wchar_t * const *
 *   );
 *
 */


extern "C" {

/* Wide character string functions must be specified here, as required
 * by the ISO-C Standard; however, MSVC contravenes this standard by also
 * requiring them to appear in <string.h>.  We declare them here, where
 * they rightfully belong, but we also arrange for them to be available
 * for selective inclusion by <string.h>; to facilitate this, we must
 * change the declarative condition...
 */




/* ...such that these declarations are exposed when either _WCHAR_H is defined,
 * or when _STRING_H is defined and __STRICT_ANSI__ is not, but NOT when BOTH of
 * these apply, since that indicates that this group of declarations has already
 * been processed, during partial inclusion of <wchar.h> by <string.h>, whereas
 * we are now including <wchar.h> in its own right.
 *
 *
 * Wide character versions of the ISO-C standard string functions.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcscat (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcschr (const wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcscmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcscoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcscpy (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcscspn (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcslen (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsncat (wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsncmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsncpy (wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcspbrk (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsrchr (const wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsspn (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsstr (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcstok (wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsxfrm (wchar_t *, const wchar_t *, size_t);


/* UTF-16LE versions of non-ANSI string functions provided by CRTDLL.DLL
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsdup (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsicmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsicoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcslwr (wchar_t*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsnicmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsnset (wchar_t *, wchar_t, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsrev (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsset (wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wcsupr (wchar_t *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsncoll (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wcsnicoll (const wchar_t *, const wchar_t *, size_t);

/* A wide character counterpart to the strerror() API was introduced in
 * MSVCR70.DLL, and subsequently back-ported to MSVCRT.DLL in WinXP.
 */
# 440 "c:\\vcast\\mingw\\include\\wchar.h" 3
/* MSVCRT.DLL provides neither _wcscmpi() nor wcscmpi(); the heritage
 * is uncertain, but for the convenience, (and portability), of legacy
 * applications which assume wcscmpi() should be available:
 */

int __attribute__((__cdecl__)) __attribute__((__nothrow__)) wcscmpi (const wchar_t *, const wchar_t *);
# 454 "c:\\vcast\\mingw\\include\\wchar.h" 3
/* Older CRTDLL.DLL versions may have provided these alternatively named
 * functions; we continue to support them, via the OLDNAME libraries:
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsdup (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsicmp (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsicoll (const wchar_t *, const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcslwr (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wcsnicmp (const wchar_t *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsnset (wchar_t *, wchar_t, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsrev (wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsset (wchar_t *, wchar_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wcsupr (wchar_t *);
# 483 "c:\\vcast\\mingw\\include\\wchar.h" 3
/* Emulation, to support recent POSIX.1; we prefer this for ALL versions
 * of MSVCRT.DLL, (even those which already provide wcsnlen()); to avoid
 * the GCC breakage noted above.  (Note that we implement wcsnlen() with
 * the alternative external name, __mingw_wcsnlen() in libmingwex.a, to
 * avoid possible link time collision with MSVCR80.DLL's implementation,
 * then map this to wcsnlen() via a __CRT_ALIAS, with stubs designated
 * for linking from within the appropriate oldname libraries.
 */
extern size_t __mingw_wcsnlen (const wchar_t *, size_t);


inline __attribute__((__always_inline__)) size_t wcsnlen (const wchar_t *__text, size_t __maxlen)
{ return __mingw_wcsnlen (__text, __maxlen); }




/* This completes the set of declarations which are to be duplicated by
 * inclusion of <string.h>; revert the declarative condition, to make it
 * specific to <wchar.h> alone.
 */





typedef wchar_t _Wint_t;


typedef int mbstate_t;

/* The following multi-byte character conversion functions are
 * implemented in libmingwex.a, (and maybe also in some non-free
 * Microsoft libraries, such as MSVCP60.DLL and later).
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t btowc (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int wctob (wint_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t mbrlen (const char *__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbrtowc
(wchar_t *__restrict__, const char *__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbsrtowcs
(wchar_t *__restrict__, const char **__restrict__, size_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
size_t wcrtomb (char * __restrict__, wchar_t, mbstate_t *__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcsrtombs
(char *__restrict__, const wchar_t **__restrict__, size_t, mbstate_t *__restrict__);


/* These ISO-C99 functions are implemented in libmingwex.a,
 * or, in some cases, as inline stubs; while provided as MinGW
 * extensions to support ISO-C99, they are also required by
 * GNU C++.
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int fwide (FILE *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mbsinit (const mbstate_t *);
# 555 "c:\\vcast\\mingw\\include\\wchar.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemset (wchar_t *, wchar_t, size_t);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemchr (const wchar_t *, wchar_t, size_t);

/* FIXME: what makes this so different from every other function
 * in this group?  Why is it not qualified with the __cdecl, and
 * __MINGW_NOTHROW attributes?
 */
int wmemcmp (const wchar_t *, const wchar_t *, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
wchar_t *wmemcpy (wchar_t *__restrict__, const wchar_t *__restrict__, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *wmemmove (wchar_t *, const wchar_t *, size_t);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long long wcstoll (const wchar_t *__restrict__, wchar_t **__restrict__, int);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long long wcstoull
(const wchar_t *__restrict__, wchar_t **__restrict__, int);


}
# 45 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 2 3





// Need to do a bit of trickery here with mbstate_t as char_traits
// assumes it is in wchar.h, regardless of wchar_t specializations.
# 62 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 3
namespace std
{
  using ::mbstate_t;
} // namespace std

// Get rid of those macros defined in <wchar.h> in lieu of real functions.
# 135 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 3
namespace std
{


  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;



  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;





  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }



} // namespace







namespace __gnu_cxx
{





  using ::wcstold;
# 257 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 3
  using ::wcstoll;
  using ::wcstoull;

} // namespace __gnu_cxx

namespace std
{
  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;
} // namespace
# 277 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 3
namespace std
{

  using std::wcstof;


  using std::vfwscanf;


  using std::vswscanf;


  using std::vwscanf;



  using std::wcstold;
  using std::wcstoll;
  using std::wcstoull;

} // namespace
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\postypes.h" 2 3

// XXX If <stdint.h> is really needed, make sure to define the macros
// before including it, in order not to break <tr1/cstdint> (and <cstdint>
// in C++0x).  Reconsider all this as soon as possible...
# 68 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\postypes.h" 3
namespace std
{


  // The types streamoff, streampos and wstreampos and the class
  // template fpos<> are described in clauses 21.1.2, 21.1.3, 27.1.2,
  // 27.2, 27.4.1, 27.4.3 and D.6. Despite all this verbiage, the
  // behaviour of these types is mostly implementation defined or
  // unspecified. The behaviour in this implementation is as noted
  // below.

  /**
   *  @brief  Type used by fpos, char_traits<char>, and char_traits<wchar_t>.
   *
   *  In clauses 21.1.3.1 and 27.4.1 streamoff is described as an
   *  implementation defined type.
   *  Note: In versions of GCC up to and including GCC 3.3, streamoff
   *  was typedef long.
  */



  typedef long long streamoff;






  /// Integral type for I/O operation counts and buffer sizes.
  typedef ptrdiff_t streamsize; // Signed integral type

  /**
   *  @brief  Class representing stream positions.
   *
   *  The standard places no requirements upon the template parameter StateT.
   *  In this implementation StateT must be DefaultConstructible,
   *  CopyConstructible and Assignable.  The standard only requires that fpos
   *  should contain a member of type StateT. In this implementation it also
   *  contains an offset stored as a signed integer.
   *
   *  @param  StateT  Type passed to and returned from state().
   */
  template<typename _StateT>
    class fpos
    {
    
# 114 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\postypes.h"
   public
# 114 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\postypes.h" 3
          :
      streamoff _M_off;
      _StateT _M_state;

    public:
      // The standard doesn't require that fpos objects can be default
      // constructed. This implementation provides a default
      // constructor that initializes the offset to 0 and default
      // constructs the state.
      fpos()
      : _M_off(0), _M_state() { }

      // The standard requires that fpos objects can be constructed
      // from streamoff objects using the constructor syntax, and
      // fails to give any meaningful semantics. In this
      // implementation implicit conversion is also allowed, and this
      // constructor stores the streamoff as the offset and default
      // constructs the state.
      /// Construct position from offset.
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }

      /// Convert to streamoff.
      operator streamoff() const { return _M_off; }

      /// Remember the value of @a st.
      void
      state(_StateT __st)
      { _M_state = __st; }

      /// Return the last set value of @a st.
      _StateT
      state() const
      { return _M_state; }

      // The standard requires that this operator must be defined, but
      // gives no semantics. In this implementation it just adds its
      // argument to the stored offset and returns *this.
      /// Add offset to this position.
      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }

      // The standard requires that this operator must be defined, but
      // gives no semantics. In this implementation it just subtracts
      // its argument from the stored offset and returns *this.
      /// Subtract offset from this position.
      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }

      // The standard requires that this operator must be defined, but
      // defines its semantics only in terms of operator-. In this
      // implementation it constructs a copy of *this, adds the
      // argument to that copy using operator+= and then returns the
      // copy.
      /// Add position and offset.
      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }

      // The standard requires that this operator must be defined, but
      // defines its semantics only in terms of operator+. In this
      // implementation it constructs a copy of *this, subtracts the
      // argument from that copy using operator-= and then returns the
      // copy.
      /// Subtract offset from position.
      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }

      // The standard requires that this operator must be defined, but
      // defines its semantics only in terms of operator+. In this
      // implementation it returns the difference between the offset
      // stored in *this and in the argument.
      /// Subtract position to return offset.
      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };

  // The standard only requires that operator== must be an
  // equivalence relation. In this implementation two fpos<StateT>
  // objects belong to the same equivalence class if the contained
  // offsets compare equal.
  /// Test if equivalent to another position.
  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }

  // Clauses 21.1.3.1 and 21.1.3.2 describe streampos and wstreampos
  // as implementation defined types, but clause 27.2 requires that
  // they must both be typedefs for fpos<mbstate_t>
  /// File position for char streams.
  typedef fpos<mbstate_t> streampos;
  /// File position for wchar_t streams.
  typedef fpos<mbstate_t> wstreampos;


  /// File position for char16_t streams.
  typedef fpos<mbstate_t> u16streampos;
  /// File position for char32_t streams.
  typedef fpos<mbstate_t> u32streampos;



} // namespace
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\char_traits.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cwchar
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c wchar.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 21.4
//

       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 2 3


# 1 "c:\\vcast\\mingw\\include\\wchar.h" 1 3
/*
 * wchar.h
 *
 * Declarations relating to support for wide characters; many are simply
 * inherited by (sub-optimal) inclusion of other header files.
 *
 * $Id: wchar.h,v ec519c2a99b3 2017/01/28 16:20:51 keithmarshall $
 *
 * Unattributed original source.
 * Adapted by Rob Savoye <rob@cygnus.com>
 * Copyright (C) 1997, 1999-2009, 2011, 2015, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
# 45 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 2 3
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\char_traits.h" 2 3

namespace __gnu_cxx
{


  /**
   *  @brief  Mapping from character type to associated types.
   *
   *  @note This is an implementation class for the generic version
   *  of char_traits.  It defines int_type, off_type, pos_type, and
   *  state_type.  By default these are unsigned long, streamoff,
   *  streampos, and mbstate_t.  Users who need a different set of
   *  types, but who don't need to change the definitions of any function
   *  defined in char_traits, can specialize __gnu_cxx::_Char_types
   *  while leaving __gnu_cxx::char_traits alone. */
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };


  /**
   *  @brief  Base class used to implement std::char_traits.
   *
   *  @note For any given actual character type, this definition is
   *  probably wrong.  (Most of the member functions are likely to be
   *  right, but the int_type and state_type typedefs, and the eof()
   *  member function, are likely to be wrong.)  The reason this class
   *  exists is so users can specialize it.  Classes in namespace std
   *  may not be specialized for fundamental types, but classes in
   *  namespace __gnu_cxx may be.
   *
   *  See https://gcc.gnu.org/onlinedocs/libstdc++/manual/strings.html#strings.string.character_types
   *  for advice on how to make use of this class for @a unusual character
   *  types. Also, check out include/ext/pod_char_traits.h.  
   */
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static constexpr char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static constexpr int_type
      eof()
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      // NB: Inline std::copy so no recursive dependencies.
      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {
      // NB: Inline std::fill_n so no recursive dependencies.
      std::fill_n(__s, __n, __a);
      return __s;
    }


} // namespace

namespace std
{


  // 21.1
  /**
   *  @brief  Basis for explicit traits specializations.
   *
   *  @note  For any given actual character type, this definition is
   *  probably wrong.  Since this is just a thin wrapper around
   *  __gnu_cxx::char_traits, it is possible to achieve a more
   *  appropriate definition by specializing __gnu_cxx::char_traits.
   *
   *  See https://gcc.gnu.org/onlinedocs/libstdc++/manual/strings.html#strings.string.character_types
   *  for advice on how to make use of this class for @a unusual character
   *  types. Also, check out include/ext/pod_char_traits.h.
  */
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };


  /// 21.1.3.1  char_traits specializations
  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      {
 // LWG 467.
 return (static_cast<unsigned char>(__c1)
  < static_cast<unsigned char>(__c2));
      }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return __builtin_memcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n));
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return static_cast<char_type*>(__builtin_memset(__s, __a, __n));
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return static_cast<char_type>(__c); }

      // To keep both the byte 0xff and the eof symbol 0xffffffff
      // from ending up as 0xffffffff.
      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return (__c == eof()) ? 0 : __c; }
  };



  /// 21.1.3.2  char_traits specializations
  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return wmemcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return wmemchr(__s, __a, __n);
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemmove(__s1, __s2, __n);
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemcpy(__s1, __s2, __n);
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return wmemset(__s, __a, __n);
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>((wchar_t)(0xffff)); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };



} // namespace




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdint" 1 3
// <cstdint> -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cstdint
 *  This is a Standard C++ Library header.
 */




       
# 33 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdint" 3





# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 39 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdint" 2 3


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdint.h" 1 3 4
# 9 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdint.h" 3 4
# 1 "c:\\vcast\\mingw\\include\\stdint.h" 1 3 4
/*
 * stdint.h
 *
 * Integer type definitions, as prescribed by ISO-C9x Section 7.18
 * Based on ISO/IEC SC22/WG14 9899 Committee draft (SC22 N2794)
 *
 * $Id: stdint.h,v 0e4f78dbc1ba 2016/06/17 14:16:01 keithmarshall $
 *
 * Written by Danny Smith <danny_r_smith_2001@yahoo.co.nz>
 * Copyright (C) 2000-2002, 2004, 2005, 2007, 2009, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\stdint.h" 3

/* To support selective definition of just intptr_t or uintptr_t,
 * we defer definition of the normal multiple inclusion guard macro,
 * until we've determined that neither selection is active.
 */



/* All MinGW system headers are expected to include <_mingw.h>;
 * ensure that we have done so.
 */


/* We need to duplicate the definitions of wint_t and wchar_t, as
 * they are defined in <stddef.h>; get them, by selective inclusion
 * from that header itself.
 */


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 55 "c:\\vcast\\mingw\\include\\stdint.h" 2 3

/* 7.18.1.1  Exact-width integer types.
 */
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;

/* 7.18.1.2  Minimum-width integer types.
 */
typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
typedef long long int_least64_t;
typedef unsigned long long uint_least64_t;

/*  7.18.1.3  Fastest minimum-width integer types
 *  Not actually guaranteed to be fastest for all purposes
 *  Here we use the exact-width types for 8 and 16-bit ints.
 */
typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
typedef long long int_fast64_t;
typedef unsigned long long uint_fast64_t;

/* We actually DO need both selections, which had to be omitted
 * to get us into this conditional block; force them!
 */





/* 7.18.1.4  Integer types capable of holding object pointers.
 */
# 118 "c:\\vcast\\mingw\\include\\stdint.h" 3
 typedef unsigned int __uintptr_t;

typedef __uintptr_t uintptr_t;





/* 7.18.1.5  Greatest-width integer types.
 */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* 7.18.2  Limits of specified-width integer types.
 * (always defined in C, but C++ needs __STDC_LIMIT_MACROS)
 */


/* 7.18.2.1  Limits of exact-width integer types.
 */
# 153 "c:\\vcast\\mingw\\include\\stdint.h" 3
/* 7.18.2.2  Limits of minimum-width integer types.
 */
# 170 "c:\\vcast\\mingw\\include\\stdint.h" 3
/* 7.18.2.3  Limits of fastest minimum-width integer types.
 */
# 187 "c:\\vcast\\mingw\\include\\stdint.h" 3
/* 7.18.2.4  Limits of integer types capable of holding object pointers.
 */
# 199 "c:\\vcast\\mingw\\include\\stdint.h" 3
/* 7.18.2.5  Limits of greatest-width integer types.
 */




/* 7.18.3  Limits of other integer types.
 */
# 215 "c:\\vcast\\mingw\\include\\stdint.h" 3
/* The following pair are also defined in <wchar.h>, but leave them
 * unguarded, so that the compiler may check for consistency.
 */



/* wint_t is unsigned short for compatibility with MS runtime
 */





/* 7.18.4  Macros for integer constants.
 * (always defined in C, but C++ needs __STDC_CONSTANT_MACROS)
 */


/* 7.18.4.1  Macros for minimum-width integer constants
 *
 * According to Douglas Gwyn <gwyn@arl.mil>:
 *  "This spec was changed in ISO/IEC 9899:1999 TC1; in ISO/IEC
 *  9899:1999 as initially published, the expansion was required
 *  to be an integer constant of precisely matching type, which
 *  is impossible to accomplish for the shorter types on most
 *  platforms, because C99 provides no standard way to designate
 *  an integer constant with width less than that of type int.
 *  TC1 changed this to require just an integer constant
 *  EXPRESSION with PROMOTED type".
 */
# 255 "c:\\vcast\\mingw\\include\\stdint.h" 3
/* 7.18.4.2  Macros for greatest-width integer constants.
 */
# 10 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stdint.h" 2 3 4
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdint" 2 3




namespace std
{
  using ::int8_t;
  using ::int16_t;
  using ::int32_t;
  using ::int64_t;

  using ::int_fast8_t;
  using ::int_fast16_t;
  using ::int_fast32_t;
  using ::int_fast64_t;

  using ::int_least8_t;
  using ::int_least16_t;
  using ::int_least32_t;
  using ::int_least64_t;

  using ::intmax_t;
  using ::intptr_t;

  using ::uint8_t;
  using ::uint16_t;
  using ::uint32_t;
  using ::uint64_t;

  using ::uint_fast8_t;
  using ::uint_fast16_t;
  using ::uint_fast32_t;
  using ::uint_fast64_t;

  using ::uint_least8_t;
  using ::uint_least16_t;
  using ::uint_least32_t;
  using ::uint_least64_t;

  using ::uintmax_t;
  using ::uintptr_t;
} // namespace std
# 421 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\char_traits.h" 2 3

namespace std
{


  template<>
    struct char_traits<char16_t>
    {
      typedef char16_t char_type;
      typedef uint_least16_t int_type;
      typedef streamoff off_type;
      typedef u16streampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (lt(__s1[__i], __s2[__i]))
     return -1;
   else if (lt(__s2[__i], __s1[__i]))
     return 1;
 return 0;
      }

      static size_t
      length(const char_type* __s)
      {
 size_t __i = 0;
 while (!eq(__s[__i], char_type()))
   ++__i;
 return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (eq(__s[__i], __a))
     return __s + __i;
 return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   assign(__s[__i], __a);
 return __s;
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };

  template<>
    struct char_traits<char32_t>
    {
      typedef char32_t char_type;
      typedef uint_least32_t int_type;
      typedef streamoff off_type;
      typedef u32streampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (lt(__s1[__i], __s2[__i]))
     return -1;
   else if (lt(__s2[__i], __s1[__i]))
     return 1;
 return 0;
      }

      static size_t
      length(const char_type* __s)
      {
 size_t __i = 0;
 while (!eq(__s[__i], char_type()))
   ++__i;
 return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (eq(__s[__i], __a))
     return __s + __i;
 return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   assign(__s[__i], __a);
 return __s;
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };


} // namespace
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\allocator.h" 1 3
// Allocators -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 * Copyright (c) 1996-1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/allocator.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{memory}
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++allocator.h" 1 3
// Base to std::allocator -*- C++ -*-

// Copyright (C) 2004-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++allocator.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{memory}
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\new_allocator.h" 1 3
// Allocator that wraps operator new -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/new_allocator.h
 *  This file is a GNU extension to the Standard C++ Library.
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 33 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\new_allocator.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\new" 1 3
// The -*- C++ -*- dynamic memory management header.

// Copyright (C) 1994-2016 Free Software Foundation, Inc.

// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
// 
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file new
 *  This is a Standard C++ Library header.
 *
 *  The header @c new defines several functions to manage dynamic memory and
 *  handling memory allocation errors; see
 *  http://gcc.gnu.org/onlinedocs/libstdc++/18_support/howto.html#4 for more.
 */




       
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\new" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\new" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\exception" 1 3
// Exception Handling support header for -*- C++ -*-

// Copyright (C) 1995-2016 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file exception
 *  This is a Standard C++ Library header.
 */




       
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\exception" 3

#pragma GCC visibility push(default)

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\exception" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\atomic_lockfree_defines.h" 1 3
// -*- C++ -*- header.

// Copyright (C) 2008-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/atomic_lockfree_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{atomic}
 */




       
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\atomic_lockfree_defines.h" 3

/**
 * @addtogroup atomics
 * @{
 */

/**
 * Lock-free property.
 *
 * 0 indicates that the types are never lock-free.
 * 1 indicates that the types are sometimes lock-free.
 * 2 indicates that the types are always lock-free.
 */
# 61 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\atomic_lockfree_defines.h" 3
// @} group atomics
# 39 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\exception" 2 3

extern "C++" {

namespace std
{
  /**
   * @defgroup exceptions Exceptions
   * @ingroup diagnostics
   *
   * Classes and functions for reporting errors via exception classes.
   * @{
   */

  /**
   *  @brief Base class for all library exceptions.
   *
   *  This is the base class for all exceptions thrown by the standard
   *  library, and by certain language expressions.  You are free to derive
   *  your own %exception classes, or use a different hierarchy, or to
   *  throw non-class data (e.g., fundamental types).
   */
  class exception
  {
  public:
    exception() noexcept { }
    virtual ~exception() noexcept;

    /** Returns a C-style character string describing the general cause
     *  of the current error.  */
    virtual const char*
    what() const noexcept;
  };

  /** If an %exception is thrown which is not listed in a function's
   *  %exception specification, one of these may be thrown.  */
  class bad_exception : public exception
  {
  public:
    bad_exception() noexcept { }

    // This declaration is not useless:
    // http://gcc.gnu.org/onlinedocs/gcc-3.0.2/gcc_6.html#SEC118
    virtual ~bad_exception() noexcept;

    // See comment in eh_exception.cc.
    virtual const char*
    what() const noexcept;
  };

  /// If you write a replacement %terminate handler, it must be of this type.
  typedef void (*terminate_handler) ();

  /// If you write a replacement %unexpected handler, it must be of this type.
  typedef void (*unexpected_handler) ();

  /// Takes a new handler function as an argument, returns the old function.
  terminate_handler set_terminate(terminate_handler) noexcept;


  /// Return the current terminate handler.
  terminate_handler get_terminate() noexcept;


  /** The runtime will call this function if %exception handling must be
   *  abandoned for any reason.  It can also be called by the user.  */
  void terminate() noexcept __attribute__ ((__noreturn__));

  /// Takes a new handler function as an argument, returns the old function.
  unexpected_handler set_unexpected(unexpected_handler) noexcept;


  /// Return the current unexpected handler.
  unexpected_handler get_unexpected() noexcept;


  /** The runtime will call this function if an %exception is thrown which
   *  violates the function's %exception specification.  */
  void unexpected() __attribute__ ((__noreturn__));

  /** [18.6.4]/1:  'Returns true after completing evaluation of a
   *  throw-expression until either completing initialization of the
   *  exception-declaration in the matching handler or entering @c unexpected()
   *  due to the throw; or after entering @c terminate() for any reason
   *  other than an explicit call to @c terminate().  [Note: This includes
   *  stack unwinding [15.2].  end note]'
   *
   *  2: 'When @c uncaught_exception() is true, throwing an
   *  %exception can result in a call of @c terminate()
   *  (15.5.1).'
   */
  bool uncaught_exception() noexcept __attribute__ ((__pure__));



  /// The number of uncaught exceptions.
  int uncaught_exceptions() noexcept __attribute__ ((__pure__));


  // @} group exceptions
} // namespace std

namespace __gnu_cxx
{


  /**
   *  @brief A replacement for the standard terminate_handler which
   *  prints more information about the terminating exception (if any)
   *  on stderr.
   *
   *  @ingroup exceptions
   *
   *  Call
   *   @code
   *     std::set_terminate(__gnu_cxx::__verbose_terminate_handler)
   *   @endcode
   *  to use.  For more info, see
   *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/bk01pt02ch06s02.html
   *
   *  In 3.4 and later, this is on by default.
   */
  void __verbose_terminate_handler();


} // namespace

} // extern "C++"

#pragma GCC visibility pop


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\exception_ptr.h" 1 3
// Exception Handling support header (exception_ptr class) for -*- C++ -*-

// Copyright (C) 2008-2016 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
// 
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/exception_ptr.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{exception}
 */




#pragma GCC visibility push(default)

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 37 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\exception_ptr.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\exception_defines.h" 1 3
// -fno-exceptions Support -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/exception_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{exception}
 */
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\exception_ptr.h" 2 3





extern "C++" {

namespace std
{
  class type_info;

  /**
   * @addtogroup exceptions
   * @{
   */
  namespace __exception_ptr
  {
    class exception_ptr;
  }

  using __exception_ptr::exception_ptr;

  /** Obtain an exception_ptr to the currently handled exception. If there
   *  is none, or the currently handled exception is foreign, return the null
   *  value.
   */
  exception_ptr current_exception() noexcept;

  /// Throw the object pointed to by the exception_ptr.
  void rethrow_exception(exception_ptr) __attribute__ ((__noreturn__));

  namespace __exception_ptr
  {
    using std::rethrow_exception;

    /**
     *  @brief An opaque pointer to an arbitrary exception.
     *  @ingroup exceptions
     */
    class exception_ptr
    {
      void* _M_exception_object;

      explicit exception_ptr(void* __e) noexcept;

      void _M_addref() noexcept;
      void _M_release() noexcept;

      void *_M_get() const noexcept __attribute__ ((__pure__));

      friend exception_ptr std::current_exception() noexcept;
      friend void std::rethrow_exception(exception_ptr);

    public:
      exception_ptr() noexcept;

      exception_ptr(const exception_ptr&) noexcept;


      exception_ptr(nullptr_t) noexcept
      : _M_exception_object(0)
      { }

      exception_ptr(exception_ptr&& __o) noexcept
      : _M_exception_object(__o._M_exception_object)
      { __o._M_exception_object = 0; }
# 113 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\exception_ptr.h" 3
      exception_ptr&
      operator=(const exception_ptr&) noexcept;


      exception_ptr&
      operator=(exception_ptr&& __o) noexcept
      {
        exception_ptr(static_cast<exception_ptr&&>(__o)).swap(*this);
        return *this;
      }


      ~exception_ptr() noexcept;

      void
      swap(exception_ptr&) noexcept;
# 140 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\exception_ptr.h" 3
      explicit operator bool() const
      { return _M_exception_object; }


      friend bool
      operator==(const exception_ptr&, const exception_ptr&)
 noexcept __attribute__ ((__pure__));

      const class std::type_info*
      __cxa_exception_type() const noexcept
 __attribute__ ((__pure__));
    };

    bool
    operator==(const exception_ptr&, const exception_ptr&)
      noexcept __attribute__ ((__pure__));

    bool
    operator!=(const exception_ptr&, const exception_ptr&)
      noexcept __attribute__ ((__pure__));

    inline void
    swap(exception_ptr& __lhs, exception_ptr& __rhs)
    { __lhs.swap(__rhs); }

  } // namespace __exception_ptr


  /// Obtain an exception_ptr pointing to a copy of the supplied object.
  template<typename _Ex>
    exception_ptr
    make_exception_ptr(_Ex __ex) noexcept
    {

      try
 {
   throw __ex;
 }
      catch(...)
 {
   return current_exception();
 }



    }

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 1130. copy_exception name misleading
  /// Obtain an exception_ptr pointing to a copy of the supplied object.
  /// This function is deprecated, use std::make_exception_ptr instead.
  template<typename _Ex>
    exception_ptr
    copy_exception(_Ex __ex) noexcept __attribute__ ((__deprecated__));

  template<typename _Ex>
    exception_ptr
    copy_exception(_Ex __ex) noexcept
    { return std::make_exception_ptr<_Ex>(__ex); }

  // @} group exceptions
} // namespace std

} // extern "C++"

#pragma GCC visibility pop
# 171 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\exception" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\nested_exception.h" 1 3
// Nested Exception support header (nested_exception class) for -*- C++ -*-

// Copyright (C) 2009-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/nested_exception.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{exception}
 */




#pragma GCC visibility push(default)





# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\nested_exception.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\nested_exception.h" 2 3





extern "C++" {

namespace std
{
  /**
   * @addtogroup exceptions
   * @{
   */

  /// Exception class with exception_ptr data member.
  class nested_exception
  {
    exception_ptr _M_ptr;

  public:
    nested_exception() noexcept : _M_ptr(current_exception()) { }

    nested_exception(const nested_exception&) noexcept = default;

    nested_exception& operator=(const nested_exception&) noexcept = default;

    virtual ~nested_exception() noexcept;

    [[noreturn]]
    void
    rethrow_nested() const
    {
      if (_M_ptr)
 rethrow_exception(_M_ptr);
      std::terminate();
    }

    exception_ptr
    nested_ptr() const noexcept
    { return _M_ptr; }
  };

  template<typename _Except>
    struct _Nested_exception : public _Except, public nested_exception
    {
      explicit _Nested_exception(const _Except& __ex)
      : _Except(__ex)
      { }

      explicit _Nested_exception(_Except&& __ex)
      : _Except(static_cast<_Except&&>(__ex))
      { }
    };

  // [except.nested]/8
  // Throw an exception of unspecified type that is publicly derived from
  // both remove_reference_t<_Tp> and nested_exception.
  template<typename _Tp>
    inline void
    __throw_with_nested_impl(_Tp&& __t, true_type)
    {
      using _Up = typename remove_reference<_Tp>::type;
      throw _Nested_exception<_Up>{std::forward<_Tp>(__t)};
    }

  template<typename _Tp>
    inline void
    __throw_with_nested_impl(_Tp&& __t, false_type)
    { throw std::forward<_Tp>(__t); }

  /// If @p __t is derived from nested_exception, throws @p __t.
  /// Else, throws an implementation-defined object derived from both.
  template<typename _Tp>
    [[noreturn]]
    inline void
    throw_with_nested(_Tp&& __t)
    {
      using _Up = typename remove_reference<_Tp>::type;
      using _CopyConstructible
 = __and_<is_copy_constructible<_Up>, is_move_constructible<_Up>>;
      static_assert(_CopyConstructible::value,
   "throw_with_nested argument must be CopyConstructible");
      using __nest = __and_<is_class<_Up>, __bool_constant<!__is_final(_Up)>,
       __not_<is_base_of<nested_exception, _Up>>>;
      std::__throw_with_nested_impl(std::forward<_Tp>(__t), __nest{});
    }

  // Determine if dynamic_cast<const nested_exception&> would be well-formed.
  template<typename _Tp>
    using __rethrow_if_nested_cond = typename enable_if<
      __and_<is_polymorphic<_Tp>,
      __or_<__not_<is_base_of<nested_exception, _Tp>>,
     is_convertible<_Tp*, nested_exception*>>>::value
    >::type;

  // Attempt dynamic_cast to nested_exception and call rethrow_nested().
  template<typename _Ex>
    inline __rethrow_if_nested_cond<_Ex>
    __rethrow_if_nested_impl(const _Ex* __ptr)
    {
      if (auto __ne_ptr = dynamic_cast<const nested_exception*>(__ptr))
 __ne_ptr->rethrow_nested();
    }

  // Otherwise, no effects.
  inline void
  __rethrow_if_nested_impl(const void*)
  { }

  /// If @p __ex is derived from nested_exception, @p __ex.rethrow_nested().
  template<typename _Ex>
    inline void
    rethrow_if_nested(const _Ex& __ex)
    { std::__rethrow_if_nested_impl(std::__addressof(__ex)); }

  // @} group exceptions
} // namespace std

} // extern "C++"



#pragma GCC visibility pop
# 172 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\exception" 2 3
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{
  /**
   *  @brief  Exception possibly thrown by @c new.
   *  @ingroup exceptions
   *
   *  @c bad_alloc (or classes derived from it) is used to report allocation
   *  errors from the throwing forms of @c new.  */
  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }

    // This declaration is not useless:
    // http://gcc.gnu.org/onlinedocs/gcc-3.0.2/gcc_6.html#SEC118
    virtual ~bad_alloc() throw();

    // See comment in eh_exception.cc.
    virtual const char* what() const throw();
  };


  class bad_array_new_length : public bad_alloc
  {
  public:
    bad_array_new_length() throw() { };

    // This declaration is not useless:
    // http://gcc.gnu.org/onlinedocs/gcc-3.0.2/gcc_6.html#SEC118
    virtual ~bad_array_new_length() throw();

    // See comment in eh_exception.cc.
    virtual const char* what() const throw();
  };


  struct nothrow_t
  {

    explicit nothrow_t() = default;

  };

  extern const nothrow_t nothrow;

  /** If you write your own error handler to be called by @c new, it must
   *  be of this type.  */
  typedef void (*new_handler)();

  /// Takes a replacement handler as the argument, returns the
  /// previous handler.
  new_handler set_new_handler(new_handler) throw();


  /// Return the current new handler.
  new_handler get_new_handler() noexcept;

} // namespace std

//@{
/** These are replaceable signatures:
 *  - normal single new and delete (no arguments, throw @c bad_alloc on error)
 *  - normal array new and delete (same)
 *  - @c nothrow single new and delete (take a @c nothrow argument, return
 *    @c NULL on error)
 *  - @c nothrow array new and delete (same)
 *
 *  Placement new and delete signatures (take a memory address argument,
 *  does nothing) may not be replaced by a user's program.
*/
void* operator new(std::size_t)
  __attribute__((__externally_visible__));
void* operator new[](std::size_t)
  __attribute__((__externally_visible__));
void operator delete(void*) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*) noexcept
  __attribute__((__externally_visible__));

void operator delete(void*, std::size_t) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*, std::size_t) noexcept
  __attribute__((__externally_visible__));

void* operator new(std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void* operator new[](std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete(void*, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));

void operator delete(void*, std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*, std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));


// Default placement versions of operator new.
inline void* operator new(std::size_t, void* __p) noexcept
{ return __p; }
inline void* operator new[](std::size_t, void* __p) noexcept
{ return __p; }

// Default placement versions of operator delete.
inline void operator delete (void*, void*) noexcept { }
inline void operator delete[](void*, void*) noexcept { }
//@}
} // extern "C++"

#pragma GCC visibility pop
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\new_allocator.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functexcept.h" 1 3
// Function-Based Exception Support -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/functexcept.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{exception}
 *
 *  This header provides support for -fno-exceptions.
 */

//
// ISO C++ 14882: 19.1  Exception classes
//
# 35 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\new_allocator.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\new_allocator.h" 2 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 1 3
// C++11 <type_traits> -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/type_traits
 *  This is a Standard C++ Library header.
 */
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\new_allocator.h" 2 3


namespace __gnu_cxx
{


  using std::size_t;
  using std::ptrdiff_t;

  /**
   *  @brief  An allocator that uses global new, as per [20.4].
   *  @ingroup allocators
   *
   *  This is precisely the allocator defined in the C++ Standard. 
   *    - all allocation calls operator new
   *    - all deallocation calls operator delete
   *
   *  @tparam  _Tp  Type of allocated object.
   */
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };


      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 2103. propagate_on_container_move_assignment
      typedef std::true_type propagate_on_container_move_assignment;


      new_allocator() noexcept { }

      new_allocator(const new_allocator&) noexcept { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) noexcept { }

      ~new_allocator() noexcept { }

      pointer
      address(reference __x) const noexcept
      { return std::__addressof(__x); }

      const_pointer
      address(const_reference __x) const noexcept
      { return std::__addressof(__x); }

      // NB: __n is permitted to be 0.  The C++ standard says nothing
      // about what the return value is when __n == 0.
      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }

      // __p is not permitted to be a null pointer.
      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const noexcept
      { return size_t(-1) / sizeof(_Tp); }


      template<typename _Up, typename... _Args>
        void
        construct(_Up* __p, _Args&&... __args)
 { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }

      template<typename _Up>
        void
        destroy(_Up* __p) { __p->~_Up(); }
# 135 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\new_allocator.h" 3
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }


} // namespace
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++allocator.h" 2 3


namespace std
{
  /**
   *  @brief  An alias to the base class for std::allocator.
   *  @ingroup allocators
   *
   *  Used to set the std::allocator base class to
   *  __gnu_cxx::new_allocator.
   *
   *  @tparam  _Tp  Type of allocated object.
    */
  template<typename _Tp>
    using __allocator_base = __gnu_cxx::new_allocator<_Tp>;
}
# 47 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\allocator.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\memoryfwd.h" 1 3
// <memory> Forward declarations -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 * Copyright (c) 1996-1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/memoryfwd.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{memory}
 */
# 48 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\allocator.h" 2 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\type_traits" 1 3
// C++11 <type_traits> -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/type_traits
 *  This is a Standard C++ Library header.
 */
# 50 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\allocator.h" 2 3







namespace std
{


  /**
   *  @addtogroup allocators
   *  @{
   */

  /// allocator<void> specialization.
  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };


      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 2103. std::allocator propagate_on_container_move_assignment
      typedef true_type propagate_on_container_move_assignment;

      typedef true_type is_always_equal;

      template<typename _Up, typename... _Args>
 void
 construct(_Up* __p, _Args&&... __args)
 { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }

      template<typename _Up>
 void
 destroy(_Up* __p) { __p->~_Up(); }

    };

  /**
   * @brief  The @a standard allocator, as per [20.4].
   *
   *  See https://gcc.gnu.org/onlinedocs/libstdc++/manual/memory.html#std.util.memory.allocator
   *  for further details.
   *
   *  @tparam  _Tp  Type of allocated object.
   */
  template<typename _Tp>
    class allocator: public __allocator_base<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };


      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 2103. std::allocator propagate_on_container_move_assignment
      typedef true_type propagate_on_container_move_assignment;

      typedef true_type is_always_equal;


      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __allocator_base<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }

      // Inherit everything else.
    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    noexcept
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    noexcept
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    noexcept
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    noexcept
    { return false; }

  /// @} group allocator

  // Inhibit implicit instantiations for required instantiations,
  // which are defined via explicit instantiations elsewhere.

  extern template class allocator<char>;
  extern template class allocator<wchar_t>;


  // Undefine.


  // To implement Option 3 of DR 431.
  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) noexcept { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two) noexcept
      {
 // Precondition: swappable allocators.
 if (__one != __two)
   swap(__one, __two);
      }
    };

  // Optimize for stateless allocators.
  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };


  template<typename _Tp, bool
    = __or_<is_copy_constructible<typename _Tp::value_type>,
            is_nothrow_move_constructible<typename _Tp::value_type>>::value>
    struct __shrink_to_fit_aux
    { static bool _S_do_it(_Tp&) noexcept { return false; } };

  template<typename _Tp>
    struct __shrink_to_fit_aux<_Tp, true>
    {
      static bool
      _S_do_it(_Tp& __c) noexcept
      {

 try
   {
     _Tp(__make_move_if_noexcept_iterator(__c.begin()),
  __make_move_if_noexcept_iterator(__c.end()),
  __c.get_allocator()).swap(__c);
     return true;
   }
 catch(...)
   { return false; }



      }
    };



} // namespace std
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cpp_type_traits.h" 1 3
// The  -*- C++ -*- type traits classes for internal use in libstdc++

// Copyright (C) 2000-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cpp_type_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{ext/type_traits}
 */

// Written by Gabriel Dos Reis <dosreis@cmla.ens-cachan.fr>
# 43 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\localefwd.h" 1 3
// <locale> Forward declarations -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/localefwd.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{locale}
 */

//
// ISO C++ 14882: 22.1  Locales
//




       
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\localefwd.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\localefwd.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++locale.h" 1 3
// Wrapper for underlying C-language localization -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++locale.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{locale}
 */

//
// ISO C++ 14882: 22.8  Standard locale categories.
//

// Written by Benjamin Kosnik <bkoz@redhat.com>




       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++locale.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\clocale" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file clocale
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c locale.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 18.2.2  Implementation properties: C library
//

       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\clocale" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\clocale" 2 3
# 1 "c:\\vcast\\mingw\\include\\locale.h" 1 3
/*
 * locale.h
 *
 * Functions and types for localization (ie. changing the appearance of
 * output based on the standards of a certain country, or region).
 *
 * $Id: locale.h,v a3059ad5ee79 2016/06/12 19:22:07 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997, 1999-2001, 2003, 2004, 2007, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\locale.h" 3

/* Some headers will include this file, just to acquire a globally
 * consistent definition for the opaque locale_t data object type; it
 * is only useful on Vista, or for users of non-free MSVCR80.DLL, (or
 * its later derivatives), so, when either of these is applicable,
 * ensure that we define it, (if we haven't done so already).
 */
# 63 "c:\\vcast\\mingw\\include\\locale.h" 3
/* When we are interested in more than just locale_t...
 */

/* ...content from <locale.h> is selectively shared with <wchar.h>;
 * defer definition of the normal repeat inclusion guard, until...
 */

 /* ...we have confirmed that this inclusion is NOT the <wchar.h>
  * selective request, or just a __need_locale_t request.
  */


/* All MinGW headers should include <_mingw.h>; do so only when NOT
 * sourced by <wchar.h>, (which should have included it already).
 */
# 90 "c:\\vcast\\mingw\\include\\locale.h" 3
/* Both ISO-C and POSIX stipulate that <locale.h> should reproduce the
 * definition of NULL, from <stddef.h>; although not required by either
 * standard, we also require wchar_t, to support our declaration of the
 * Microsoft specific _wsetlocale() function, below.
 */


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 98 "c:\\vcast\\mingw\\include\\locale.h" 2 3

struct lconv
{ /* The structure returned by the localeconv() function.
   *
   * AUTHOR'S NOTE:
   * I have tried to test this, but I am limited by my knowledge of
   * locale issues. The structure does not bomb if you look at the
   * values, and 'decimal_point' even seems to be correct, but the
   * rest of the values may, by default, not be particularly useful;
   * indeed, they may even be meaningless, and in no way related to
   * the international settings of the system.
   */
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
};






extern "C" {


 /* The following pair of function prototypes are to be declared
  * only when including <locale.h> in its own right, (i.e. when NOT
  * sourced by <wchar.h>)...
  */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *setlocale (int, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) struct lconv *localeconv (void);


 /* ...whereas, this must be declared in either case; (note that it
  * not necessary to guard against a possible repeat declaration, as
  * the compiler should accept this, without complaint, provided any
  * prior declaration is consistent).
  */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wsetlocale (int, const wchar_t *);
# 178 "c:\\vcast\\mingw\\include\\locale.h" 3
}




/* We've already handled any pending __need_locale_t request; ensure
 * that we cancel it, so that any more comprehensive further request,
 * before _LOCALE_H is defined, will be handled appropriately.
 */
# 43 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\clocale" 2 3




// Get rid of those macros defined in <locale.h> in lieu of real functions.



namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
} // namespace std
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++locale.h" 2 3



namespace std
{


  typedef int* __c_locale;

  // Convert numeric value of type double and long double to string and
  // return length of string.  If vsnprintf is available use it, otherwise
  // fall back to the unsafe vsprintf which, in general, can be dangerous
  // and should be avoided.
  inline int
  __convert_from_v(const __c_locale&, char* __out,
     const int __size __attribute__((__unused__)),
     const char* __fmt, ...)
  {
    char* __old = std::setlocale(4, 0);
    char* __sav = 0;
    if (__builtin_strcmp(__old, "C"))
      {
 const size_t __len = __builtin_strlen(__old) + 1;
 __sav = new char[__len];
 __builtin_memcpy(__sav, __old, __len);
 std::setlocale(4, "C");
      }

    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);

    if (__sav)
      {
 std::setlocale(4, __sav);
 delete [] __sav;
      }
    return __ret;
  }


} // namespace
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\localefwd.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\iosfwd" 1 3
// <iosfwd> Forward declarations -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/iosfwd
 *  This is a Standard C++ Library header.
 */

//
// ISO C++ 14882: 27.2  Forward declarations
//




       
# 37 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\iosfwd" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 39 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\iosfwd" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stringfwd.h" 1 3
// <string> Forward declarations -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/stringfwd.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{string}
 */

//
// ISO C++ 14882: 21 Strings library
//
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\iosfwd" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\postypes.h" 1 3
// Position types -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/postypes.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */

//
// ISO C++ 14882: 27.4.1 - Types
// ISO C++ 14882: 27.4.3 - Template class fpos
//
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\iosfwd" 2 3

namespace std
{


  /**
   *  @defgroup io I/O
   *
   *  Nearly all of the I/O classes are parameterized on the type of
   *  characters they read and write.  (The major exception is ios_base at
   *  the top of the hierarchy.)  This is a change from pre-Standard
   *  streams, which were not templates.
   *
   *  For ease of use and compatibility, all of the basic_* I/O-related
   *  classes are given typedef names for both of the builtin character
   *  widths (wide and narrow).  The typedefs are the same as the
   *  pre-Standard names, for example:
   *
   *  @code
   *     typedef basic_ifstream<char>  ifstream;
   *  @endcode
   *
   *  Because properly forward-declaring these classes can be difficult, you
   *  should not do it yourself.  Instead, include the &lt;iosfwd&gt;
   *  header, which contains only declarations of all the I/O classes as
   *  well as the typedefs.  Trying to forward-declare the typedefs
   *  themselves (e.g., <code>class ostream;</code>) is not valid ISO C++.
   *
   *  For more specific declarations, see
   *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/io.html#std.io.objects
   *
   *  @{
  */
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;


namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

}

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;


  /// Base class for @c char streams.
  typedef basic_ios<char> ios;

  /// Base class for @c char buffers.
  typedef basic_streambuf<char> streambuf;

  /// Base class for @c char input streams.
  typedef basic_istream<char> istream;

  /// Base class for @c char output streams.
  typedef basic_ostream<char> ostream;

  /// Base class for @c char mixed input and output streams.
  typedef basic_iostream<char> iostream;

  /// Class for @c char memory buffers.
  typedef basic_stringbuf<char> stringbuf;

  /// Class for @c char input memory streams.
  typedef basic_istringstream<char> istringstream;

  /// Class for @c char output memory streams.
  typedef basic_ostringstream<char> ostringstream;

  /// Class for @c char mixed input and output memory streams.
  typedef basic_stringstream<char> stringstream;

  /// Class for @c char file buffers.
  typedef basic_filebuf<char> filebuf;

  /// Class for @c char input file streams.
  typedef basic_ifstream<char> ifstream;

  /// Class for @c char output file streams.
  typedef basic_ofstream<char> ofstream;

  /// Class for @c char mixed input and output file streams.
  typedef basic_fstream<char> fstream;


  /// Base class for @c wchar_t streams.
  typedef basic_ios<wchar_t> wios;

  /// Base class for @c wchar_t buffers.
  typedef basic_streambuf<wchar_t> wstreambuf;

  /// Base class for @c wchar_t input streams.
  typedef basic_istream<wchar_t> wistream;

  /// Base class for @c wchar_t output streams.
  typedef basic_ostream<wchar_t> wostream;

  /// Base class for @c wchar_t mixed input and output streams.
  typedef basic_iostream<wchar_t> wiostream;

  /// Class for @c wchar_t memory buffers.
  typedef basic_stringbuf<wchar_t> wstringbuf;

  /// Class for @c wchar_t input memory streams.
  typedef basic_istringstream<wchar_t> wistringstream;

  /// Class for @c wchar_t output memory streams.
  typedef basic_ostringstream<wchar_t> wostringstream;

  /// Class for @c wchar_t mixed input and output memory streams.
  typedef basic_stringstream<wchar_t> wstringstream;

  /// Class for @c wchar_t file buffers.
  typedef basic_filebuf<wchar_t> wfilebuf;

  /// Class for @c wchar_t input file streams.
  typedef basic_ifstream<wchar_t> wifstream;

  /// Class for @c wchar_t output file streams.
  typedef basic_ofstream<wchar_t> wofstream;

  /// Class for @c wchar_t mixed input and output file streams.
  typedef basic_fstream<wchar_t> wfstream;

  /** @}  */


} // namespace
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\localefwd.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cctype" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cctype
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c ctype.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: <ccytpe>
//

       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cctype" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cctype" 2 3
# 1 "c:\\vcast\\mingw\\include\\ctype.h" 1 3
/*
 * ctype.h
 *
 * Functions for character classification and conversion.
 *
 * $Id: ctype.h,v 6895efd6bc57 2017/01/29 10:09:49 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2008, 2016, 2017, MinGW.org Project
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 34 "c:\\vcast\\mingw\\include\\ctype.h" 3


/* All MinGW headers must include <_mingw.h>
 */


/* Although conflicting with both ISO-C and POSIX, Microsoft say that,
 * in addition to the single byte character classification API which is
 * properly declared here, this file should also declare elements of the
 * wide classification API, which is properly declared in <wctype.h>
 *
 * To avoid the burden of maintaining duplicate declarations in two
 * locations, we keep the wide character declarations where ISO-C and
 * POSIX say they belong, in <wctype.h>, while accommodating Microsoft
 * compatibility by providing for selective inclusion of the relevant
 * elements of it here.  (Note that we must do this early, because to
 * avoid duplication, we delegate the definition of common character
 * classification macros, with the exception of _LEADBYTE, which is
 * not required in both headers, to <wctype.h>; we use the quoted
 * form of inclusion here, to ensure that we get our own "wctype.h",
 * and not any predecessor which may have been insinuated into the
 * system include path, and which may interfere with our mechanism
 * for partial inclusion of shared header content).
 */

# 1 "c:\\vcast\\mingw\\include\\wctype.h" 1 3
/*
 * wctype.h
 *
 * Functions for wide character classification and conversion.
 *
 * $Id: wctype.h,v 6895efd6bc57 2017/01/29 10:09:49 keithmarshall $
 *
 * Written by Mumit Khan <khan@xraylith.wisc.edu>
 * Copyright (C) 1999-2003, 2005-2007, 2016, 2017, MinGW.org Project
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
# 60 "c:\\vcast\\mingw\\include\\ctype.h" 2 3

/* This is the one character classification macro, for which definition
 * is NOT delegated to <wctype.h>
 */




extern "C" {

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isalnum(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isalpha(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscntrl(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isdigit(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isgraph(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int islower(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isleadbyte (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isprint(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ispunct(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isspace(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isupper(int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isxdigit(int);


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int isblank (int);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _isctype (int, int);


/* These are ISO-C conforming functions, with correct checking of
 * argument; they are exported by MSVCRT.DLL, and by CRTDLL.DLL as
 * such, and are NOT simply old-name mapped variants; however...
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int tolower (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int toupper (int);


/* ...Microsoft's beloved underscore decorated variants are also
 * exported.  These are cheap non-standard versions: their return
 * values are undefined if the argument is not an ASCII character,
 * or is not of appropriate case for the requested conversion.
 *
 * Note that these appear to be approximately equivalent to POSIX
 * macros of the same names, (declared obsolescent in POSIX.1-2008),
 * but are implemented as DLL functions, rather than macros.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _tolower (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _toupper (int);



/* FIXME: also defined in stdlib.h; should be factored into ONE
 * location ONLY, and included into the other.
 */



    extern __attribute__((__dllimport__)) int __mb_cur_max;
# 140 "c:\\vcast\\mingw\\include\\ctype.h" 3
  extern __attribute__((__dllimport__)) unsigned short _ctype[];



  extern __attribute__((__dllimport__)) unsigned short *_pctype;
# 167 "c:\\vcast\\mingw\\include\\ctype.h" 3
/* Use inlines here rather than macros, because macros will upset
 * C++ usage (eg, ::isalnum), and so usually get undefined
 *
 * According to standard for SB chars, these function are defined only
 * for input values representable by unsigned char or EOF.
 * Thus, there is no range test.
 * This reproduces behaviour of MSVCRT.dll lib implemention for SB chars.
 *
 * If no MB char support is needed, these can be simplified even
 * more by command line define -DMB_CUR_MAX=1.  The compiler will then
 * optimise away the constant condition.
 */
# 240 "c:\\vcast\\mingw\\include\\ctype.h" 3
inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int isleadbyte (int c)
{ return (_pctype[(unsigned char)(c)] & 0x8000); }


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __isascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __toascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __iscsymf (int); /* Valid as first character in a C symbol */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __iscsym (int); /* Valid character in C symbol (after first) */
# 266 "c:\\vcast\\mingw\\include\\ctype.h" 3
/* Not _CRTIMP */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int isascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int toascii (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscsymf (int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int iscsym (int);




}
# 43 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cctype" 2 3




// Get rid of those macros defined in <ctype.h> in lieu of real functions.
# 62 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cctype" 3
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
} // namespace std
# 43 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\localefwd.h" 2 3

namespace std
{


  /** 
   *  @defgroup locales Locales
   *
   *  Classes and functions for internationalization and localization.
   */

  // 22.1.1 Locale
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);

  // 22.1.3 Convenience interfaces
  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);


  template<typename _CharT>
    bool
    isblank(_CharT, const locale&);


  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);

  // 22.2.1 and 22.2.1.3 ctype
  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;
  // NB: Specialized for char and wchar_t in locale_facets.h.

  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;

  // 22.2.2 and 22.2.3 numeric

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

namespace __cxx11 {
  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;
}

namespace __cxx11 {
  // 22.2.4 collation
  template<typename _CharT>
    class collate;
  template<typename _CharT>
    class collate_byname;
}

  // 22.2.5 date and time
  class time_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
}
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;

  // 22.2.6 money
  class money_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;
}
namespace __cxx11 {
  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;
}

  // 22.2.7 message retrieval
  class messages_base;
namespace __cxx11 {
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;
}


} // namespace std
# 44 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ostream_insert.h" 1 3
// Helpers for ostream inserters -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/ostream_insert.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{ostream}
 */




       
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ostream_insert.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\iosfwd" 1 3
// <iosfwd> Forward declarations -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/iosfwd
 *  This is a Standard C++ Library header.
 */

//
// ISO C++ 14882: 27.2  Forward declarations
//
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ostream_insert.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cxxabi_forced.h" 1 3
// cxxabi.h subset for cancellation -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
// 
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cxxabi_forced.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{cxxabi.h}
 */




       
# 35 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cxxabi_forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{
  /** 
   *  @brief Thrown as part of forced unwinding.
   *  @ingroup exceptions
   *
   *  A magic placeholder class that can be caught by reference to
   *  recognize forced unwinding.
   */
  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();

    // Prevent catch by value.
    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 37 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ostream_insert.h" 2 3

namespace std
{


  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }

  // Inhibit implicit instantiations for required instantiations,
  // which are defined via explicit instantiations elsewhere.

  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);




} // namespace std
# 45 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_types.h" 1 3
// Types used in iterator implementation -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_iterator_base_types.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 *
 *  This file contains all of the general iterator-related utility types,
 *  such as iterator_traits and struct iterator.
 */
# 46 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator_base_funcs.h" 1 3
// Functions used by iterators -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_iterator_base_funcs.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 *
 *  This file contains all of the general iterator-related utility
 *  functions, such as distance() and advance().
 */
# 47 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_iterator.h" 1 3
// Iterators -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_iterator.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 *
 *  This file implements reverse_iterator, back_insert_iterator,
 *  front_insert_iterator, insert_iterator, __normal_iterator, and their
 *  supporting functions and overloaded operators.
 */
# 48 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 1 3
// Functor implementations -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_function.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{functional}
 */





# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */
# 61 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 2 3


namespace std
{


  // 20.3.1 base classes
  /** @defgroup functors Function Objects
   * @ingroup utilities
   *
   *  Function objects, or @e functors, are objects with an @c operator()
   *  defined and accessible.  They can be passed as arguments to algorithm
   *  templates and used in place of a function pointer.  Not only is the
   *  resulting expressiveness of the library increased, but the generated
   *  code can be more efficient than what you might write by hand.  When we
   *  refer to @a functors, then, generally we include function pointers in
   *  the description as well.
   *
   *  Often, functors are only created as temporaries passed to algorithm
   *  calls, rather than being created as named variables.
   *
   *  Two examples taken from the standard itself follow.  To perform a
   *  by-element addition of two vectors @c a and @c b containing @c double,
   *  and put the result in @c a, use
   *  \code
   *  transform (a.begin(), a.end(), b.begin(), a.begin(), plus<double>());
   *  \endcode
   *  To negate every element in @c a, use
   *  \code
   *  transform(a.begin(), a.end(), a.begin(), negate<double>());
   *  \endcode
   *  The addition and negation functions will be inlined directly.
   *
   *  The standard functors are derived from structs named @c unary_function
   *  and @c binary_function.  These two classes contain nothing but typedefs,
   *  to aid in generic (template) programming.  If you write your own
   *  functors, you might consider doing the same.
   *
   *  @{
   */
  /**
   *  This is one of the @link functors functor base classes@endlink.
   */
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      /// @c argument_type is the type of the argument
      typedef _Arg argument_type;

      /// @c result_type is the return type
      typedef _Result result_type;
    };

  /**
   *  This is one of the @link functors functor base classes@endlink.
   */
  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      /// @c first_argument_type is the type of the first argument
      typedef _Arg1 first_argument_type;

      /// @c second_argument_type is the type of the second argument
      typedef _Arg2 second_argument_type;

      /// @c result_type is the return type
      typedef _Result result_type;
    };
  /** @}  */

  // 20.3.2 arithmetic
  /** @defgroup arithmetic_functors Arithmetic Classes
   * @ingroup functors
   *
   *  Because basic math often needs to be done during an algorithm,
   *  the library provides functors for those operations.  See the
   *  documentation for @link functors the base classes@endlink
   *  for examples of their use.
   *
   *  @{
   */


  struct __is_transparent; // undefined

  template<typename _Tp = void>
    struct plus;

  template<typename _Tp = void>
    struct minus;

  template<typename _Tp = void>
    struct multiplies;

  template<typename _Tp = void>
    struct divides;

  template<typename _Tp = void>
    struct modulus;

  template<typename _Tp = void>
    struct negate;


  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };





  template<>
    struct plus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) + std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) + std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) + std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<>
    struct minus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) - std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) - std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) - std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<>
    struct multiplies<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) * std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) * std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) * std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<>
    struct divides<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) / std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) / std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) / std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<>
    struct modulus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) % std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) % std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) % std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link arithmetic_functors math functors@endlink.
  template<>
    struct negate<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(-std::forward<_Tp>(__t)))
 -> decltype(-std::forward<_Tp>(__t))
 { return -std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };

  /** @}  */

  // 20.3.3 comparisons
  /** @defgroup comparison_functors Comparison Classes
   * @ingroup functors
   *
   *  The library provides six wrapper functors for all the basic comparisons
   *  in C++, like @c <.
   *
   *  @{
   */

  template<typename _Tp = void>
    struct equal_to;

  template<typename _Tp = void>
    struct not_equal_to;

  template<typename _Tp = void>
    struct greater;

  template<typename _Tp = void>
    struct less;

  template<typename _Tp = void>
    struct greater_equal;

  template<typename _Tp = void>
    struct less_equal;


  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };


  /// One of the @link comparison_functors comparison functors@endlink.
  template<>
    struct equal_to<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) == std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) == std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) == std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<>
    struct not_equal_to<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) != std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) != std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) != std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<>
    struct greater<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) > std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) > std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) > std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<>
    struct less<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) < std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) < std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) < std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<>
    struct greater_equal<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) >= std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) >= std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) >= std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link comparison_functors comparison functors@endlink.
  template<>
    struct less_equal<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) <= std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) <= std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) <= std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /** @}  */

  // 20.3.4 logical operations
  /** @defgroup logical_functors Boolean Operations Classes
   * @ingroup functors
   *
   *  Here are wrapper functors for Boolean operations: @c &&, @c ||,
   *  and @c !.
   *
   *  @{
   */

  template<typename _Tp = void>
    struct logical_and;

  template<typename _Tp = void>
    struct logical_or;

  template<typename _Tp = void>
    struct logical_not;


  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };

  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };

  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };


  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<>
    struct logical_and<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) && std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) && std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) && std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<>
    struct logical_or<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) || std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) || std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) || std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<>
    struct logical_not<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(!std::forward<_Tp>(__t)))
 -> decltype(!std::forward<_Tp>(__t))
 { return !std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };

  /** @}  */


  template<typename _Tp = void>
    struct bit_and;

  template<typename _Tp = void>
    struct bit_or;

  template<typename _Tp = void>
    struct bit_xor;

  template<typename _Tp = void>
    struct bit_not;


  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 660. Missing Bitwise Operations.
  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };

  template<typename _Tp>
    struct bit_not : public unary_function<_Tp, _Tp>
    {
    constexpr
      _Tp
      operator()(const _Tp& __x) const
      { return ~__x; }
    };


  template <>
    struct bit_and<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) & std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) & std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) & std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_or<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) | std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) | std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) | std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_xor<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) ^ std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) ^ std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) ^ std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_not<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(~std::forward<_Tp>(__t)))
 -> decltype(~std::forward<_Tp>(__t))
 { return ~std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };


  // 20.3.5 negators
  /** @defgroup negators Negators
   * @ingroup functors
   *
   *  The functions @c not1 and @c not2 each take a predicate functor
   *  and return an instance of @c unary_negate or
   *  @c binary_negate, respectively.  These classes are functors whose
   *  @c operator() performs the stored predicate function and then returns
   *  the negation of the result.
   *
   *  For example, given a vector of integers and a trivial predicate,
   *  \code
   *  struct IntGreaterThanThree
   *    : public std::unary_function<int, bool>
   *  {
   *      bool operator() (int x) { return x > 3; }
   *  };
   *
   *  std::find_if (v.begin(), v.end(), not1(IntGreaterThanThree()));
   *  \endcode
   *  The call to @c find_if will locate the first index (i) of @c v for which
   *  <code>!(v[i] > 3)</code> is true.
   *
   *  The not1/unary_negate combination works on predicates taking a single
   *  argument.  The not2/binary_negate combination works on predicates which
   *  take two arguments.
   *
   *  @{
   */
  /// One of the @link negators negation functors@endlink.
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    
# 744 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 744 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
            :
      _Predicate _M_pred;

    public:
      constexpr
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      constexpr
      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };

  /// One of the @link negators negation functors@endlink.
  template<typename _Predicate>
    constexpr
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }

  /// One of the @link negators negation functors@endlink.
  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    
# 771 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 771 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
            :
      _Predicate _M_pred;

    public:
      constexpr
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      constexpr
      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };

  /// One of the @link negators negation functors@endlink.
  template<typename _Predicate>
    constexpr
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
  /** @}  */

  // 20.3.7 adaptors pointers functions
  /** @defgroup pointer_adaptors Adaptors for pointers to functions
   * @ingroup functors
   *
   *  The advantage of function objects over pointers to functions is that
   *  the objects in the standard library declare nested typedefs describing
   *  their argument and result types with uniform names (e.g., @c result_type
   *  from the base classes @c unary_function and @c binary_function).
   *  Sometimes those typedefs are required, not just optional.
   *
   *  Adaptors are provided to turn pointers to unary (single-argument) and
   *  binary (double-argument) functions into function objects.  The
   *  long-winded functor @c pointer_to_unary_function is constructed with a
   *  function pointer @c f, and its @c operator() called with argument @c x
   *  returns @c f(x).  The functor @c pointer_to_binary_function does the same
   *  thing, but with a double-argument @c f and @c operator().
   *
   *  The function @c ptr_fun takes a pointer-to-function @c f and constructs
   *  an instance of the appropriate functor.
   *
   *  @{
   */
  /// One of the @link pointer_adaptors adaptors for function pointers@endlink.
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    
# 820 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 820 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
            :
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };

  /// One of the @link pointer_adaptors adaptors for function pointers@endlink.
  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }

  /// One of the @link pointer_adaptors adaptors for function pointers@endlink.
  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    
# 846 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 846 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
            :
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };

  /// One of the @link pointer_adaptors adaptors for function pointers@endlink.
  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }
  /** @}  */

  template<typename _Tp>
    struct _Identity
    : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st
    : public unary_function<_Pair, typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }


      template<typename _Pair2>
        typename _Pair2::first_type&
        operator()(_Pair2& __x) const
        { return __x.first; }

      template<typename _Pair2>
        const typename _Pair2::first_type&
        operator()(const _Pair2& __x) const
        { return __x.first; }

    };

  template<typename _Pair>
    struct _Select2nd
    : public unary_function<_Pair, typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };

  // 20.3.8 adaptors pointers members
  /** @defgroup memory_adaptors Adaptors for pointers to members
   * @ingroup functors
   *
   *  There are a total of 8 = 2^3 function objects in this family.
   *   (1) Member functions taking no arguments vs member functions taking
   *        one argument.
   *   (2) Call through pointer vs call through reference.
   *   (3) Const vs non-const member function.
   *
   *  All of this complexity is in the function objects themselves.  You can
   *   ignore it by using the helper function mem_fun and mem_fun_ref,
   *   which create whichever type of adaptor is appropriate.
   *
   *  @{
   */
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    
# 949 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 949 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
          :
      _Ret (_Tp::*_M_f)();
    };

  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    
# 967 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 967 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
          :
      _Ret (_Tp::*_M_f)() const;
    };

  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    
# 985 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 985 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
          :
      _Ret (_Tp::*_M_f)();
  };

  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    
# 1003 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 1003 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
          :
      _Ret (_Tp::*_M_f)() const;
    };

  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    
# 1021 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 1021 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
          :
      _Ret (_Tp::*_M_f)(_Arg);
    };

  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    
# 1039 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 1039 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
          :
      _Ret (_Tp::*_M_f)(_Arg) const;
    };

  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    
# 1057 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 1057 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
          :
      _Ret (_Tp::*_M_f)(_Arg);
    };

  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    
# 1075 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h"
   public
# 1075 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 3
          :
      _Ret (_Tp::*_M_f)(_Arg) const;
    };

  // Mem_fun adaptor helper functions.  There are only two:
  // mem_fun and mem_fun_ref.
  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  /** @}  */


} // namespace


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\backward\\binders.h" 1 3
// Functor implementations -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file backward/binders.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{functional}
 */




// Suppress deprecated warning for this file.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

namespace std
{


  // 20.3.6 binders
  /** @defgroup binders Binder Classes
   * @ingroup functors
   *
   *  Binders turn functions/functors with two arguments into functors
   *  with a single argument, storing an argument to be applied later.
   *  For example, a variable @c B of type @c binder1st is constructed
   *  from a functor @c f and an argument @c x. Later, B's @c
   *  operator() is called with a single argument @c y. The return
   *  value is the value of @c f(x,y). @c B can be @a called with
   *  various arguments (y1, y2, ...) and will in turn call @c
   *  f(x,y1), @c f(x,y2), ...
   *
   *  The function @c bind1st is provided to save some typing. It takes the
   *  function and an argument as parameters, and returns an instance of
   *  @c binder1st.
   *
   *  The type @c binder2nd and its creator function @c bind2nd do the same
   *  thing, but the stored argument is passed as the second parameter instead
   *  of the first, e.g., @c bind2nd(std::minus<float>(),1.3) will create a
   *  functor whose @c operator() accepts a floating-point number, subtracts
   *  1.3 from it, and returns the result. (If @c bind1st had been used,
   *  the functor would perform <em>1.3 - x</em> instead.
   *
   *  Creator-wrapper functions like @c bind1st are intended to be used in
   *  calling algorithms. Their return values will be temporary objects.
   *  (The goal is to not require you to type names like
   *  @c std::binder1st<std::plus<int>> for declaring a variable to hold the
   *  return value from @c bind1st(std::plus<int>(),5).
   *
   *  These become more useful when combined with the composition functions.
   *
   *  These functions are deprecated in C++11 and can be replaced by
   *  @c std::bind (or @c std::tr1::bind) which is more powerful and flexible,
   *  supporting functions with any number of arguments.  Uses of @c bind1st
   *  can be replaced by @c std::bind(f, x, std::placeholders::_1) and
   *  @c bind2nd by @c std::bind(f, std::placeholders::_1, x).
   *  @{
   */
  /// One of the @link binders binder functors@endlink.
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    
# 112 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\backward\\binders.h"
   public
# 112 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\backward\\binders.h" 3
            :
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }

      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 109.  Missing binders for non-const sequence elements
      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } __attribute__ ((__deprecated__));

  /// One of the @link binders binder functors@endlink.
  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }

  /// One of the @link binders binder functors@endlink.
  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    
# 147 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\backward\\binders.h"
   public
# 147 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\backward\\binders.h" 3
            :
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }

      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 109.  Missing binders for non-const sequence elements
      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } __attribute__ ((__deprecated__));

  /// One of the @link binders binder functors@endlink.
  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }
  /** @}  */


} // namespace

#pragma GCC diagnostic pop
# 1128 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_function.h" 2 3
# 49 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 1 3
// -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/numeric_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
# 50 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\stl_algobase.h" 1 3
// Core algorithmic facilities -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_algobase.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{algorithm}
 */
# 51 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\range_access.h" 1 3
// <range_access.h> -*- C++ -*-

// Copyright (C) 2010-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/range_access.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iterator}
 */




       
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\range_access.h" 3


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\initializer_list" 1 3
// std::initializer_list support -*- C++ -*-

// Copyright (C) 2008-2016 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file initializer_list
 *  This is a Standard C++ Library header.
 */




       
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\initializer_list" 3





#pragma GCC visibility push(default)

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\initializer_list" 2 3

namespace std
{
  /// initializer_list
  template<class _E>
    class initializer_list
    {
    public:
      typedef _E value_type;
      typedef const _E& reference;
      typedef const _E& const_reference;
      typedef size_t size_type;
      typedef const _E* iterator;
      typedef const _E* const_iterator;

    
# 57 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\initializer_list"
   public
# 57 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\initializer_list" 3
          :
      iterator _M_array;
      size_type _M_len;

      // The compiler can call a private constructor.
      constexpr initializer_list(const_iterator __a, size_type __l)
      : _M_array(__a), _M_len(__l) { }

    public:
      constexpr initializer_list() noexcept
      : _M_array(0), _M_len(0) { }

      // Number of elements.
      constexpr size_type
      size() const noexcept { return _M_len; }

      // First element.
      constexpr const_iterator
      begin() const noexcept { return _M_array; }

      // One past the last element.
      constexpr const_iterator
      end() const noexcept { return begin() + size(); }
    };

  /**
   *  @brief  Return an iterator pointing to the first element of
   *          the initializer_list.
   *  @param  __ils  Initializer list.
   */
  template<class _Tp>
    constexpr const _Tp*
    begin(initializer_list<_Tp> __ils) noexcept
    { return __ils.begin(); }

  /**
   *  @brief  Return an iterator pointing to one past the last element
   *          of the initializer_list.
   *  @param  __ils  Initializer list.
   */
  template<class _Tp>
    constexpr const _Tp*
    end(initializer_list<_Tp> __ils) noexcept
    { return __ils.end(); }
}

#pragma GCC visibility pop
# 37 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\range_access.h" 2 3
namespace std
{


  /**
   *  @brief  Return an iterator pointing to the first element of
   *          the container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    begin(_Container& __cont) -> decltype(__cont.begin())
    { return __cont.begin(); }

  /**
   *  @brief  Return an iterator pointing to the first element of
   *          the const container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    begin(const _Container& __cont) -> decltype(__cont.begin())
    { return __cont.begin(); }

  /**
   *  @brief  Return an iterator pointing to one past the last element of
   *          the container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    end(_Container& __cont) -> decltype(__cont.end())
    { return __cont.end(); }

  /**
   *  @brief  Return an iterator pointing to one past the last element of
   *          the const container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    end(const _Container& __cont) -> decltype(__cont.end())
    { return __cont.end(); }

  /**
   *  @brief  Return an iterator pointing to the first element of the array.
   *  @param  __arr  Array.
   */
  template<typename _Tp, size_t _Nm>
    inline constexpr _Tp*
    begin(_Tp (&__arr)[_Nm])
    { return __arr; }

  /**
   *  @brief  Return an iterator pointing to one past the last element
   *          of the array.
   *  @param  __arr  Array.
   */
  template<typename _Tp, size_t _Nm>
    inline constexpr _Tp*
    end(_Tp (&__arr)[_Nm])
    { return __arr + _Nm; }



  template<typename _Tp> class valarray;
  // These overloads must be declared for cbegin and cend to use them.
  template<typename _Tp> _Tp* begin(valarray<_Tp>&);
  template<typename _Tp> const _Tp* begin(const valarray<_Tp>&);
  template<typename _Tp> _Tp* end(valarray<_Tp>&);
  template<typename _Tp> const _Tp* end(const valarray<_Tp>&);

  /**
   *  @brief  Return an iterator pointing to the first element of
   *          the const container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline constexpr auto
    cbegin(const _Container& __cont) noexcept(noexcept(std::begin(__cont)))
      -> decltype(std::begin(__cont))
    { return std::begin(__cont); }

  /**
   *  @brief  Return an iterator pointing to one past the last element of
   *          the const container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline constexpr auto
    cend(const _Container& __cont) noexcept(noexcept(std::end(__cont)))
      -> decltype(std::end(__cont))
    { return std::end(__cont); }

  /**
   *  @brief  Return a reverse iterator pointing to the last element of
   *          the container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    rbegin(_Container& __cont) -> decltype(__cont.rbegin())
    { return __cont.rbegin(); }

  /**
   *  @brief  Return a reverse iterator pointing to the last element of
   *          the const container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    rbegin(const _Container& __cont) -> decltype(__cont.rbegin())
    { return __cont.rbegin(); }

  /**
   *  @brief  Return a reverse iterator pointing one past the first element of
   *          the container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    rend(_Container& __cont) -> decltype(__cont.rend())
    { return __cont.rend(); }

  /**
   *  @brief  Return a reverse iterator pointing one past the first element of
   *          the const container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    rend(const _Container& __cont) -> decltype(__cont.rend())
    { return __cont.rend(); }

  /**
   *  @brief  Return a reverse iterator pointing to the last element of
   *          the array.
   *  @param  __arr  Array.
   */
  template<typename _Tp, size_t _Nm>
    inline reverse_iterator<_Tp*>
    rbegin(_Tp (&__arr)[_Nm])
    { return reverse_iterator<_Tp*>(__arr + _Nm); }

  /**
   *  @brief  Return a reverse iterator pointing one past the first element of
   *          the array.
   *  @param  __arr  Array.
   */
  template<typename _Tp, size_t _Nm>
    inline reverse_iterator<_Tp*>
    rend(_Tp (&__arr)[_Nm])
    { return reverse_iterator<_Tp*>(__arr); }

  /**
   *  @brief  Return a reverse iterator pointing to the last element of
   *          the initializer_list.
   *  @param  __il  initializer_list.
   */
  template<typename _Tp>
    inline reverse_iterator<const _Tp*>
    rbegin(initializer_list<_Tp> __il)
    { return reverse_iterator<const _Tp*>(__il.end()); }

  /**
   *  @brief  Return a reverse iterator pointing one past the first element of
   *          the initializer_list.
   *  @param  __il  initializer_list.
   */
  template<typename _Tp>
    inline reverse_iterator<const _Tp*>
    rend(initializer_list<_Tp> __il)
    { return reverse_iterator<const _Tp*>(__il.begin()); }

  /**
   *  @brief  Return a reverse iterator pointing to the last element of
   *          the const container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    crbegin(const _Container& __cont) -> decltype(std::rbegin(__cont))
    { return std::rbegin(__cont); }

  /**
   *  @brief  Return a reverse iterator pointing one past the first element of
   *          the const container.
   *  @param  __cont  Container.
   */
  template<typename _Container>
    inline auto
    crend(const _Container& __cont) -> decltype(std::rend(__cont))
    { return std::rend(__cont); }
# 319 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\range_access.h" 3

} // namespace
# 52 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 1 3
// Components for manipulating sequences of characters -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/basic_string.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{string}
 */

//
// ISO C++ 14882: 21 Strings library
//




       
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\atomicity.h" 1 3
// Support for atomic operations -*- C++ -*-

// Copyright (C) 2004-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/atomicity.h
 *  This file is a GNU extension to the Standard C++ Library.
 */




       
# 33 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\atomicity.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 35 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\atomicity.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr.h" 1 3
/* Threads compatibility routines for libgcc2.  */
/* Compile this one with gcc.  */
/* Copyright (C) 1997-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */





#pragma GCC visibility push(default)


/* If this file is compiled with threads support, it must
       #define __GTHREADS 1
   to indicate that threads support is present.  Also it has define
   function
     int __gthread_active_p ()
   that returns 1 if thread system is active, 0 if not.

   The threads interface must define the following types:
     __gthread_key_t
     __gthread_once_t
     __gthread_mutex_t
     __gthread_recursive_mutex_t

   The threads interface must define the following macros:

     __GTHREAD_ONCE_INIT
     		to initialize __gthread_once_t
     __GTHREAD_MUTEX_INIT
     		to initialize __gthread_mutex_t to get a fast
		non-recursive mutex.
     __GTHREAD_MUTEX_INIT_FUNCTION
		to initialize __gthread_mutex_t to get a fast
		non-recursive mutex.
		Define this to a function which looks like this:
		  void __GTHREAD_MUTEX_INIT_FUNCTION (__gthread_mutex_t *)
     		Some systems can't initialize a mutex without a
		function call.  Don't define __GTHREAD_MUTEX_INIT in this case.
     __GTHREAD_RECURSIVE_MUTEX_INIT
     __GTHREAD_RECURSIVE_MUTEX_INIT_FUNCTION
     		as above, but for a recursive mutex.

   The threads interface must define the following static functions:

     int __gthread_once (__gthread_once_t *once, void (*func) ())

     int __gthread_key_create (__gthread_key_t *keyp, void (*dtor) (void *))
     int __gthread_key_delete (__gthread_key_t key)

     void *__gthread_getspecific (__gthread_key_t key)
     int __gthread_setspecific (__gthread_key_t key, const void *ptr)

     int __gthread_mutex_destroy (__gthread_mutex_t *mutex);
     int __gthread_recursive_mutex_destroy (__gthread_recursive_mutex_t *mutex);

     int __gthread_mutex_lock (__gthread_mutex_t *mutex);
     int __gthread_mutex_trylock (__gthread_mutex_t *mutex);
     int __gthread_mutex_unlock (__gthread_mutex_t *mutex);

     int __gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *mutex);
     int __gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *mutex);
     int __gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *mutex);

   The following are supported in POSIX threads only. They are required to
   fix a deadlock in static initialization inside libsupc++. The header file
   gthr-posix.h defines a symbol __GTHREAD_HAS_COND to signify that these extra
   features are supported.

   Types:
     __gthread_cond_t

   Macros:
     __GTHREAD_COND_INIT
     __GTHREAD_COND_INIT_FUNCTION

   Interface:
     int __gthread_cond_broadcast (__gthread_cond_t *cond);
     int __gthread_cond_wait (__gthread_cond_t *cond, __gthread_mutex_t *mutex);
     int __gthread_cond_wait_recursive (__gthread_cond_t *cond,
					__gthread_recursive_mutex_t *mutex);

   All functions returning int should return zero on success or the error
   number.  If the operation is not supported, -1 is returned.

   If the following are also defined, you should
     #define __GTHREADS_CXX0X 1
   to enable the c++0x thread library.

   Types:
     __gthread_t
     __gthread_time_t

   Interface:
     int __gthread_create (__gthread_t *thread, void *(*func) (void*),
                           void *args);
     int __gthread_join (__gthread_t thread, void **value_ptr);
     int __gthread_detach (__gthread_t thread);
     int __gthread_equal (__gthread_t t1, __gthread_t t2);
     __gthread_t __gthread_self (void);
     int __gthread_yield (void);

     int __gthread_mutex_timedlock (__gthread_mutex_t *m,
                                    const __gthread_time_t *abs_timeout);
     int __gthread_recursive_mutex_timedlock (__gthread_recursive_mutex_t *m,
                                          const __gthread_time_t *abs_time);

     int __gthread_cond_signal (__gthread_cond_t *cond);
     int __gthread_cond_timedwait (__gthread_cond_t *cond,
                                   __gthread_mutex_t *mutex,
                                   const __gthread_time_t *abs_timeout);

*/


/* The pe-coff weak support isn't fully compatible to ELF's weak.
   For static libraries it might would work, but as we need to deal
   with shared versions too, we disable it for mingw-targets.  */
# 148 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr.h" 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr-default.h" 1 3
/* Threads compatibility routines for libgcc2 and libobjc.  */
/* Compile this one with gcc.  */

/* Copyright (C) 1999-2016 Free Software Foundation, Inc.
   Contributed by Mumit Khan <khan@xraylith.wisc.edu>.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */




/* Make sure CONST_CAST2 (origin in system.h) is declared.  */




/* Windows32 threads specific definitions. The windows32 threading model
   does not map well into pthread-inspired gcc's threading model, and so
   there are caveats one needs to be aware of.

   1. The destructor supplied to __gthread_key_create is ignored for
      generic x86-win32 ports. This will certainly cause memory leaks
      due to unreclaimed eh contexts (sizeof (eh_context) is at least
      24 bytes for x86 currently).

      This memory leak may be significant for long-running applications
      that make heavy use of C++ EH.

      However, Mingw runtime (version 0.3 or newer) provides a mechanism
      to emulate pthreads key dtors; the runtime provides a special DLL,
      linked in if -mthreads option is specified, that runs the dtors in
      the reverse order of registration when each thread exits. If
      -mthreads option is not given, a stub is linked in instead of the
      DLL, which results in memory leak. Other x86-win32 ports can use
      the same technique of course to avoid the leak.

   2. The error codes returned are non-POSIX like, and cast into ints.
      This may cause incorrect error return due to truncation values on
      hw where sizeof (DWORD) > sizeof (int).

   3. We are currently using a special mutex instead of the Critical
      Sections, since Win9x does not support TryEnterCriticalSection
      (while NT does).

   The basic framework should work well enough. In the long term, GCC
   needs to use Structured Exception Handling on Windows32.  */



# 1 "c:\\vcast\\mingw\\include\\errno.h" 1 3
/*
 * errno.h
 *
 * Definition of error codes, and error code retrieval mechanism.
 *
 * $Id: errno.h,v 99ef1a520f95 2016/11/14 17:57:05 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-1999, 2001, 2003-2005, 2007, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */



/* All MinGW headers are expected to include <_mingw.h>; however...
 */

/* ...the overhead of doing so is unwarranted, when <errno.h> has been
 * included directly in preprocessed assembly language code.
 */



/* Error code numbers.
 *
 * TODO: Can't be sure of some of these assignments, I guessed from the
 * names given by strerror and the defines in the Cygnus errno.h. A lot
 * of the names from the Cygnus errno.h are not represented, and a few
 * of the descriptions returned by strerror do not obviously match
 * their error naming.
 */
# 67 "c:\\vcast\\mingw\\include\\errno.h" 3
/* 15 - Unknown Error */
# 78 "c:\\vcast\\mingw\\include\\errno.h" 3
/* 26 - Unknown Error */
# 87 "c:\\vcast\\mingw\\include\\errno.h" 3
/* 35 - Unknown Error */


/* 37 - Unknown Error */






/* C language function prototype declarations are unnecessary, when
 * compiling resource files, and they actually represent syntactically
 * invalid statements, in preprocessed assembly language code.
 */


extern "C" {

/* Definitions of errno. For _doserrno, sys_nerr and * sys_errlist, see
 * stdlib.h.
 */




 int* __attribute__((__cdecl__)) __attribute__((__nothrow__)) _errno(void);



}
# 70 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr-default.h" 2 3
# 339 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr-default.h" 3
extern "C" {


typedef unsigned long __gthread_key_t;

typedef struct {
  int done;
  long started;
} __gthread_once_t;

typedef struct {
  long counter;
  void *sema;
} __gthread_mutex_t;

typedef struct {
  long counter;
  long depth;
  unsigned long owner;
  void *sema;
} __gthread_recursive_mutex_t;
# 370 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr-default.h" 3
/* Mingw runtime >= v0.3 provides a magic variable that is set to nonzero
   if -mthreads option was specified, or 0 otherwise. This is to get around
   the lack of weak symbols in PE-COFF.  */
extern int _CRT_MT;
extern int __mingwthr_key_dtor (unsigned long, void (*) (void *));


/* The Windows95 kernel does not export InterlockedCompareExchange.
   This provides a substitute.   When building apps that reference
   gthread_mutex_try_lock, the  __GTHREAD_I486_INLINE_LOCK_PRIMITIVES
   macro  must be defined if Windows95 is a target.  Currently
   gthread_mutex_try_lock is not referenced by libgcc or libstdc++.  */
# 400 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr-default.h" 3
static inline int
__gthread_active_p (void)
{

  return _CRT_MT;



}



/* The implementations are in config/i386/gthr-win32.c in libgcc.a.
   Only stubs are exposed to avoid polluting the C++ namespace with
   windows api definitions.  */

extern int __gthr_win32_once (__gthread_once_t *, void (*) (void));
extern int __gthr_win32_key_create (__gthread_key_t *, void (*) (void*));
extern int __gthr_win32_key_delete (__gthread_key_t);
extern void * __gthr_win32_getspecific (__gthread_key_t);
extern int __gthr_win32_setspecific (__gthread_key_t, const void *);
extern void __gthr_win32_mutex_init_function (__gthread_mutex_t *);
extern int __gthr_win32_mutex_lock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_trylock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_unlock (__gthread_mutex_t *);
extern void
  __gthr_win32_recursive_mutex_init_function (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_lock (__gthread_recursive_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_trylock (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_unlock (__gthread_recursive_mutex_t *);
extern void __gthr_win32_mutex_destroy (__gthread_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_destroy (__gthread_recursive_mutex_t *);

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthr_win32_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthr_win32_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthr_win32_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthr_win32_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthr_win32_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_init_function (__mutex);
}

static inline void
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_destroy (__mutex);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_unlock (__mutex);
  else
    return 0;
}

static inline void
__gthread_recursive_mutex_init_function (__gthread_recursive_mutex_t *__mutex)
{
   __gthr_win32_recursive_mutex_init_function (__mutex);
}

static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_unlock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_destroy (__gthread_recursive_mutex_t *__mutex)
{
  return __gthr_win32_recursive_mutex_destroy (__mutex);
}
# 781 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr-default.h" 3
}
# 149 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\gthr.h" 2 3


#pragma GCC visibility pop
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\atomicity.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\atomic_word.h" 1 3
// Low-level type for atomic operations -*- C++ -*-

// Copyright (C) 2004-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file atomic_word.h
 *  This file is a GNU extension to the Standard C++ Library.
 */




typedef int _Atomic_word;


// This is a memory order acquire fence.

// This is a memory order release fence.
# 37 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\atomicity.h" 2 3

namespace __gnu_cxx
{


  // Functions for portable atomic access.
  // To abstract locking primitives across all thread policies, use:
  // __exchange_and_add_dispatch
  // __atomic_add_dispatch

  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __atomic_fetch_add(__mem, __val, 4); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __atomic_fetch_add(__mem, __val, 4); }
# 64 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }


} // namespace

// Even if the CPU doesn't need a memory barrier, we need to ensure
// that the compiler doesn't reorder memory accesses across the
// barriers.
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\alloc_traits.h" 1 3
// Allocator traits -*- C++ -*-

// Copyright (C) 2011-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/alloc_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */




       
# 33 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\alloc_traits.h" 3


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\alloc_traits.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\alloc_traits.h" 1 3
// Allocator traits -*- C++ -*-

// Copyright (C) 2011-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/alloc_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{memory}
 */






# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\memoryfwd.h" 1 3
// <memory> Forward declarations -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 * Copyright (c) 1996-1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/memoryfwd.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{memory}
 */
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\alloc_traits.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\ptr_traits.h" 1 3
// Pointer Traits -*- C++ -*-

// Copyright (C) 2011-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/ptr_traits.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{memory}
 */
# 37 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\alloc_traits.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 1 3
// -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/numeric_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
# 38 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\alloc_traits.h" 2 3



namespace std
{


  struct __allocator_traits_base
  {
    template<typename _Alloc, typename _Up>
      using __rebind = typename _Alloc::template rebind<_Up>::other;

  
# 50 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\alloc_traits.h"
 public
# 50 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\alloc_traits.h" 3
          :
    template<typename _Tp>
      using __pointer = typename _Tp::pointer;
    template<typename _Tp>
      using __c_pointer = typename _Tp::const_pointer;
    template<typename _Tp>
      using __v_pointer = typename _Tp::void_pointer;
    template<typename _Tp>
      using __cv_pointer = typename _Tp::const_void_pointer;
    template<typename _Tp>
      using __diff_type = typename _Tp::difference_type;
    template<typename _Tp>
      using __size_type = typename _Tp::size_type;
    template<typename _Tp>
      using __pocca = typename _Tp::propagate_on_container_copy_assignment;
    template<typename _Tp>
      using __pocma = typename _Tp::propagate_on_container_move_assignment;
    template<typename _Tp>
      using __pocs = typename _Tp::propagate_on_container_swap;
    template<typename _Tp>
      using __equal = typename _Tp::is_always_equal;
  };

  template<typename _Alloc, typename _Up>
    using __alloc_rebind = __detected_or_t_<__replace_first_arg_t,
         __allocator_traits_base::__rebind,
         _Alloc, _Up>;

  /**
   * @brief  Uniform interface to all allocator types.
   * @ingroup allocators
  */
  template<typename _Alloc>
    struct allocator_traits : __allocator_traits_base
    {
      /// The allocator type
      typedef _Alloc allocator_type;
      /// The allocated type
      typedef typename _Alloc::value_type value_type;

      /**
       * @brief   The allocator's pointer type.
       *
       * @c Alloc::pointer if that type exists, otherwise @c value_type*
      */
      using pointer = __detected_or_t<value_type*, __pointer, _Alloc>;

      /**
       * @brief   The allocator's const pointer type.
       *
       * @c Alloc::const_pointer if that type exists, otherwise
       * <tt> pointer_traits<pointer>::rebind<const value_type> </tt>
      */
      using const_pointer
 = __detected_or_t<__ptr_rebind<pointer, const value_type>,
     __c_pointer, _Alloc>;

      /**
       * @brief   The allocator's void pointer type.
       *
       * @c Alloc::void_pointer if that type exists, otherwise
       * <tt> pointer_traits<pointer>::rebind<void> </tt>
      */
      using void_pointer
 = __detected_or_t<__ptr_rebind<pointer, void>, __v_pointer, _Alloc>;

      /**
       * @brief   The allocator's const void pointer type.
       *
       * @c Alloc::const_void_pointer if that type exists, otherwise
       * <tt> pointer_traits<pointer>::rebind<const void> </tt>
      */
      using const_void_pointer
 = __detected_or_t<__ptr_rebind<pointer, const void>, __cv_pointer,
     _Alloc>;

      /**
       * @brief   The allocator's difference type
       *
       * @c Alloc::difference_type if that type exists, otherwise
       * <tt> pointer_traits<pointer>::difference_type </tt>
      */
      using difference_type
 = __detected_or_t<typename pointer_traits<pointer>::difference_type,
     __diff_type, _Alloc>;

      /**
       * @brief   The allocator's size type
       *
       * @c Alloc::size_type if that type exists, otherwise
       * <tt> make_unsigned<difference_type>::type </tt>
      */
      using size_type
 = __detected_or_t<typename make_unsigned<difference_type>::type,
     __size_type, _Alloc>;

      /**
       * @brief   How the allocator is propagated on copy assignment
       *
       * @c Alloc::propagate_on_container_copy_assignment if that type exists,
       * otherwise @c false_type
      */
      using propagate_on_container_copy_assignment
 = __detected_or_t<false_type, __pocca, _Alloc>;

      /**
       * @brief   How the allocator is propagated on move assignment
       *
       * @c Alloc::propagate_on_container_move_assignment if that type exists,
       * otherwise @c false_type
      */
      using propagate_on_container_move_assignment
 = __detected_or_t<false_type, __pocma, _Alloc>;

      /**
       * @brief   How the allocator is propagated on swap
       *
       * @c Alloc::propagate_on_container_swap if that type exists,
       * otherwise @c false_type
      */
      using propagate_on_container_swap
 = __detected_or_t<false_type, __pocs, _Alloc>;

      /**
       * @brief   Whether all instances of the allocator type compare equal.
       *
       * @c Alloc::is_always_equal if that type exists,
       * otherwise @c is_empty<Alloc>::type
      */
      using is_always_equal
 = __detected_or_t<typename is_empty<_Alloc>::type, __equal, _Alloc>;

      template<typename _Tp>
 using rebind_alloc = __alloc_rebind<_Alloc, _Tp>;
      template<typename _Tp>
 using rebind_traits = allocator_traits<rebind_alloc<_Tp>>;

      static_assert(!is_same<rebind_alloc<value_type>, __undefined>::value,
   "allocator defines rebind or is like Alloc<T, Args>");

    
# 190 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\alloc_traits.h"
   public
# 190 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\alloc_traits.h" 3
          :
      template<typename _Alloc2>
 static auto
 _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer __hint, int)
 -> decltype(__a.allocate(__n, __hint))
 { return __a.allocate(__n, __hint); }

      template<typename _Alloc2>
 static pointer
 _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer, ...)
 { return __a.allocate(__n); }

      template<typename _Tp, typename... _Args>
 struct __construct_helper
 {
   template<typename _Alloc2,
     typename = decltype(std::declval<_Alloc2*>()->construct(
    std::declval<_Tp*>(), std::declval<_Args>()...))>
     static true_type __test(int);

   template<typename>
     static false_type __test(...);

   using type = decltype(__test<_Alloc>(0));
 };

      template<typename _Tp, typename... _Args>
 using __has_construct
   = typename __construct_helper<_Tp, _Args...>::type;

      template<typename _Tp, typename... _Args>
 static _Require<__has_construct<_Tp, _Args...>>
 _S_construct(_Alloc& __a, _Tp* __p, _Args&&... __args)
 { __a.construct(__p, std::forward<_Args>(__args)...); }

      template<typename _Tp, typename... _Args>
 static
 _Require<__and_<__not_<__has_construct<_Tp, _Args...>>,
          is_constructible<_Tp, _Args...>>>
 _S_construct(_Alloc&, _Tp* __p, _Args&&... __args)
 { ::new((void*)__p) _Tp(std::forward<_Args>(__args)...); }

      template<typename _Alloc2, typename _Tp>
 static auto
 _S_destroy(_Alloc2& __a, _Tp* __p, int)
 -> decltype(__a.destroy(__p))
 { __a.destroy(__p); }

      template<typename _Alloc2, typename _Tp>
 static void
 _S_destroy(_Alloc2&, _Tp* __p, ...)
 { __p->~_Tp(); }

      template<typename _Alloc2>
 static auto
 _S_max_size(_Alloc2& __a, int)
 -> decltype(__a.max_size())
 { return __a.max_size(); }

      template<typename _Alloc2>
 static size_type
 _S_max_size(_Alloc2&, ...)
 {
   // _GLIBCXX_RESOLVE_LIB_DEFECTS
   // 2466. allocator_traits::max_size() default behavior is incorrect
   return __gnu_cxx::__numeric_traits<size_type>::__max
     / sizeof(value_type);
 }

      template<typename _Alloc2>
 static auto
 _S_select(_Alloc2& __a, int)
 -> decltype(__a.select_on_container_copy_construction())
 { return __a.select_on_container_copy_construction(); }

      template<typename _Alloc2>
 static _Alloc2
 _S_select(_Alloc2& __a, ...)
 { return __a; }

    public:

      /**
       *  @brief  Allocate memory.
       *  @param  __a  An allocator.
       *  @param  __n  The number of objects to allocate space for.
       *
       *  Calls @c a.allocate(n)
      */
      static pointer
      allocate(_Alloc& __a, size_type __n)
      { return __a.allocate(__n); }

      /**
       *  @brief  Allocate memory.
       *  @param  __a  An allocator.
       *  @param  __n  The number of objects to allocate space for.
       *  @param  __hint Aid to locality.
       *  @return Memory of suitable size and alignment for @a n objects
       *          of type @c value_type
       *
       *  Returns <tt> a.allocate(n, hint) </tt> if that expression is
       *  well-formed, otherwise returns @c a.allocate(n)
      */
      static pointer
      allocate(_Alloc& __a, size_type __n, const_void_pointer __hint)
      { return _S_allocate(__a, __n, __hint, 0); }

      /**
       *  @brief  Deallocate memory.
       *  @param  __a  An allocator.
       *  @param  __p  Pointer to the memory to deallocate.
       *  @param  __n  The number of objects space was allocated for.
       *
       *  Calls <tt> a.deallocate(p, n) </tt>
      */
      static void
      deallocate(_Alloc& __a, pointer __p, size_type __n)
      { __a.deallocate(__p, __n); }

      /**
       *  @brief  Construct an object of type @a _Tp
       *  @param  __a  An allocator.
       *  @param  __p  Pointer to memory of suitable size and alignment for Tp
       *  @param  __args Constructor arguments.
       *
       *  Calls <tt> __a.construct(__p, std::forward<Args>(__args)...) </tt>
       *  if that expression is well-formed, otherwise uses placement-new
       *  to construct an object of type @a _Tp at location @a __p from the
       *  arguments @a __args...
      */
      template<typename _Tp, typename... _Args>
 static auto construct(_Alloc& __a, _Tp* __p, _Args&&... __args)
 -> decltype(_S_construct(__a, __p, std::forward<_Args>(__args)...))
 { _S_construct(__a, __p, std::forward<_Args>(__args)...); }

      /**
       *  @brief  Destroy an object of type @a _Tp
       *  @param  __a  An allocator.
       *  @param  __p  Pointer to the object to destroy
       *
       *  Calls @c __a.destroy(__p) if that expression is well-formed,
       *  otherwise calls @c __p->~_Tp()
      */
      template<typename _Tp>
 static void destroy(_Alloc& __a, _Tp* __p)
 { _S_destroy(__a, __p, 0); }

      /**
       *  @brief  The maximum supported allocation size
       *  @param  __a  An allocator.
       *  @return @c __a.max_size() or @c numeric_limits<size_type>::max()
       *
       *  Returns @c __a.max_size() if that expression is well-formed,
       *  otherwise returns @c numeric_limits<size_type>::max()
      */
      static size_type max_size(const _Alloc& __a) noexcept
      { return _S_max_size(__a, 0); }

      /**
       *  @brief  Obtain an allocator to use when copying a container.
       *  @param  __rhs  An allocator.
       *  @return @c __rhs.select_on_container_copy_construction() or @a __rhs
       *
       *  Returns @c __rhs.select_on_container_copy_construction() if that
       *  expression is well-formed, otherwise returns @a __rhs
      */
      static _Alloc
      select_on_container_copy_construction(const _Alloc& __rhs)
      { return _S_select(__rhs, 0); }
    };

  /// Partial specialization for std::allocator.
  template<typename _Tp>
    struct allocator_traits<allocator<_Tp>>
    {
      /// The allocator type
      using allocator_type = allocator<_Tp>;
      /// The allocated type
      using value_type = _Tp;

      /// The allocator's pointer type.
      using pointer = _Tp*;

      /// The allocator's const pointer type.
      using const_pointer = const _Tp*;

      /// The allocator's void pointer type.
      using void_pointer = void*;

      /// The allocator's const void pointer type.
      using const_void_pointer = const void*;

      /// The allocator's difference type
      using difference_type = std::ptrdiff_t;

      /// The allocator's size type
      using size_type = std::size_t;

      /// How the allocator is propagated on copy assignment
      using propagate_on_container_copy_assignment = false_type;

      /// How the allocator is propagated on move assignment
      using propagate_on_container_move_assignment = true_type;

      /// How the allocator is propagated on swap
      using propagate_on_container_swap = false_type;

      /// Whether all instances of the allocator type compare equal.
      using is_always_equal = true_type;

      template<typename _Up>
 using rebind_alloc = allocator<_Up>;

      template<typename _Up>
 using rebind_traits = allocator_traits<allocator<_Up>>;

      /**
       *  @brief  Allocate memory.
       *  @param  __a  An allocator.
       *  @param  __n  The number of objects to allocate space for.
       *
       *  Calls @c a.allocate(n)
      */
      static pointer
      allocate(allocator_type& __a, size_type __n)
      { return __a.allocate(__n); }

      /**
       *  @brief  Allocate memory.
       *  @param  __a  An allocator.
       *  @param  __n  The number of objects to allocate space for.
       *  @param  __hint Aid to locality.
       *  @return Memory of suitable size and alignment for @a n objects
       *          of type @c value_type
       *
       *  Returns <tt> a.allocate(n, hint) </tt>
      */
      static pointer
      allocate(allocator_type& __a, size_type __n, const_void_pointer __hint)
      { return __a.allocate(__n, __hint); }

      /**
       *  @brief  Deallocate memory.
       *  @param  __a  An allocator.
       *  @param  __p  Pointer to the memory to deallocate.
       *  @param  __n  The number of objects space was allocated for.
       *
       *  Calls <tt> a.deallocate(p, n) </tt>
      */
      static void
      deallocate(allocator_type& __a, pointer __p, size_type __n)
      { __a.deallocate(__p, __n); }

      /**
       *  @brief  Construct an object of type @a _Up
       *  @param  __a  An allocator.
       *  @param  __p  Pointer to memory of suitable size and alignment for Tp
       *  @param  __args Constructor arguments.
       *
       *  Calls <tt> __a.construct(__p, std::forward<Args>(__args)...) </tt>
      */
      template<typename _Up, typename... _Args>
 static void
 construct(allocator_type& __a, _Up* __p, _Args&&... __args)
 { __a.construct(__p, std::forward<_Args>(__args)...); }

      /**
       *  @brief  Destroy an object of type @a _Up
       *  @param  __a  An allocator.
       *  @param  __p  Pointer to the object to destroy
       *
       *  Calls @c __a.destroy(__p).
      */
      template<typename _Up>
 static void
 destroy(allocator_type& __a, _Up* __p)
 { __a.destroy(__p); }

      /**
       *  @brief  The maximum supported allocation size
       *  @param  __a  An allocator.
       *  @return @c __a.max_size()
      */
      static size_type
      max_size(const allocator_type& __a) noexcept
      { return __a.max_size(); }

      /**
       *  @brief  Obtain an allocator to use when copying a container.
       *  @param  __rhs  An allocator.
       *  @return @c __rhs
      */
      static allocator_type
      select_on_container_copy_construction(const allocator_type& __rhs)
      { return __rhs; }
    };


  template<typename _Alloc>
    inline void
    __do_alloc_on_copy(_Alloc& __one, const _Alloc& __two, true_type)
    { __one = __two; }

  template<typename _Alloc>
    inline void
    __do_alloc_on_copy(_Alloc&, const _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_copy(_Alloc& __one, const _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_copy_assignment __pocca;
      __do_alloc_on_copy(__one, __two, __pocca());
    }

  template<typename _Alloc>
    inline _Alloc __alloc_on_copy(const _Alloc& __a)
    {
      typedef allocator_traits<_Alloc> __traits;
      return __traits::select_on_container_copy_construction(__a);
    }

  template<typename _Alloc>
    inline void __do_alloc_on_move(_Alloc& __one, _Alloc& __two, true_type)
    { __one = std::move(__two); }

  template<typename _Alloc>
    inline void __do_alloc_on_move(_Alloc&, _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_move(_Alloc& __one, _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_move_assignment __pocma;
      __do_alloc_on_move(__one, __two, __pocma());
    }

  template<typename _Alloc>
    inline void __do_alloc_on_swap(_Alloc& __one, _Alloc& __two, true_type)
    {
      using std::swap;
      swap(__one, __two);
    }

  template<typename _Alloc>
    inline void __do_alloc_on_swap(_Alloc&, _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_swap(_Alloc& __one, _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_swap __pocs;
      __do_alloc_on_swap(__one, __two, __pocs());
    }

  template<typename _Alloc>
    class __is_copy_insertable_impl
    {
      typedef allocator_traits<_Alloc> _Traits;

      template<typename _Up, typename
        = decltype(_Traits::construct(std::declval<_Alloc&>(),
          std::declval<_Up*>(),
          std::declval<const _Up&>()))>
 static true_type
 _M_select(int);

      template<typename _Up>
 static false_type
 _M_select(...);

    public:
      typedef decltype(_M_select<typename _Alloc::value_type>(0)) type;
    };

  // true if _Alloc::value_type is CopyInsertable into containers using _Alloc
  template<typename _Alloc>
    struct __is_copy_insertable
    : __is_copy_insertable_impl<_Alloc>::type
    { };

  // std::allocator<_Tp> just requires CopyConstructible
  template<typename _Tp>
    struct __is_copy_insertable<allocator<_Tp>>
    : is_copy_constructible<_Tp>
    { };


} // namespace std
# 37 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\alloc_traits.h" 2 3




namespace __gnu_cxx
{


/**
 * @brief  Uniform interface to C++98 and C++11 allocators.
 * @ingroup allocators
*/
template<typename _Alloc>
  struct __alloc_traits

  : std::allocator_traits<_Alloc>

  {
    typedef _Alloc allocator_type;

    typedef std::allocator_traits<_Alloc> _Base_type;
    typedef typename _Base_type::value_type value_type;
    typedef typename _Base_type::pointer pointer;
    typedef typename _Base_type::const_pointer const_pointer;
    typedef typename _Base_type::size_type size_type;
    typedef typename _Base_type::difference_type difference_type;
    // C++11 allocators do not define reference or const_reference
    typedef value_type& reference;
    typedef const value_type& const_reference;
    using _Base_type::allocate;
    using _Base_type::deallocate;
    using _Base_type::construct;
    using _Base_type::destroy;
    using _Base_type::max_size;

  
# 72 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\alloc_traits.h"
 public
# 72 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\alloc_traits.h" 3
        :
    template<typename _Ptr>
      using __is_custom_pointer
 = std::__and_<std::is_same<pointer, _Ptr>,
        std::__not_<std::is_pointer<_Ptr>>>;

  public:
    // overload construct for non-standard pointer types
    template<typename _Ptr, typename... _Args>
      static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type
      construct(_Alloc& __a, _Ptr __p, _Args&&... __args)
      {
 _Base_type::construct(__a, std::addressof(*__p),
         std::forward<_Args>(__args)...);
      }

    // overload destroy for non-standard pointer types
    template<typename _Ptr>
      static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type
      destroy(_Alloc& __a, _Ptr __p)
      { _Base_type::destroy(__a, std::addressof(*__p)); }

    static _Alloc _S_select_on_copy(const _Alloc& __a)
    { return _Base_type::select_on_container_copy_construction(__a); }

    static void _S_on_swap(_Alloc& __a, _Alloc& __b)
    { std::__alloc_on_swap(__a, __b); }

    static constexpr bool _S_propagate_on_copy_assign()
    { return _Base_type::propagate_on_container_copy_assignment::value; }

    static constexpr bool _S_propagate_on_move_assign()
    { return _Base_type::propagate_on_container_move_assignment::value; }

    static constexpr bool _S_propagate_on_swap()
    { return _Base_type::propagate_on_container_swap::value; }

    static constexpr bool _S_always_equal()
    { return _Base_type::is_always_equal::value; }

    static constexpr bool _S_nothrow_move()
    { return _S_propagate_on_move_assign() || _S_always_equal(); }

    template<typename _Tp>
      struct rebind
      { typedef typename _Base_type::template rebind_alloc<_Tp> other; };
# 158 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\alloc_traits.h" 3
  };


} // namespace __gnu_cxx
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\debug\\debug.h" 1 3
// Debugging support implementation -*- C++ -*-

// Copyright (C) 2003-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file debug/debug.h
 *  This file is a GNU debug extension to the Standard C++ Library.
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 2 3


# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\initializer_list" 1 3
// std::initializer_list support -*- C++ -*-

// Copyright (C) 2008-2016 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file initializer_list
 *  This is a Standard C++ Library header.
 */
# 45 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 2 3


namespace std
{



namespace __cxx11 {
  /**
   *  @class basic_string basic_string.h <string>
   *  @brief  Managing sequences of characters and character-like objects.
   *
   *  @ingroup strings
   *  @ingroup sequences
   *
   *  @tparam _CharT  Type of character
   *  @tparam _Traits  Traits for character type, defaults to
   *                   char_traits<_CharT>.
   *  @tparam _Alloc  Allocator type, defaults to allocator<_CharT>.
   *
   *  Meets the requirements of a <a href="tables.html#65">container</a>, a
   *  <a href="tables.html#66">reversible container</a>, and a
   *  <a href="tables.html#67">sequence</a>.  Of the
   *  <a href="tables.html#68">optional sequence requirements</a>, only
   *  @c push_back, @c at, and @c %array access are supported.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<_CharT>::other _Char_alloc_type;
      typedef __gnu_cxx::__alloc_traits<_Char_alloc_type> _Alloc_traits;

      // Types:
    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Char_alloc_type allocator_type;
      typedef typename _Alloc_traits::size_type size_type;
      typedef typename _Alloc_traits::difference_type difference_type;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef typename _Alloc_traits::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
       const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

      ///  Value returned by various member functions when they fail.
      static const size_type npos = static_cast<size_type>(-1);

    
# 98 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h"
   public
# 98 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
          :
      // type used for positions in insert, erase etc.



      typedef const_iterator __const_iterator;


      // Use empty-base optimization: http://www.cantrip.org/emptyopt.html
      struct _Alloc_hider : allocator_type // TODO check __is_final
      {
 _Alloc_hider(pointer __dat, const _Alloc& __a = _Alloc())
 : allocator_type(__a), _M_p(__dat) { }

 pointer _M_p; // The actual data.
      };

      _Alloc_hider _M_dataplus;
      size_type _M_string_length;

      enum { _S_local_capacity = 15 / sizeof(_CharT) };

      union
      {
 _CharT _M_local_buf[_S_local_capacity + 1];
 size_type _M_allocated_capacity;
      };

      void
      _M_data(pointer __p)
      { _M_dataplus._M_p = __p; }

      void
      _M_length(size_type __length)
      { _M_string_length = __length; }

      pointer
      _M_data() const
      { return _M_dataplus._M_p; }

      pointer
      _M_local_data()
      {

 return std::pointer_traits<pointer>::pointer_to(*_M_local_buf);



      }

      const_pointer
      _M_local_data() const
      {

 return std::pointer_traits<const_pointer>::pointer_to(*_M_local_buf);



      }

      void
      _M_capacity(size_type __capacity)
      { _M_allocated_capacity = __capacity; }

      void
      _M_set_length(size_type __n)
      {
 _M_length(__n);
 traits_type::assign(_M_data()[__n], _CharT());
      }

      bool
      _M_is_local() const
      { return _M_data() == _M_local_data(); }

      // Create & Destroy
      pointer
      _M_create(size_type&, size_type);

      void
      _M_dispose()
      {
 if (!_M_is_local())
   _M_destroy(_M_allocated_capacity);
      }

      void
      _M_destroy(size_type __size) throw()
      { _Alloc_traits::deallocate(_M_get_allocator(), _M_data(), __size + 1); }

      // _M_construct_aux is used to implement the 21.3.1 para 15 which
      // requires special behaviour if _InIterator is an integral type
      template<typename _InIterator>
        void
        _M_construct_aux(_InIterator __beg, _InIterator __end,
    std::__false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          _M_construct(__beg, __end, _Tag());
 }

      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 438. Ambiguity in the "do the right thing" clause
      template<typename _Integer>
        void
        _M_construct_aux(_Integer __beg, _Integer __end, std::__true_type)
 { _M_construct_aux_2(static_cast<size_type>(__beg), __end); }

      void
      _M_construct_aux_2(size_type __req, _CharT __c)
      { _M_construct(__req, __c); }

      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   _M_construct_aux(__beg, __end, _Integral());
        }

      // For Input Iterators, used in istreambuf_iterators, etc.
      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end,
       std::input_iterator_tag);

      // For forward_iterators up to random_access_iterators, used for
      // string::iterator, _CharT*, etc.
      template<typename _FwdIterator>
        void
        _M_construct(_FwdIterator __beg, _FwdIterator __end,
       std::forward_iterator_tag);

      void
      _M_construct(size_type __req, _CharT __c);

      allocator_type&
      _M_get_allocator()
      { return _M_dataplus; }

      const allocator_type&
      _M_get_allocator() const
      { return _M_dataplus; }

    
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h"
   public
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
          :
# 258 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range_fmt(("%s: __pos (which is %zu) > " "this->size() (which is %zu)")
                                         ,
       __s, __pos, this->size());
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      // NB: _M_limit doesn't check for a bad __pos value.
      size_type
      _M_limit(size_type __pos, size_type __off) const noexcept
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }

      // True if _Rep and source do not overlap.
      bool
      _M_disjunct(const _CharT* __s) const noexcept
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }

      // When __n = 1 way faster than the general multichar
      // traits_type::copy/move/assign.
      static void
      _S_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _S_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _S_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }

      // _S_copy_chars is a separate template to permit specialization
      // to optimize for the common case of pointers as iterators.
      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, (void)++__p)
     traits_type::assign(*__p, *__k1); // These types are off.
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2) noexcept
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      noexcept
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2) noexcept
      { _S_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      noexcept
      { _S_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2) noexcept
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_assign(const basic_string& __rcs);

      void
      _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
  size_type __len2);

      void
      _M_erase(size_type __pos, size_type __n);

    public:
      // Construct/copy/destroy:
      // NB: We overload ctors in some cases instead of using default
      // arguments, per 17.4.4.4 para. 2 item 2.

      /**
       *  @brief  Default constructor creates an empty string.
       */
      basic_string()
      noexcept(is_nothrow_default_constructible<_Alloc>::value)
      : _M_dataplus(_M_local_data())
      { _M_set_length(0); }

      /**
       *  @brief  Construct an empty string using allocator @a a.
       */
      explicit
      basic_string(const _Alloc& __a) noexcept
      : _M_dataplus(_M_local_data(), __a)
      { _M_set_length(0); }

      /**
       *  @brief  Construct string with copy of value of @a __str.
       *  @param  __str  Source string.
       */
      basic_string(const basic_string& __str)
      : _M_dataplus(_M_local_data(),
      _Alloc_traits::_S_select_on_copy(__str._M_get_allocator()))
      { _M_construct(__str._M_data(), __str._M_data() + __str.length()); }

      /**
       *  @brief  Construct string as copy of a substring.
       *  @param  __str  Source string.
       *  @param  __pos  Index of first character to copy from.
       *  @param  __n  Number of characters to copy (default remainder).
       */
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 2402. [this constructor] shouldn't use Allocator()
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos)
      : _M_dataplus(_M_local_data())
      {
 const _CharT* __start = __str._M_data()
   + __str._M_check(__pos, "basic_string::basic_string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }

      /**
       *  @brief  Construct string as copy of a substring.
       *  @param  __str  Source string.
       *  @param  __pos  Index of first character to copy from.
       *  @param  __n  Number of characters to copy (default remainder).
       *  @param  __a  Allocator to use.
       */
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      {
 const _CharT* __start
   = __str._M_data() + __str._M_check(__pos, "string::string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }

      /**
       *  @brief  Construct string initialized by a character %array.
       *  @param  __s  Source character %array.
       *  @param  __n  Number of characters to copy.
       *  @param  __a  Allocator to use (default is default allocator).
       *
       *  NB: @a __s must have at least @a __n characters, &apos;\\0&apos;
       *  has no special meaning.
       */
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s + __n); }

      /**
       *  @brief  Construct string as copy of a C string.
       *  @param  __s  Source C string.
       *  @param  __a  Allocator to use (default is default allocator).
       */
      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s ? __s + traits_type::length(__s) : __s+npos); }

      /**
       *  @brief  Construct string as multiple characters.
       *  @param  __n  Number of characters.
       *  @param  __c  Character to use.
       *  @param  __a  Allocator to use (default is default allocator).
       */
      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__n, __c); }


      /**
       *  @brief  Move construct string.
       *  @param  __str  Source string.
       *
       *  The newly-created string contains the exact contents of @a __str.
       *  @a __str is a valid, but unspecified string.
       **/
      basic_string(basic_string&& __str) noexcept
      : _M_dataplus(_M_local_data(), std::move(__str._M_get_allocator()))
      {
 if (__str._M_is_local())
   {
     traits_type::copy(_M_local_buf, __str._M_local_buf,
         _S_local_capacity + 1);
   }
 else
   {
     _M_data(__str._M_data());
     _M_capacity(__str._M_allocated_capacity);
   }

 // Must use _M_length() here not _M_set_length() because
 // basic_stringbuf relies on writing into unallocated capacity so
 // we mess up the contents if we put a '\0' in the string.
 _M_length(__str.length());
 __str._M_data(__str._M_local_data());
 __str._M_set_length(0);
      }

      /**
       *  @brief  Construct string from an initializer %list.
       *  @param  __l  std::initializer_list of characters.
       *  @param  __a  Allocator to use (default is default allocator).
       */
      basic_string(initializer_list<_CharT> __l, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__l.begin(), __l.end()); }

      basic_string(const basic_string& __str, const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__str.begin(), __str.end()); }

      basic_string(basic_string&& __str, const _Alloc& __a)
      noexcept(_Alloc_traits::_S_always_equal())
      : _M_dataplus(_M_local_data(), __a)
      {
 if (__str._M_is_local())
   {
     traits_type::copy(_M_local_buf, __str._M_local_buf,
         _S_local_capacity + 1);
     _M_length(__str.length());
     __str._M_set_length(0);
   }
 else if (_Alloc_traits::_S_always_equal()
     || __str.get_allocator() == __a)
   {
     _M_data(__str._M_data());
     _M_length(__str.length());
     _M_capacity(__str._M_allocated_capacity);
     __str._M_data(__str._M_local_buf);
     __str._M_set_length(0);
   }
 else
   _M_construct(__str.begin(), __str.end());
      }



      /**
       *  @brief  Construct string as copy of a range.
       *  @param  __beg  Start of range.
       *  @param  __end  End of range.
       *  @param  __a  Allocator to use (default is default allocator).
       */

      template<typename _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc())
 : _M_dataplus(_M_local_data(), __a)
 { _M_construct(__beg, __end); }

      /**
       *  @brief  Destroy the string instance.
       */
      ~basic_string()
      { _M_dispose(); }

      /**
       *  @brief  Assign the value of @a str to this string.
       *  @param  __str  Source string.
       */
      basic_string&
      operator=(const basic_string& __str)
      {

 if (_Alloc_traits::_S_propagate_on_copy_assign())
   {
     if (!_Alloc_traits::_S_always_equal() && !_M_is_local()
  && _M_get_allocator() != __str._M_get_allocator())
       {
  // replacement allocator cannot free existing storage
  _M_destroy(_M_allocated_capacity);
  _M_data(_M_local_data());
  _M_set_length(0);
       }
     std::__alloc_on_copy(_M_get_allocator(), __str._M_get_allocator());
   }

 return this->assign(__str);
      }

      /**
       *  @brief  Copy contents of @a s into this string.
       *  @param  __s  Source null-terminated string.
       */
      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }

      /**
       *  @brief  Set value to string of length 1.
       *  @param  __c  Source character.
       *
       *  Assigning to a character makes this string length 1 and
       *  (*this)[0] == @a c.
       */
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }


      /**
       *  @brief  Move assign the value of @a str to this string.
       *  @param  __str  Source string.
       *
       *  The contents of @a str are moved into this string (without copying).
       *  @a str is a valid, but unspecified string.
       **/
      // PR 58265, this should be noexcept.
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 2063. Contradictory requirements for string move assignment
      basic_string&
      operator=(basic_string&& __str)
      noexcept(_Alloc_traits::_S_nothrow_move())
      {
 if (!_M_is_local() && _Alloc_traits::_S_propagate_on_move_assign()
     && !_Alloc_traits::_S_always_equal()
     && _M_get_allocator() != __str._M_get_allocator())
   {
     // Destroy existing storage before replacing allocator.
     _M_destroy(_M_allocated_capacity);
     _M_data(_M_local_data());
     _M_set_length(0);
   }
 // Replace allocator if POCMA is true.
 std::__alloc_on_move(_M_get_allocator(), __str._M_get_allocator());

 if (!__str._M_is_local()
     && (_Alloc_traits::_S_propagate_on_move_assign()
       || _Alloc_traits::_S_always_equal()))
   {
     pointer __data = nullptr;
     size_type __capacity;
     if (!_M_is_local())
       {
  if (_Alloc_traits::_S_always_equal())
    {
      __data = _M_data();
      __capacity = _M_allocated_capacity;
    }
  else
    _M_destroy(_M_allocated_capacity);
       }

     _M_data(__str._M_data());
     _M_length(__str.length());
     _M_capacity(__str._M_allocated_capacity);
     if (__data)
       {
  __str._M_data(__data);
  __str._M_capacity(__capacity);
       }
     else
       __str._M_data(__str._M_local_buf);
   }
 else
     assign(__str);
 __str.clear();
 return *this;
      }

      /**
       *  @brief  Set value to string constructed from initializer %list.
       *  @param  __l  std::initializer_list.
       */
      basic_string&
      operator=(initializer_list<_CharT> __l)
      {
 this->assign(__l.begin(), __l.size());
 return *this;
      }


      // Iterators:
      /**
       *  Returns a read/write iterator that points to the first character in
       *  the %string.
       */
      iterator
      begin() noexcept
      { return iterator(_M_data()); }

      /**
       *  Returns a read-only (constant) iterator that points to the first
       *  character in the %string.
       */
      const_iterator
      begin() const noexcept
      { return const_iterator(_M_data()); }

      /**
       *  Returns a read/write iterator that points one past the last
       *  character in the %string.
       */
      iterator
      end() noexcept
      { return iterator(_M_data() + this->size()); }

      /**
       *  Returns a read-only (constant) iterator that points one past the
       *  last character in the %string.
       */
      const_iterator
      end() const noexcept
      { return const_iterator(_M_data() + this->size()); }

      /**
       *  Returns a read/write reverse iterator that points to the last
       *  character in the %string.  Iteration is done in reverse element
       *  order.
       */
      reverse_iterator
      rbegin() noexcept
      { return reverse_iterator(this->end()); }

      /**
       *  Returns a read-only (constant) reverse iterator that points
       *  to the last character in the %string.  Iteration is done in
       *  reverse element order.
       */
      const_reverse_iterator
      rbegin() const noexcept
      { return const_reverse_iterator(this->end()); }

      /**
       *  Returns a read/write reverse iterator that points to one before the
       *  first character in the %string.  Iteration is done in reverse
       *  element order.
       */
      reverse_iterator
      rend() noexcept
      { return reverse_iterator(this->begin()); }

      /**
       *  Returns a read-only (constant) reverse iterator that points
       *  to one before the first character in the %string.  Iteration
       *  is done in reverse element order.
       */
      const_reverse_iterator
      rend() const noexcept
      { return const_reverse_iterator(this->begin()); }


      /**
       *  Returns a read-only (constant) iterator that points to the first
       *  character in the %string.
       */
      const_iterator
      cbegin() const noexcept
      { return const_iterator(this->_M_data()); }

      /**
       *  Returns a read-only (constant) iterator that points one past the
       *  last character in the %string.
       */
      const_iterator
      cend() const noexcept
      { return const_iterator(this->_M_data() + this->size()); }

      /**
       *  Returns a read-only (constant) reverse iterator that points
       *  to the last character in the %string.  Iteration is done in
       *  reverse element order.
       */
      const_reverse_iterator
      crbegin() const noexcept
      { return const_reverse_iterator(this->end()); }

      /**
       *  Returns a read-only (constant) reverse iterator that points
       *  to one before the first character in the %string.  Iteration
       *  is done in reverse element order.
       */
      const_reverse_iterator
      crend() const noexcept
      { return const_reverse_iterator(this->begin()); }


    public:
      // Capacity:
      ///  Returns the number of characters in the string, not including any
      ///  null-termination.
      size_type
      size() const noexcept
      { return _M_string_length; }

      ///  Returns the number of characters in the string, not including any
      ///  null-termination.
      size_type
      length() const noexcept
      { return _M_string_length; }

      ///  Returns the size() of the largest possible %string.
      size_type
      max_size() const noexcept
      { return (_Alloc_traits::max_size(_M_get_allocator()) - 1) / 2; }

      /**
       *  @brief  Resizes the %string to the specified number of characters.
       *  @param  __n  Number of characters the %string should contain.
       *  @param  __c  Character to fill any new elements.
       *
       *  This function will %resize the %string to the specified
       *  number of characters.  If the number is smaller than the
       *  %string's current size the %string is truncated, otherwise
       *  the %string is extended and new elements are %set to @a __c.
       */
      void
      resize(size_type __n, _CharT __c);

      /**
       *  @brief  Resizes the %string to the specified number of characters.
       *  @param  __n  Number of characters the %string should contain.
       *
       *  This function will resize the %string to the specified length.  If
       *  the new size is smaller than the %string's current size the %string
       *  is truncated, otherwise the %string is extended and new characters
       *  are default-constructed.  For basic types such as char, this means
       *  setting them to 0.
       */
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }


      ///  A non-binding request to reduce capacity() to size().
      void
      shrink_to_fit() noexcept
      {

 if (capacity() > size())
   {
     try
       { reserve(0); }
     catch(...)
       { }
   }

      }


      /**
       *  Returns the total number of characters that the %string can hold
       *  before needing to allocate more memory.
       */
      size_type
      capacity() const noexcept
      {
 return _M_is_local() ? size_type(_S_local_capacity)
                      : _M_allocated_capacity;
      }

      /**
       *  @brief  Attempt to preallocate enough memory for specified number of
       *          characters.
       *  @param  __res_arg  Number of characters required.
       *  @throw  std::length_error  If @a __res_arg exceeds @c max_size().
       *
       *  This function attempts to reserve enough memory for the
       *  %string to hold the specified number of characters.  If the
       *  number requested is more than max_size(), length_error is
       *  thrown.
       *
       *  The advantage of this function is that if optimal code is a
       *  necessity and the user can determine the string length that will be
       *  required, the user can reserve the memory in %advance, and thus
       *  prevent a possible reallocation of memory and copying of %string
       *  data.
       */
      void
      reserve(size_type __res_arg = 0);

      /**
       *  Erases the string, making it empty.
       */
      void
      clear() noexcept
      { _M_set_length(0); }

      /**
       *  Returns true if the %string is empty.  Equivalent to 
       *  <code>*this == ""</code>.
       */
      bool
      empty() const noexcept
      { return this->size() == 0; }

      // Element access:
      /**
       *  @brief  Subscript access to the data contained in the %string.
       *  @param  __pos  The index of the character to access.
       *  @return  Read-only (constant) reference to the character.
       *
       *  This operator allows for easy, array-style, data access.
       *  Note that data access with this operator is unchecked and
       *  out_of_range lookups are not defined. (For checked lookups
       *  see at().)
       */
      const_reference
      operator[] (size_type __pos) const noexcept
      {
 ;
 return _M_data()[__pos];
      }

      /**
       *  @brief  Subscript access to the data contained in the %string.
       *  @param  __pos  The index of the character to access.
       *  @return  Read/write reference to the character.
       *
       *  This operator allows for easy, array-style, data access.
       *  Note that data access with this operator is unchecked and
       *  out_of_range lookups are not defined. (For checked lookups
       *  see at().)
       */
      reference
      operator[](size_type __pos)
      {
        // Allow pos == size() both in C++98 mode, as v3 extension,
 // and in C++11 mode.
 ;
        // In pedantic mode be strict in C++98 mode.
 ;
 return _M_data()[__pos];
      }

      /**
       *  @brief  Provides access to the data contained in the %string.
       *  @param __n The index of the character to access.
       *  @return  Read-only (const) reference to the character.
       *  @throw  std::out_of_range  If @a n is an invalid index.
       *
       *  This function provides for safer data access.  The parameter is
       *  first checked that it is in the range of the string.  The function
       *  throws out_of_range if the check fails.
       */
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
 return _M_data()[__n];
      }

      /**
       *  @brief  Provides access to the data contained in the %string.
       *  @param __n The index of the character to access.
       *  @return  Read/write reference to the character.
       *  @throw  std::out_of_range  If @a n is an invalid index.
       *
       *  This function provides for safer data access.  The parameter is
       *  first checked that it is in the range of the string.  The function
       *  throws out_of_range if the check fails.
       */
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
 return _M_data()[__n];
      }


      /**
       *  Returns a read/write reference to the data at the first
       *  element of the %string.
       */
      reference
      front() noexcept
      {
 ;
 return operator[](0);
      }

      /**
       *  Returns a read-only (constant) reference to the data at the first
       *  element of the %string.
       */
      const_reference
      front() const noexcept
      {
 ;
 return operator[](0);
      }

      /**
       *  Returns a read/write reference to the data at the last
       *  element of the %string.
       */
      reference
      back() noexcept
      {
 ;
 return operator[](this->size() - 1);
      }

      /**
       *  Returns a read-only (constant) reference to the data at the
       *  last element of the %string.
       */
      const_reference
      back() const noexcept
      {
 ;
 return operator[](this->size() - 1);
      }


      // Modifiers:
      /**
       *  @brief  Append a string to this string.
       *  @param __str  The string to append.
       *  @return  Reference to this string.
       */
      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }

      /**
       *  @brief  Append a C string.
       *  @param __s  The C string to append.
       *  @return  Reference to this string.
       */
      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }

      /**
       *  @brief  Append a character.
       *  @param __c  The character to append.
       *  @return  Reference to this string.
       */
      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }


      /**
       *  @brief  Append an initializer_list of characters.
       *  @param __l  The initializer_list of characters to be appended.
       *  @return  Reference to this string.
       */
      basic_string&
      operator+=(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.size()); }


      /**
       *  @brief  Append a string to this string.
       *  @param __str  The string to append.
       *  @return  Reference to this string.
       */
      basic_string&
      append(const basic_string& __str)
      { return _M_append(__str._M_data(), __str.size()); }

      /**
       *  @brief  Append a substring.
       *  @param __str  The string to append.
       *  @param __pos  Index of the first character of str to append.
       *  @param __n  The number of characters to append.
       *  @return  Reference to this string.
       *  @throw  std::out_of_range if @a __pos is not a valid index.
       *
       *  This function appends @a __n characters from @a __str
       *  starting at @a __pos to this string.  If @a __n is is larger
       *  than the number of available characters in @a __str, the
       *  remainder of @a __str is appended.
       */
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_append(__str._M_data()
    + __str._M_check(__pos, "basic_string::append"),
    __str._M_limit(__pos, __n)); }

      /**
       *  @brief  Append a C substring.
       *  @param __s  The C string to append.
       *  @param __n  The number of characters to append.
       *  @return  Reference to this string.
       */
      basic_string&
      append(const _CharT* __s, size_type __n)
      {
 ;
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }

      /**
       *  @brief  Append a C string.
       *  @param __s  The C string to append.
       *  @return  Reference to this string.
       */
      basic_string&
      append(const _CharT* __s)
      {
 ;
 const size_type __n = traits_type::length(__s);
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }

      /**
       *  @brief  Append multiple characters.
       *  @param __n  The number of characters to append.
       *  @param __c  The character to use.
       *  @return  Reference to this string.
       *
       *  Appends __n copies of __c to this string.
       */
      basic_string&
      append(size_type __n, _CharT __c)
      { return _M_replace_aux(this->size(), size_type(0), __n, __c); }


      /**
       *  @brief  Append an initializer_list of characters.
       *  @param __l  The initializer_list of characters to append.
       *  @return  Reference to this string.
       */
      basic_string&
      append(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.size()); }


      /**
       *  @brief  Append a range of characters.
       *  @param __first  Iterator referencing the first character to append.
       *  @param __last  Iterator marking the end of the range.
       *  @return  Reference to this string.
       *
       *  Appends characters in the range [__first,__last) to this string.
       */

      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(end(), end(), __first, __last); }

      /**
       *  @brief  Append a single character.
       *  @param __c  Character to append.
       */
      void
      push_back(_CharT __c)
      {
 const size_type __size = this->size();
 if (__size + 1 > this->capacity())
   this->_M_mutate(__size, size_type(0), 0, size_type(1));
 traits_type::assign(this->_M_data()[__size], __c);
 this->_M_set_length(__size + 1);
      }

      /**
       *  @brief  Set value to contents of another string.
       *  @param  __str  Source string to use.
       *  @return  Reference to this string.
       */
      basic_string&
      assign(const basic_string& __str)
      {
 this->_M_assign(__str);
 return *this;
      }


      /**
       *  @brief  Set value to contents of another string.
       *  @param  __str  Source string to use.
       *  @return  Reference to this string.
       *
       *  This function sets this string to the exact contents of @a __str.
       *  @a __str is a valid, but unspecified string.
       */
      basic_string&
      assign(basic_string&& __str)
      noexcept(_Alloc_traits::_S_nothrow_move())
      {
 // _GLIBCXX_RESOLVE_LIB_DEFECTS
 // 2063. Contradictory requirements for string move assignment
 return *this = std::move(__str);
      }


      /**
       *  @brief  Set value to a substring of a string.
       *  @param __str  The string to use.
       *  @param __pos  Index of the first character of str.
       *  @param __n  Number of characters to use.
       *  @return  Reference to this string.
       *  @throw  std::out_of_range if @a pos is not a valid index.
       *
       *  This function sets this string to the substring of @a __str
       *  consisting of @a __n characters at @a __pos.  If @a __n is
       *  is larger than the number of available characters in @a
       *  __str, the remainder of @a __str is used.
       */
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_replace(size_type(0), this->size(), __str._M_data()
     + __str._M_check(__pos, "basic_string::assign"),
     __str._M_limit(__pos, __n)); }

      /**
       *  @brief  Set value to a C substring.
       *  @param __s  The C string to use.
       *  @param __n  Number of characters to use.
       *  @return  Reference to this string.
       *
       *  This function sets the value of this string to the first @a __n
       *  characters of @a __s.  If @a __n is is larger than the number of
       *  available characters in @a __s, the remainder of @a __s is used.
       */
      basic_string&
      assign(const _CharT* __s, size_type __n)
      {
 ;
 return _M_replace(size_type(0), this->size(), __s, __n);
      }

      /**
       *  @brief  Set value to contents of a C string.
       *  @param __s  The C string to use.
       *  @return  Reference to this string.
       *
       *  This function sets the value of this string to the value of @a __s.
       *  The data is copied, so there is no dependence on @a __s once the
       *  function returns.
       */
      basic_string&
      assign(const _CharT* __s)
      {
 ;
 return _M_replace(size_type(0), this->size(), __s,
     traits_type::length(__s));
      }

      /**
       *  @brief  Set value to multiple characters.
       *  @param __n  Length of the resulting string.
       *  @param __c  The character to use.
       *  @return  Reference to this string.
       *
       *  This function sets the value of this string to @a __n copies of
       *  character @a __c.
       */
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }

      /**
       *  @brief  Set value to a range of characters.
       *  @param __first  Iterator referencing the first character to append.
       *  @param __last  Iterator marking the end of the range.
       *  @return  Reference to this string.
       *
       *  Sets value of string to characters in the range [__first,__last).
      */

      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(begin(), end(), __first, __last); }


      /**
       *  @brief  Set value to an initializer_list of characters.
       *  @param __l  The initializer_list of characters to assign.
       *  @return  Reference to this string.
       */
      basic_string&
      assign(initializer_list<_CharT> __l)
      { return this->assign(__l.begin(), __l.size()); }



      /**
       *  @brief  Insert multiple characters.
       *  @param __p  Const_iterator referencing location in string to
       *              insert at.
       *  @param __n  Number of characters to insert
       *  @param __c  The character to insert.
       *  @return  Iterator referencing the first inserted char.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Inserts @a __n copies of character @a __c starting at the
       *  position referenced by iterator @a __p.  If adding
       *  characters causes the length to exceed max_size(),
       *  length_error is thrown.  The value of the string doesn't
       *  change if an error is thrown.
      */
      iterator
      insert(const_iterator __p, size_type __n, _CharT __c)
      {
 ;
 const size_type __pos = __p - begin();
 this->replace(__p, __p, __n, __c);
 return iterator(this->_M_data() + __pos);
      }
# 1343 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
      /**
       *  @brief  Insert a range of characters.
       *  @param __p  Const_iterator referencing location in string to
       *              insert at.
       *  @param __beg  Start of range.
       *  @param __end  End of range.
       *  @return  Iterator referencing the first inserted char.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Inserts characters in range [beg,end).  If adding characters
       *  causes the length to exceed max_size(), length_error is
       *  thrown.  The value of the string doesn't change if an error
       *  is thrown.
      */
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>
 iterator
        insert(const_iterator __p, _InputIterator __beg, _InputIterator __end)
        {
   ;
   const size_type __pos = __p - begin();
   this->replace(__p, __p, __beg, __end);
   return iterator(this->_M_data() + __pos);
 }
# 1387 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
      /**
       *  @brief  Insert an initializer_list of characters.
       *  @param __p  Iterator referencing location in string to insert at.
       *  @param __l  The initializer_list of characters to insert.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       */
      void
      insert(iterator __p, initializer_list<_CharT> __l)
      {
 ;
 this->insert(__p - begin(), __l.begin(), __l.size());
      }


      /**
       *  @brief  Insert value of a string.
       *  @param __pos1  Iterator referencing location in string to insert at.
       *  @param __str  The string to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Inserts value of @a __str starting at @a __pos1.  If adding
       *  characters causes the length to exceed max_size(),
       *  length_error is thrown.  The value of the string doesn't
       *  change if an error is thrown.
      */
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->replace(__pos1, size_type(0),
        __str._M_data(), __str.size()); }

      /**
       *  @brief  Insert a substring.
       *  @param __pos1  Iterator referencing location in string to insert at.
       *  @param __str  The string to insert.
       *  @param __pos2  Start of characters in str to insert.
       *  @param __n  Number of characters to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *  @throw  std::out_of_range  If @a pos1 > size() or
       *  @a __pos2 > @a str.size().
       *
       *  Starting at @a pos1, insert @a __n character of @a __str
       *  beginning with @a __pos2.  If adding characters causes the
       *  length to exceed max_size(), length_error is thrown.  If @a
       *  __pos1 is beyond the end of this string or @a __pos2 is
       *  beyond the end of @a __str, out_of_range is thrown.  The
       *  value of the string doesn't change if an error is thrown.
      */
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->replace(__pos1, size_type(0), __str._M_data()
        + __str._M_check(__pos2, "basic_string::insert"),
        __str._M_limit(__pos2, __n)); }

      /**
       *  @brief  Insert a C substring.
       *  @param __pos  Iterator referencing location in string to insert at.
       *  @param __s  The C string to insert.
       *  @param __n  The number of characters to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *  @throw  std::out_of_range  If @a __pos is beyond the end of this
       *  string.
       *
       *  Inserts the first @a __n characters of @a __s starting at @a
       *  __pos.  If adding characters causes the length to exceed
       *  max_size(), length_error is thrown.  If @a __pos is beyond
       *  end(), out_of_range is thrown.  The value of the string
       *  doesn't change if an error is thrown.
      */
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n)
      { return this->replace(__pos, size_type(0), __s, __n); }

      /**
       *  @brief  Insert a C string.
       *  @param __pos  Iterator referencing location in string to insert at.
       *  @param __s  The C string to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *  @throw  std::out_of_range  If @a pos is beyond the end of this
       *  string.
       *
       *  Inserts the first @a n characters of @a __s starting at @a __pos.  If
       *  adding characters causes the length to exceed max_size(),
       *  length_error is thrown.  If @a __pos is beyond end(), out_of_range is
       *  thrown.  The value of the string doesn't change if an error is
       *  thrown.
      */
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
 ;
 return this->replace(__pos, size_type(0), __s,
        traits_type::length(__s));
      }

      /**
       *  @brief  Insert multiple characters.
       *  @param __pos  Index in string to insert at.
       *  @param __n  Number of characters to insert
       *  @param __c  The character to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *  @throw  std::out_of_range  If @a __pos is beyond the end of this
       *  string.
       *
       *  Inserts @a __n copies of character @a __c starting at index
       *  @a __pos.  If adding characters causes the length to exceed
       *  max_size(), length_error is thrown.  If @a __pos > length(),
       *  out_of_range is thrown.  The value of the string doesn't
       *  change if an error is thrown.
      */
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }

      /**
       *  @brief  Insert one character.
       *  @param __p  Iterator referencing position in string to insert at.
       *  @param __c  The character to insert.
       *  @return  Iterator referencing newly inserted char.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Inserts character @a __c at position referenced by @a __p.
       *  If adding character causes the length to exceed max_size(),
       *  length_error is thrown.  If @a __p is beyond end of string,
       *  out_of_range is thrown.  The value of the string doesn't
       *  change if an error is thrown.
      */
      iterator
      insert(__const_iterator __p, _CharT __c)
      {
 ;
 const size_type __pos = __p - begin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 return iterator(_M_data() + __pos);
      }

      /**
       *  @brief  Remove characters.
       *  @param __pos  Index of first character to remove (default 0).
       *  @param __n  Number of characters to remove (default remainder).
       *  @return  Reference to this string.
       *  @throw  std::out_of_range  If @a pos is beyond the end of this
       *  string.
       *
       *  Removes @a __n characters from this string starting at @a
       *  __pos.  The length of the string is reduced by @a __n.  If
       *  there are < @a __n characters to remove, the remainder of
       *  the string is truncated.  If @a __p is beyond end of string,
       *  out_of_range is thrown.  The value of the string doesn't
       *  change if an error is thrown.
      */
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 this->_M_erase(_M_check(__pos, "basic_string::erase"),
         _M_limit(__pos, __n));
 return *this;
      }

      /**
       *  @brief  Remove one character.
       *  @param __position  Iterator referencing the character to remove.
       *  @return  iterator referencing same location after removal.
       *
       *  Removes the character at @a __position from this string. The value
       *  of the string doesn't change if an error is thrown.
      */
      iterator
      erase(__const_iterator __position)
      {

                           ;
 const size_type __pos = __position - begin();
 this->_M_erase(__pos, size_type(1));
 return iterator(_M_data() + __pos);
      }

      /**
       *  @brief  Remove a range of characters.
       *  @param __first  Iterator referencing the first character to remove.
       *  @param __last  Iterator referencing the end of the range.
       *  @return  Iterator referencing location of first after removal.
       *
       *  Removes the characters in the range [first,last) from this string.
       *  The value of the string doesn't change if an error is thrown.
      */
      iterator
      erase(__const_iterator __first, __const_iterator __last)
      {

                        ;
        const size_type __pos = __first - begin();
 this->_M_erase(__pos, __last - __first);
 return iterator(this->_M_data() + __pos);
      }


      /**
       *  @brief  Remove the last character.
       *
       *  The string must be non-empty.
       */
      void
      pop_back() noexcept
      {
 ;
 _M_erase(size() - 1, 1);
      }


      /**
       *  @brief  Replace characters with value from another string.
       *  @param __pos  Index of first character to replace.
       *  @param __n  Number of characters to be replaced.
       *  @param __str  String to insert.
       *  @return  Reference to this string.
       *  @throw  std::out_of_range  If @a pos is beyond the end of this
       *  string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__pos,__pos+__n) from
       *  this string.  In place, the value of @a __str is inserted.
       *  If @a __pos is beyond end of string, out_of_range is thrown.
       *  If the length of the result exceeds max_size(), length_error
       *  is thrown.  The value of the string doesn't change if an
       *  error is thrown.
      */
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }

      /**
       *  @brief  Replace characters with value from another string.
       *  @param __pos1  Index of first character to replace.
       *  @param __n1  Number of characters to be replaced.
       *  @param __str  String to insert.
       *  @param __pos2  Index of first character of str to use.
       *  @param __n2  Number of characters from str to use.
       *  @return  Reference to this string.
       *  @throw  std::out_of_range  If @a __pos1 > size() or @a __pos2 >
       *  __str.size().
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__pos1,__pos1 + n) from this
       *  string.  In place, the value of @a __str is inserted.  If @a __pos is
       *  beyond end of string, out_of_range is thrown.  If the length of the
       *  result exceeds max_size(), length_error is thrown.  The value of the
       *  string doesn't change if an error is thrown.
      */
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }

      /**
       *  @brief  Replace characters with value of a C substring.
       *  @param __pos  Index of first character to replace.
       *  @param __n1  Number of characters to be replaced.
       *  @param __s  C string to insert.
       *  @param __n2  Number of characters from @a s to use.
       *  @return  Reference to this string.
       *  @throw  std::out_of_range  If @a pos1 > size().
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__pos,__pos + __n1)
       *  from this string.  In place, the first @a __n2 characters of
       *  @a __s are inserted, or all of @a __s if @a __n2 is too large.  If
       *  @a __pos is beyond end of string, out_of_range is thrown.  If
       *  the length of result exceeds max_size(), length_error is
       *  thrown.  The value of the string doesn't change if an error
       *  is thrown.
      */
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2)
      {
 ;
 return _M_replace(_M_check(__pos, "basic_string::replace"),
     _M_limit(__pos, __n1), __s, __n2);
      }

      /**
       *  @brief  Replace characters with value of a C string.
       *  @param __pos  Index of first character to replace.
       *  @param __n1  Number of characters to be replaced.
       *  @param __s  C string to insert.
       *  @return  Reference to this string.
       *  @throw  std::out_of_range  If @a pos > size().
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__pos,__pos + __n1)
       *  from this string.  In place, the characters of @a __s are
       *  inserted.  If @a __pos is beyond end of string, out_of_range
       *  is thrown.  If the length of result exceeds max_size(),
       *  length_error is thrown.  The value of the string doesn't
       *  change if an error is thrown.
      */
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
 ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }

      /**
       *  @brief  Replace characters with multiple characters.
       *  @param __pos  Index of first character to replace.
       *  @param __n1  Number of characters to be replaced.
       *  @param __n2  Number of characters to insert.
       *  @param __c  Character to insert.
       *  @return  Reference to this string.
       *  @throw  std::out_of_range  If @a __pos > size().
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [pos,pos + n1) from this
       *  string.  In place, @a __n2 copies of @a __c are inserted.
       *  If @a __pos is beyond end of string, out_of_range is thrown.
       *  If the length of result exceeds max_size(), length_error is
       *  thrown.  The value of the string doesn't change if an error
       *  is thrown.
      */
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }

      /**
       *  @brief  Replace range of characters with string.
       *  @param __i1  Iterator referencing start of range to replace.
       *  @param __i2  Iterator referencing end of range to replace.
       *  @param __str  String value to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__i1,__i2).  In place,
       *  the value of @a __str is inserted.  If the length of result
       *  exceeds max_size(), length_error is thrown.  The value of
       *  the string doesn't change if an error is thrown.
      */
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }

      /**
       *  @brief  Replace range of characters with C substring.
       *  @param __i1  Iterator referencing start of range to replace.
       *  @param __i2  Iterator referencing end of range to replace.
       *  @param __s  C string value to insert.
       *  @param __n  Number of characters from s to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__i1,__i2).  In place,
       *  the first @a __n characters of @a __s are inserted.  If the
       *  length of result exceeds max_size(), length_error is thrown.
       *  The value of the string doesn't change if an error is
       *  thrown.
      */
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __s, size_type __n)
      {

                      ;
 return this->replace(__i1 - begin(), __i2 - __i1, __s, __n);
      }

      /**
       *  @brief  Replace range of characters with C string.
       *  @param __i1  Iterator referencing start of range to replace.
       *  @param __i2  Iterator referencing end of range to replace.
       *  @param __s  C string value to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__i1,__i2).  In place,
       *  the characters of @a __s are inserted.  If the length of
       *  result exceeds max_size(), length_error is thrown.  The
       *  value of the string doesn't change if an error is thrown.
      */
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, const _CharT* __s)
      {
 ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }

      /**
       *  @brief  Replace range of characters with multiple characters
       *  @param __i1  Iterator referencing start of range to replace.
       *  @param __i2  Iterator referencing end of range to replace.
       *  @param __n  Number of characters to insert.
       *  @param __c  Character to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__i1,__i2).  In place,
       *  @a __n copies of @a __c are inserted.  If the length of
       *  result exceeds max_size(), length_error is thrown.  The
       *  value of the string doesn't change if an error is thrown.
      */
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, size_type __n,
       _CharT __c)
      {

                      ;
 return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __c);
      }

      /**
       *  @brief  Replace range of characters with range.
       *  @param __i1  Iterator referencing start of range to replace.
       *  @param __i2  Iterator referencing end of range to replace.
       *  @param __k1  Iterator referencing start of range to insert.
       *  @param __k2  Iterator referencing end of range to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__i1,__i2).  In place,
       *  characters in the range [__k1,__k2) are inserted.  If the
       *  length of result exceeds max_size(), length_error is thrown.
       *  The value of the string doesn't change if an error is
       *  thrown.
      */

      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>
        basic_string&
        replace(const_iterator __i1, const_iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {
  
                        ;
   ;
   return this->_M_replace_dispatch(__i1, __i2, __k1, __k2,
        std::__false_type());
 }
# 1852 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
      // Specializations for the common case of pointer and iterator:
      // useful to avoid the overhead of temporary buffering in _M_replace.
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       _CharT* __k1, _CharT* __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       iterator __k1, iterator __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }


      /**
       *  @brief  Replace range of characters with initializer_list.
       *  @param __i1  Iterator referencing start of range to replace.
       *  @param __i2  Iterator referencing end of range to replace.
       *  @param __l  The initializer_list of characters to insert.
       *  @return  Reference to this string.
       *  @throw  std::length_error  If new length exceeds @c max_size().
       *
       *  Removes the characters in the range [__i1,__i2).  In place,
       *  characters in the range [__k1,__k2) are inserted.  If the
       *  length of result exceeds max_size(), length_error is thrown.
       *  The value of the string doesn't change if an error is
       *  thrown.
      */
      basic_string& replace(const_iterator __i1, const_iterator __i2,
       initializer_list<_CharT> __l)
      { return this->replace(__i1, __i2, __l.begin(), __l.end()); }


    
# 1918 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h"
   public
# 1918 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
          :
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _Integer __n, _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _InputIterator __k1, _InputIterator __k2,
       __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
   const size_type __len2);

      basic_string&
      _M_append(const _CharT* __s, size_type __n);

    public:

      /**
       *  @brief  Copy substring into C string.
       *  @param __s  C string to copy value into.
       *  @param __n  Number of characters to copy.
       *  @param __pos  Index of first character to copy.
       *  @return  Number of characters actually copied
       *  @throw  std::out_of_range  If __pos > size().
       *
       *  Copies up to @a __n characters starting at @a __pos into the
       *  C string @a __s.  If @a __pos is %greater than size(),
       *  out_of_range is thrown.
      */
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;

      /**
       *  @brief  Swap contents with another string.
       *  @param __s  String to swap with.
       *
       *  Exchanges the contents of this string with that of @a __s in constant
       *  time.
      */
      void
      swap(basic_string& __s) noexcept;

      // String operations:
      /**
       *  @brief  Return const pointer to null-terminated contents.
       *
       *  This is a handle to internal data.  Do not modify or dire things may
       *  happen.
      */
      const _CharT*
      c_str() const noexcept
      { return _M_data(); }

      /**
       *  @brief  Return const pointer to contents.
       *
       *  This is a handle to internal data.  Do not modify or dire things may
       *  happen.
      */
      const _CharT*
      data() const noexcept
      { return _M_data(); }

      /**
       *  @brief  Return copy of allocator used to construct this string.
      */
      allocator_type
      get_allocator() const noexcept
      { return _M_get_allocator(); }

      /**
       *  @brief  Find position of a C substring.
       *  @param __s  C string to locate.
       *  @param __pos  Index of character to search from.
       *  @param __n  Number of characters from @a s to search for.
       *  @return  Index of start of first occurrence.
       *
       *  Starting from @a __pos, searches forward for the first @a
       *  __n characters in @a __s within this string.  If found,
       *  returns the index where it begins.  If not found, returns
       *  npos.
      */
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;

      /**
       *  @brief  Find position of a string.
       *  @param __str  String to locate.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of start of first occurrence.
       *
       *  Starting from @a __pos, searches forward for value of @a __str within
       *  this string.  If found, returns the index where it begins.  If not
       *  found, returns npos.
      */
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find(__str.data(), __pos, __str.size()); }

      /**
       *  @brief  Find position of a C string.
       *  @param __s  C string to locate.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of start of first occurrence.
       *
       *  Starting from @a __pos, searches forward for the value of @a
       *  __s within this string.  If found, returns the index where
       *  it begins.  If not found, returns npos.
      */
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find(__s, __pos, traits_type::length(__s));
      }

      /**
       *  @brief  Find position of a character.
       *  @param __c  Character to locate.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for @a __c within
       *  this string.  If found, returns the index where it was
       *  found.  If not found, returns npos.
      */
      size_type
      find(_CharT __c, size_type __pos = 0) const noexcept;

      /**
       *  @brief  Find last position of a string.
       *  @param __str  String to locate.
       *  @param __pos  Index of character to search back from (default end).
       *  @return  Index of start of last occurrence.
       *
       *  Starting from @a __pos, searches backward for value of @a
       *  __str within this string.  If found, returns the index where
       *  it begins.  If not found, returns npos.
      */
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->rfind(__str.data(), __pos, __str.size()); }

      /**
       *  @brief  Find last position of a C substring.
       *  @param __s  C string to locate.
       *  @param __pos  Index of character to search back from.
       *  @param __n  Number of characters from s to search for.
       *  @return  Index of start of last occurrence.
       *
       *  Starting from @a __pos, searches backward for the first @a
       *  __n characters in @a __s within this string.  If found,
       *  returns the index where it begins.  If not found, returns
       *  npos.
      */
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;

      /**
       *  @brief  Find last position of a C string.
       *  @param __s  C string to locate.
       *  @param __pos  Index of character to start search at (default end).
       *  @return  Index of start of  last occurrence.
       *
       *  Starting from @a __pos, searches backward for the value of
       *  @a __s within this string.  If found, returns the index
       *  where it begins.  If not found, returns npos.
      */
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }

      /**
       *  @brief  Find last position of a character.
       *  @param __c  Character to locate.
       *  @param __pos  Index of character to search back from (default end).
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for @a __c within
       *  this string.  If found, returns the index where it was
       *  found.  If not found, returns npos.
      */
      size_type
      rfind(_CharT __c, size_type __pos = npos) const noexcept;

      /**
       *  @brief  Find position of a character of string.
       *  @param __str  String containing characters to locate.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for one of the
       *  characters of @a __str within this string.  If found,
       *  returns the index where it was found.  If not found, returns
       *  npos.
      */
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find_first_of(__str.data(), __pos, __str.size()); }

      /**
       *  @brief  Find position of a character of C substring.
       *  @param __s  String containing characters to locate.
       *  @param __pos  Index of character to search from.
       *  @param __n  Number of characters from s to search for.
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for one of the
       *  first @a __n characters of @a __s within this string.  If
       *  found, returns the index where it was found.  If not found,
       *  returns npos.
      */
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;

      /**
       *  @brief  Find position of a character of C string.
       *  @param __s  String containing characters to locate.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for one of the
       *  characters of @a __s within this string.  If found, returns
       *  the index where it was found.  If not found, returns npos.
      */
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }

      /**
       *  @brief  Find position of a character.
       *  @param __c  Character to locate.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for the character
       *  @a __c within this string.  If found, returns the index
       *  where it was found.  If not found, returns npos.
       *
       *  Note: equivalent to find(__c, __pos).
      */
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const noexcept
      { return this->find(__c, __pos); }

      /**
       *  @brief  Find last position of a character of string.
       *  @param __str  String containing characters to locate.
       *  @param __pos  Index of character to search back from (default end).
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for one of the
       *  characters of @a __str within this string.  If found,
       *  returns the index where it was found.  If not found, returns
       *  npos.
      */
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->find_last_of(__str.data(), __pos, __str.size()); }

      /**
       *  @brief  Find last position of a character of C substring.
       *  @param __s  C string containing characters to locate.
       *  @param __pos  Index of character to search back from.
       *  @param __n  Number of characters from s to search for.
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for one of the
       *  first @a __n characters of @a __s within this string.  If
       *  found, returns the index where it was found.  If not found,
       *  returns npos.
      */
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;

      /**
       *  @brief  Find last position of a character of C string.
       *  @param __s  C string containing characters to locate.
       *  @param __pos  Index of character to search back from (default end).
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for one of the
       *  characters of @a __s within this string.  If found, returns
       *  the index where it was found.  If not found, returns npos.
      */
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }

      /**
       *  @brief  Find last position of a character.
       *  @param __c  Character to locate.
       *  @param __pos  Index of character to search back from (default end).
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for @a __c within
       *  this string.  If found, returns the index where it was
       *  found.  If not found, returns npos.
       *
       *  Note: equivalent to rfind(__c, __pos).
      */
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const noexcept
      { return this->rfind(__c, __pos); }

      /**
       *  @brief  Find position of a character not in string.
       *  @param __str  String containing characters to avoid.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for a character not contained
       *  in @a __str within this string.  If found, returns the index where it
       *  was found.  If not found, returns npos.
      */
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }

      /**
       *  @brief  Find position of a character not in C substring.
       *  @param __s  C string containing characters to avoid.
       *  @param __pos  Index of character to search from.
       *  @param __n  Number of characters from __s to consider.
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for a character not
       *  contained in the first @a __n characters of @a __s within
       *  this string.  If found, returns the index where it was
       *  found.  If not found, returns npos.
      */
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;

      /**
       *  @brief  Find position of a character not in C string.
       *  @param __s  C string containing characters to avoid.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for a character not
       *  contained in @a __s within this string.  If found, returns
       *  the index where it was found.  If not found, returns npos.
      */
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }

      /**
       *  @brief  Find position of a different character.
       *  @param __c  Character to avoid.
       *  @param __pos  Index of character to search from (default 0).
       *  @return  Index of first occurrence.
       *
       *  Starting from @a __pos, searches forward for a character
       *  other than @a __c within this string.  If found, returns the
       *  index where it was found.  If not found, returns npos.
      */
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const
 noexcept;

      /**
       *  @brief  Find last position of a character not in string.
       *  @param __str  String containing characters to avoid.
       *  @param __pos  Index of character to search back from (default end).
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for a character
       *  not contained in @a __str within this string.  If found,
       *  returns the index where it was found.  If not found, returns
       *  npos.
      */
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }

      /**
       *  @brief  Find last position of a character not in C substring.
       *  @param __s  C string containing characters to avoid.
       *  @param __pos  Index of character to search back from.
       *  @param __n  Number of characters from s to consider.
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for a character not
       *  contained in the first @a __n characters of @a __s within this string.
       *  If found, returns the index where it was found.  If not found,
       *  returns npos.
      */
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
      /**
       *  @brief  Find last position of a character not in C string.
       *  @param __s  C string containing characters to avoid.
       *  @param __pos  Index of character to search back from (default end).
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for a character
       *  not contained in @a __s within this string.  If found,
       *  returns the index where it was found.  If not found, returns
       *  npos.
      */
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }

      /**
       *  @brief  Find last position of a different character.
       *  @param __c  Character to avoid.
       *  @param __pos  Index of character to search back from (default end).
       *  @return  Index of last occurrence.
       *
       *  Starting from @a __pos, searches backward for a character other than
       *  @a __c within this string.  If found, returns the index where it was
       *  found.  If not found, returns npos.
      */
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const
 noexcept;

      /**
       *  @brief  Get a substring.
       *  @param __pos  Index of first character (default 0).
       *  @param __n  Number of characters in substring (default remainder).
       *  @return  The new string.
       *  @throw  std::out_of_range  If __pos > size().
       *
       *  Construct and return a new string using the @a __n
       *  characters starting at @a __pos.  If the string is too
       *  short, use the remainder of the characters.  If @a __pos is
       *  beyond the end of the string, out_of_range is thrown.
      */
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }

      /**
       *  @brief  Compare to a string.
       *  @param __str  String to compare against.
       *  @return  Integer < 0, 0, or > 0.
       *
       *  Returns an integer < 0 if this string is ordered before @a
       *  __str, 0 if their values are equivalent, or > 0 if this
       *  string is ordered after @a __str.  Determines the effective
       *  length rlen of the strings to compare as the smallest of
       *  size() and str.size().  The function then compares the two
       *  strings by calling traits::compare(data(), str.data(),rlen).
       *  If the result of the comparison is nonzero returns it,
       *  otherwise the shorter one is ordered first.
      */
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }

      /**
       *  @brief  Compare substring to a string.
       *  @param __pos  Index of first character of substring.
       *  @param __n  Number of characters in substring.
       *  @param __str  String to compare against.
       *  @return  Integer < 0, 0, or > 0.
       *
       *  Form the substring of this string from the @a __n characters
       *  starting at @a __pos.  Returns an integer < 0 if the
       *  substring is ordered before @a __str, 0 if their values are
       *  equivalent, or > 0 if the substring is ordered after @a
       *  __str.  Determines the effective length rlen of the strings
       *  to compare as the smallest of the length of the substring
       *  and @a __str.size().  The function then compares the two
       *  strings by calling
       *  traits::compare(substring.data(),str.data(),rlen).  If the
       *  result of the comparison is nonzero returns it, otherwise
       *  the shorter one is ordered first.
      */
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;

      /**
       *  @brief  Compare substring to a substring.
       *  @param __pos1  Index of first character of substring.
       *  @param __n1  Number of characters in substring.
       *  @param __str  String to compare against.
       *  @param __pos2  Index of first character of substring of str.
       *  @param __n2  Number of characters in substring of str.
       *  @return  Integer < 0, 0, or > 0.
       *
       *  Form the substring of this string from the @a __n1
       *  characters starting at @a __pos1.  Form the substring of @a
       *  __str from the @a __n2 characters starting at @a __pos2.
       *  Returns an integer < 0 if this substring is ordered before
       *  the substring of @a __str, 0 if their values are equivalent,
       *  or > 0 if this substring is ordered after the substring of
       *  @a __str.  Determines the effective length rlen of the
       *  strings to compare as the smallest of the lengths of the
       *  substrings.  The function then compares the two strings by
       *  calling
       *  traits::compare(substring.data(),str.substr(pos2,n2).data(),rlen).
       *  If the result of the comparison is nonzero returns it,
       *  otherwise the shorter one is ordered first.
      */
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;

      /**
       *  @brief  Compare to a C string.
       *  @param __s  C string to compare against.
       *  @return  Integer < 0, 0, or > 0.
       *
       *  Returns an integer < 0 if this string is ordered before @a __s, 0 if
       *  their values are equivalent, or > 0 if this string is ordered after
       *  @a __s.  Determines the effective length rlen of the strings to
       *  compare as the smallest of size() and the length of a string
       *  constructed from @a __s.  The function then compares the two strings
       *  by calling traits::compare(data(),s,rlen).  If the result of the
       *  comparison is nonzero returns it, otherwise the shorter one is
       *  ordered first.
      */
      int
      compare(const _CharT* __s) const;

      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 5 String::compare specification questionable
      /**
       *  @brief  Compare substring to a C string.
       *  @param __pos  Index of first character of substring.
       *  @param __n1  Number of characters in substring.
       *  @param __s  C string to compare against.
       *  @return  Integer < 0, 0, or > 0.
       *
       *  Form the substring of this string from the @a __n1
       *  characters starting at @a pos.  Returns an integer < 0 if
       *  the substring is ordered before @a __s, 0 if their values
       *  are equivalent, or > 0 if the substring is ordered after @a
       *  __s.  Determines the effective length rlen of the strings to
       *  compare as the smallest of the length of the substring and
       *  the length of a string constructed from @a __s.  The
       *  function then compares the two string by calling
       *  traits::compare(substring.data(),__s,rlen).  If the result of
       *  the comparison is nonzero returns it, otherwise the shorter
       *  one is ordered first.
      */
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;

      /**
       *  @brief  Compare substring against a character %array.
       *  @param __pos  Index of first character of substring.
       *  @param __n1  Number of characters in substring.
       *  @param __s  character %array to compare against.
       *  @param __n2  Number of characters of s.
       *  @return  Integer < 0, 0, or > 0.
       *
       *  Form the substring of this string from the @a __n1
       *  characters starting at @a __pos.  Form a string from the
       *  first @a __n2 characters of @a __s.  Returns an integer < 0
       *  if this substring is ordered before the string from @a __s,
       *  0 if their values are equivalent, or > 0 if this substring
       *  is ordered after the string from @a __s.  Determines the
       *  effective length rlen of the strings to compare as the
       *  smallest of the length of the substring and @a __n2.  The
       *  function then compares the two strings by calling
       *  traits::compare(substring.data(),s,rlen).  If the result of
       *  the comparison is nonzero returns it, otherwise the shorter
       *  one is ordered first.
       *
       *  NB: s must have at least n2 characters, &apos;\\0&apos; has
       *  no special meaning.
      */
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
}
# 4920 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
  // operator+
  /**
   *  @brief  Concatenate two strings.
   *  @param __lhs  First string.
   *  @param __rhs  Last string.
   *  @return  New string with value of @a __lhs followed by @a __rhs.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }

  /**
   *  @brief  Concatenate C string and string.
   *  @param __lhs  First string.
   *  @param __rhs  Last string.
   *  @return  New string with value of @a __lhs followed by @a __rhs.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);

  /**
   *  @brief  Concatenate character and string.
   *  @param __lhs  First string.
   *  @param __rhs  Last string.
   *  @return  New string with @a __lhs followed by @a __rhs.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);

  /**
   *  @brief  Concatenate string and C string.
   *  @param __lhs  First string.
   *  @param __rhs  Last string.
   *  @return  New string with @a __lhs followed by @a __rhs.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }

  /**
   *  @brief  Concatenate string and character.
   *  @param __lhs  First string.
   *  @param __rhs  Last string.
   *  @return  New string with @a __lhs followed by @a __rhs.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return std::move(__lhs.append(__rhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    {
      const auto __size = __lhs.size() + __rhs.size();
      const bool __cond = (__size > __lhs.capacity()
      && __size <= __rhs.capacity());
      return __cond ? std::move(__rhs.insert(0, __lhs))
             : std::move(__lhs.append(__rhs));
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, 1, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       const _CharT* __rhs)
    { return std::move(__lhs.append(__rhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       _CharT __rhs)
    { return std::move(__lhs.append(1, __rhs)); }


  // operator ==
  /**
   *  @brief  Test equivalence of two strings.
   *  @param __lhs  First string.
   *  @param __rhs  Second string.
   *  @return  True if @a __lhs.compare(@a __rhs) == 0.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs) noexcept
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }

  /**
   *  @brief  Test equivalence of C string and string.
   *  @param __lhs  C string.
   *  @param __rhs  String.
   *  @return  True if @a __rhs.compare(@a __lhs) == 0.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }

  /**
   *  @brief  Test equivalence of string and C string.
   *  @param __lhs  String.
   *  @param __rhs  C string.
   *  @return  True if @a __lhs.compare(@a __rhs) == 0.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }

  // operator !=
  /**
   *  @brief  Test difference of two strings.
   *  @param __lhs  First string.
   *  @param __rhs  Second string.
   *  @return  True if @a __lhs.compare(@a __rhs) != 0.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return !(__lhs == __rhs); }

  /**
   *  @brief  Test difference of C string and string.
   *  @param __lhs  C string.
   *  @param __rhs  String.
   *  @return  True if @a __rhs.compare(@a __lhs) != 0.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }

  /**
   *  @brief  Test difference of string and C string.
   *  @param __lhs  String.
   *  @param __rhs  C string.
   *  @return  True if @a __lhs.compare(@a __rhs) != 0.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }

  // operator <
  /**
   *  @brief  Test if string precedes string.
   *  @param __lhs  First string.
   *  @param __rhs  Second string.
   *  @return  True if @a __lhs precedes @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) < 0; }

  /**
   *  @brief  Test if string precedes C string.
   *  @param __lhs  String.
   *  @param __rhs  C string.
   *  @return  True if @a __lhs precedes @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }

  /**
   *  @brief  Test if C string precedes string.
   *  @param __lhs  C string.
   *  @param __rhs  String.
   *  @return  True if @a __lhs precedes @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }

  // operator >
  /**
   *  @brief  Test if string follows string.
   *  @param __lhs  First string.
   *  @param __rhs  Second string.
   *  @return  True if @a __lhs follows @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) > 0; }

  /**
   *  @brief  Test if string follows C string.
   *  @param __lhs  String.
   *  @param __rhs  C string.
   *  @return  True if @a __lhs follows @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }

  /**
   *  @brief  Test if C string follows string.
   *  @param __lhs  C string.
   *  @param __rhs  String.
   *  @return  True if @a __lhs follows @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }

  // operator <=
  /**
   *  @brief  Test if string doesn't follow string.
   *  @param __lhs  First string.
   *  @param __rhs  Second string.
   *  @return  True if @a __lhs doesn't follow @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) <= 0; }

  /**
   *  @brief  Test if string doesn't follow C string.
   *  @param __lhs  String.
   *  @param __rhs  C string.
   *  @return  True if @a __lhs doesn't follow @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }

  /**
   *  @brief  Test if C string doesn't follow string.
   *  @param __lhs  C string.
   *  @param __rhs  String.
   *  @return  True if @a __lhs doesn't follow @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }

  // operator >=
  /**
   *  @brief  Test if string doesn't precede string.
   *  @param __lhs  First string.
   *  @param __rhs  Second string.
   *  @return  True if @a __lhs doesn't precede @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) >= 0; }

  /**
   *  @brief  Test if string doesn't precede C string.
   *  @param __lhs  String.
   *  @param __rhs  C string.
   *  @return  True if @a __lhs doesn't precede @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }

  /**
   *  @brief  Test if C string doesn't precede string.
   *  @param __lhs  C string.
   *  @param __rhs  String.
   *  @return  True if @a __lhs doesn't precede @a __rhs.  False otherwise.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }

  /**
   *  @brief  Swap contents of two strings.
   *  @param __lhs  First string.
   *  @param __rhs  Second string.
   *
   *  Exchanges the contents of @a __lhs and @a __rhs in constant time.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept(noexcept(__lhs.swap(__rhs)))
    { __lhs.swap(__rhs); }


  /**
   *  @brief  Read stream into a string.
   *  @param __is  Input stream.
   *  @param __str  Buffer to store into.
   *  @return  Reference to the input stream.
   *
   *  Stores characters from @a __is into @a __str until whitespace is
   *  found, the end of the stream is encountered, or str.max_size()
   *  is reached.  If is.width() is non-zero, that is the limit on the
   *  number of characters stored into @a __str.  Any previous
   *  contents of @a __str are erased.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);

  /**
   *  @brief  Write string to a stream.
   *  @param __os  Output stream.
   *  @param __str  String to write out.
   *  @return  Reference to the output stream.
   *
   *  Output characters of @a __str into os following the same rules as for
   *  writing a C string.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 586. string inserter not a formatted function
      return __ostream_insert(__os, __str.data(), __str.size());
    }

  /**
   *  @brief  Read a line from stream into a string.
   *  @param __is  Input stream.
   *  @param __str  Buffer to store into.
   *  @param __delim  Character marking end of line.
   *  @return  Reference to the input stream.
   *
   *  Stores characters from @a __is into @a __str until @a __delim is
   *  found, the end of the stream is encountered, or str.max_size()
   *  is reached.  Any previous contents of @a __str are erased.  If
   *  @a __delim is encountered, it is extracted but not stored into
   *  @a __str.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);

  /**
   *  @brief  Read a line from stream into a string.
   *  @param __is  Input stream.
   *  @param __str  Buffer to store into.
   *  @return  Reference to the input stream.
   *
   *  Stores characters from is into @a __str until &apos;\n&apos; is
   *  found, the end of the stream is encountered, or str.max_size()
   *  is reached.  Any previous contents of @a __str are erased.  If
   *  end of line is encountered, it is extracted but not stored into
   *  @a __str.
   */
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return std::getline(__is, __str, __is.widen('\n')); }


  /// Read a line from an rvalue stream into a string.
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>&& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    { return std::getline(__is, __str, __delim); }

  /// Read a line from an rvalue stream into a string.
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>&& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return std::getline(__is, __str); }


  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);



} // namespace



# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 1 3
// String Conversions -*- C++ -*-

// Copyright (C) 2008-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/string_conversions.h
 *  This file is a GNU extension to the Standard C++ Library.
 */




       
# 33 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 3





# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 39 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\numeric_traits.h" 1 3
// -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.

// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file ext/numeric_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functexcept.h" 1 3
// Function-Based Exception Support -*- C++ -*-

// Copyright (C) 2001-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/functexcept.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{exception}
 *
 *  This header provides support for -fno-exceptions.
 */

//
// ISO C++ 14882: 19.1  Exception classes
//
# 41 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cstdlib
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdlib.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 20.4.6  C library
//

       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 2 3
# 72 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 3
// Need to ensure this finds the C library's <stdlib.h> not a libstdc++
// wrapper that might already be installed later in the include search path.

# 1 "c:\\vcast\\mingw\\include\\stdlib.h" 1 3
/*
 * stdlib.h
 *
 * ANSI/POSIX + Microsoft compatible standard library function prototypes,
 * associated macros, and manifest constant definitions.
 *
 * $Id: stdlib.h,v 2f3798017d64 2016/11/28 14:14:48 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2009, 2011, 2014-2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

       
# 35 "c:\\vcast\\mingw\\include\\stdlib.h" 3

/* Some of the content of this header is made selectively accessible,
 * when indirectly included via <wchar.h>; only when we have established
 * that this inclusion is NOT via this selective method...
 */

 /* ...do we define the repeat inclusion guard for <stdlib.h> itself.
  */


/* All MinGW headers must include <_mingw.h>; if included via <wchar.h>,
 * we assume that this has been done already, otherwise we must attend to
 * it for <stdlib.h>.
 */






# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 56 "c:\\vcast\\mingw\\include\\stdlib.h" 2 3


/* RAND_MAX is the maximum value that may be returned by rand.
 * The minimum is zero.
 */


/* These values may be used as exit status codes.
 */



/* Definitions for path name functions.
 * NOTE: All of these values have simply been chosen to be conservatively
 * high.  Remember that with long file names we can no longer depend on
 * extensions being short.
 */
# 90 "c:\\vcast\\mingw\\include\\stdlib.h" 3
extern "C" {



/* This seems like a convenient place to declare these variables, which
 * give programs using WinMain (or main for that matter) access to main-ish
 * argc and argv. environ is a pointer to a table of environment variables.
 * NOTE: Strings in _argv and environ are ANSI strings.
 */
extern int _argc;
extern char **_argv;


/* Imports from the runtime DLL, for the above variables.
 */
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__p___argc(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char ***__p___argv(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t ***__p___wargv(void);
# 159 "c:\\vcast\\mingw\\include\\stdlib.h" 3
/* FIXME: Nominally in <errno.h>, Microsoft likes to declare errno
 * in <stdlib.h> as well; we should factor this out.
 */




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *_errno(void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__doserrno(void);



/* Use environ from the DLL, not as a global.
 */


extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char ***__p__environ(void);

extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t ***__p__wenviron(void);
# 195 "c:\\vcast\\mingw\\include\\stdlib.h" 3
/* One of the MSVCRTxx libraries */






extern __attribute__((__dllimport__)) int _sys_nerr;
# 227 "c:\\vcast\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) char *_sys_errlist[];






/* OS version and such constants.
 */


extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__osver(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winver(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winmajor(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winminor(void);
# 250 "c:\\vcast\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) unsigned int _osver;
extern __attribute__((__dllimport__)) unsigned int _winver;
extern __attribute__((__dllimport__)) unsigned int _winmajor;
extern __attribute__((__dllimport__)) unsigned int _winminor;
# 285 "c:\\vcast\\mingw\\include\\stdlib.h" 3
/* Although _pgmptr is exported as DATA, be safe and use the access
 * function __p__pgmptr() to get it.
 */

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char **__p__pgmptr(void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t **__p__wpgmptr(void);
# 309 "c:\\vcast\\mingw\\include\\stdlib.h" 3
/* This variable determines the default file mode.
 * TODO: Which flags work?
 */
# 325 "c:\\vcast\\mingw\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) int _fmode;
# 335 "c:\\vcast\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int atoi (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long atol (const char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double strtod (const char *, char **);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double atof (const char *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _wtof (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wtoi (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long _wtol (const wchar_t *);
# 373 "c:\\vcast\\mingw\\include\\stdlib.h" 3
/* Irrespective of requested standards conformity, where MSVCRT.DLL
 * falls short, ISO-C99 offers this pair of alternative return type
 * specific variants of strtod(), which MSVCRT.DLL does not, but we
 * do, in libmingwex.a:
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__))
float strtof (const char *__restrict__, char **__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long double strtold (const char *__restrict__, char **__restrict__);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long strtol (const char *, char **, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long strtoul (const char *, char **, int);
# 474 "c:\\vcast\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcstombs (char *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wctomb (char *, wchar_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mblen (const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbstowcs (wchar_t *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mbtowc (wchar_t *, const char *, size_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rand (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void srand (unsigned int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *calloc (size_t, size_t) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *malloc (size_t) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *realloc (void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void free (void *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void abort (void) __attribute__((__noreturn__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void exit (int) __attribute__((__noreturn__));

/* Note: this is in startup code, not imported directly from the runtime DLL
 */
int __attribute__((__cdecl__)) __attribute__((__nothrow__)) atexit (void (*)(void));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int system (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *getenv (const char *);

/* bsearch() and qsort() are declared both here, in <stdlib.h>, and in
 * non-ANSI header <search.h>; we reproduce these declarations in both,
 * with no attempt to guard them, so the compiler may verify that they
 * are consistent, if both headers are included.
 */
 __attribute__((__cdecl__)) void *bsearch
(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));

 __attribute__((__cdecl__)) void qsort
(void *, size_t, size_t, int (*)(const void *, const void *));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int abs (int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long labs (long) __attribute__((__const__));

/* div_t and ldiv_t are structures used to return the results of div()
 * and ldiv() functions.
 *
 * NOTE: div() and ldiv() appear not to work correctly unless
 *       -fno-pcc-struct-return is specified. This is included in the
 *       mingw32 specs file.
 */
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) div_t div (int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) ldiv_t ldiv (long, long) __attribute__((__const__));


/* Although not nominally valid in "__STRICT_ANSI__" mode, when compiling C99
 * source, we use Microsoft's _exit() function to facilitate our provision of
 * an inline implementation of ISO-C99's _Exit() function.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _exit (int) __attribute__((__noreturn__));


/* Similarly, we use Microsoft's MSVCRT.DLL specific _atoi64() function,
 * to facilitate an inline implementation of ISO-C99's atoll() function.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _atoi64 (const char *);





/* NOTE: Officially the three following functions are obsolete. The Win32 API
 *       functions SetErrorMode, Beep and Sleep are their replacements.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _beep (unsigned int, unsigned int) __attribute__((__deprecated__));
/* Not to be confused with  _set_error_mode (int).  */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _seterrormode (int) __attribute__((__deprecated__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _sleep (unsigned long) __attribute__((__deprecated__));

/* _onexit is a Microsoft extension. Use atexit for portability. */
/* Note: This is in startup code, not imported directly from dll */
typedef int (* _onexit_t)(void);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) _onexit_t _onexit( _onexit_t );

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putenv (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _searchenv (const char *, const char *, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ecvt (double, int, int *, int *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_fcvt (double, int, int *, int *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_gcvt (double, int, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _makepath (char *, const char *, const char *, const char *, const char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _splitpath (const char *, char *, char *, char *, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_fullpath (char*, const char*, size_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_itoa (int, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ltoa (long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ultoa(unsigned long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_itow (int, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_ltow (long, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_ultow (unsigned long, wchar_t *, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* _i64toa (long long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* _ui64toa (unsigned long long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _wtoi64 (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t* _i64tow (long long, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t* _ui64tow (unsigned long long, wchar_t *, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int (_rotl)(unsigned int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int (_rotr)(unsigned int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long (_lrotl)(unsigned long, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long (_lrotr)(unsigned long, int) __attribute__((__const__));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _set_error_mode (int);
# 628 "c:\\vcast\\mingw\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putenv (const char*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void searchenv (const char*, const char*, char*);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* itoa (int, char*, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* ltoa (long, char*, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* ecvt (double, int, int*, int*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* fcvt (double, int, int*, int*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* gcvt (double, int, char*);






/* Further APIs required to support ISO-C99, but missing from MSVCRT.DLL;
 * we provide them in libmingwex.a:
 *
 * ISO-C99 name for _exit()
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) void _Exit(int) __attribute__((__noreturn__));






typedef struct { long long quot, rem; } lldiv_t;
__attribute__((__cdecl__)) __attribute__((__nothrow__)) lldiv_t lldiv (long long, long long) __attribute__((__const__));

__attribute__((__cdecl__)) __attribute__((__nothrow__)) long long llabs (long long);
# 670 "c:\\vcast\\mingw\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
long long strtoll (const char *__restrict__, char **__restrict, int);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long long strtoull (const char *__restrict__, char **__restrict__, int);


/* MSVCRT.DLL does not provide ISO-C99's atoll() function, but it does
 * provide an analogue, in _atoi64(); map it accordingly.
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) long long atoll (const char *);
# 716 "c:\\vcast\\mingw\\include\\stdlib.h" 3
/* Type long long analogues for MSVCRT.DLL specific type long functions;
 * none are actually provided by any version of MSVCRT.DLL, with names as
 * specified here, but rather as called by the inline functions used to
 * implement them, (i.e. the REMAPPED name specified in each__JMPSTUB__
 * function reference respectively).
 *
 * FIXME: Not one of these is specified by ISO-C99, nor by POSIX, either;
 * is there really any justification for us to specify them at all?  For
 * the time being, declare as deprecated; perhaps remove later?
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) long long wtoll (const wchar_t *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) char *lltoa (long long, char *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) char *ulltoa (unsigned long long , char *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) wchar_t *lltow (long long, wchar_t *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) wchar_t *ulltow (unsigned long long, wchar_t *, int);
# 758 "c:\\vcast\\mingw\\include\\stdlib.h" 3
/* POSIX/BSD extensions in libmingwex.a; these should be exposed only on
 * the basis of appropriate POSIX or BSD specific feature tests...
 *
 * mkstemp(3) function support; added per feature request #2003.
 * POSIX wants _XOPEN_SOURCE >= 500, (implying _POSIX_C_SOURCE >= 200112L).
 */


__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkstemp (char *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __mingw_mkstemp (int, char *);

/* On POSIX platforms, programmers may adopt an idiom such as:
 *
 *   if( mkstemp( template ) >= 0 )
 *   { unlink( template );
 *     . . .
 *   }
 *
 * to ensure that a temporary file does NOT persist after it is
 * closed; MS-Windows does not allow such use of unlink(2), while
 * the file remains open.  Thus, MS-Windows programmers must take
 * extra care, to close and unlink temporary files AFTER use, if
 * similar behaviour is desired.
 *
 * To mitigate this MS-Windows limitation, we provide support for
 * an alternative, MinGW specific idiom:
 *
 *   #include <fcntl.h>
 *
 *   _MKSTEMP_SETMODE( _O_TEMPORARY );
 *   if( mkstemp( template ) >= 0 )
 *   {
 *     . . .
 *   }
 *
 * to achieve a similar effect to that of the above POSIX idiom; the
 * following macros are a MinGW specific extension, to facilite such
 * use of _O_TEMPORARY, (in addition to the POSIX required attributes),
 * when creating the temporary file.  Note that they require <fcntl.h>,
 * which <stdlib.h> should NOT automatically include; we leave it to
 * the user to explicitly include it, if using _MKSTEMP_SETMODE.
 */
# 808 "c:\\vcast\\mingw\\include\\stdlib.h" 3
inline __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkstemp (char *__filename_template)
{ return __mingw_mkstemp( 0, __filename_template ); }



/* mkdtemp(3) function support: added as adjunct to feature request #2003.
 * POSIX wants _XOPEN_SOURCE >= 700, (implying _POSIX_C_SOURCE >= 200809L).
 */


__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mkdtemp (char *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *__mingw_mkdtemp (char *);

inline __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mkdtemp (char *__dirname_template)
{ return __mingw_mkdtemp( __dirname_template ); }




/* setenv() and unsetenv() are also available, from POSIX.1-2001 onwards.
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int setenv( const char *, const char *, int );
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int unsetenv( const char * );

__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __mingw_setenv( const char *, const char *, int );

inline __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int setenv( const char *__n, const char *__v, int __f )
{ return __mingw_setenv( __n, __v, __f ); }

inline __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int unsetenv( const char *__name )
{ return __mingw_setenv( __name, __null, 1 ); }




}
# 76 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 2 3


// Get rid of those macros defined in <stdlib.h> in lieu of real functions.
# 118 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 3
extern "C++"
{
namespace std
{


  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;





  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;





  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;



  inline long
  abs(long __i) { return __builtin_labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }



  inline long long
  abs(long long __x) { return __builtin_llabs (__x); }
# 201 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 3

} // namespace
# 215 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 3
namespace __gnu_cxx
{



  using ::lldiv_t;





  using ::_Exit;



  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
# 247 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;


} // namespace __gnu_cxx

namespace std
{

  using ::__gnu_cxx::lldiv_t;

  using ::__gnu_cxx::_Exit;

  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;

  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
} // namespace std



} // extern "C++"
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cwchar
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c wchar.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 21.4
//

       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 2 3


# 1 "c:\\vcast\\mingw\\include\\wchar.h" 1 3
/*
 * wchar.h
 *
 * Declarations relating to support for wide characters; many are simply
 * inherited by (sub-optimal) inclusion of other header files.
 *
 * $Id: wchar.h,v ec519c2a99b3 2017/01/28 16:20:51 keithmarshall $
 *
 * Unattributed original source.
 * Adapted by Rob Savoye <rob@cygnus.com>
 * Copyright (C) 1997, 1999-2009, 2011, 2015, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
# 45 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cwchar" 2 3
# 43 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdio" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cstdio
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdio.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 27.8.2  C Library files
//

       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdio" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdio" 2 3
# 1 "c:\\vcast\\mingw\\include\\stdio.h" 1 3
/*
 * stdio.h
 *
 * Definitions of types and prototypes of functions for operations on
 * standard input and standard output streams.
 *
 * $Id: stdio.h,v cfaff99b541a 2017/05/24 22:11:33 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-2005, 2007-2010, 2014-2017, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * NOTE: The file manipulation functions provided by Microsoft seem to
 * work with either slash (/) or backslash (\) as the directory separator;
 * (this is consistent with Microsoft's own documentation, on MSDN).
 *
 */

       
# 39 "c:\\vcast\\mingw\\include\\stdio.h" 3

/* When including <wchar.h>, some of the definitions and declarations
 * which are nominally provided in <stdio.h> must be duplicated.  Rather
 * than require duplicated maintenance effort, we provide for partial
 * inclusion of <stdio.h> by <wchar.h>; only when not included in
 * this partial fashion...
 */

 /*
  * ...which is exclusive to <wchar.h>, do we assert the multiple
  * inclusion guard for <stdio.h> itself.
  */



/* All the headers include this file.
 */



/* POSIX stipulates that the following set of types, (as identified by
 * __need_TYPENAME macros), shall be defined consistently with <stddef.h>;
 * by defining the appropriate __need_TYPENAME macros, we may selectively
 * obtain the required definitions by inclusion of <stddef.h>, WITHOUT
 * automatic exposure of any of its additional content.
 */




# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 165 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 242 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 362 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 398 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 70 "c:\\vcast\\mingw\\include\\stdio.h" 2 3


 /* Similarly, for types defined in <sys/types.h>, (which are explicitly
  * dependent on the POSIX.1-2008 feature test)...
  */





 /* ...while this is required to support our fseeko64() and ftello64()
  * implementations, (neither of which is in any way standardized)...
  */


/* It is sufficient to test for just one define from each of the two
 * preceding groups...
 */

 /* ...to identify a requirement for selective inclusion of one or more
  * of these type definitions from "sys/types.h"; (note that we use the
  * #include "..." form here, to ensure that we get the correct header
  * file, relative to the location of this <stdio.h>).
  */
# 1 "c:\\vcast\\mingw\\include\\sys/types.h" 1 3
/*
 * sys/types.h
 *
 * Definitions of (primarily POSIX) system data types.
 *
 * $Id: types.h,v 6ceeab058f30 2016/10/13 20:03:56 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-1999, 2001, 2003, 2004, 2008, 2011, 2014-2016,
 *   MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
# 95 "c:\\vcast\\mingw\\include\\stdio.h" 2 3
# 111 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* Flags for the iobuf structure
 */




/* The three standard file pointers provided by the run time library.
 * NOTE: These will go to the bit-bucket silently in GUI applications!
 */




/* Returned by various functions on end of file condition or error.
 */




/* The maximum length of a file name.  It may be better to use the Windows'
 * GetVolumeInformation() function in preference to this constant, but hey,
 * this works!  Note that <io.h> also defines it, but we don't guard it, so
 * that the compiler has a chance to catch inconsistencies.
 *
 * FIXME: Right now, we define this unconditionally for both full <stdio.h>
 * inclusion, and for partial inclusion on behalf of <wchar.h>, (which needs
 * it for some non-ANSI structure declarations).  The conditions under which
 * <wchar.h> needs this require review, because defining it as a consequence
 * of including <wchar.h> alone may violate strict ANSI conformity.
 */



/* The maximum number of files that may be open at once. I have set this to
 * a conservative number. The actual value may be higher.
 */


/* After creating this many names, tmpnam and tmpfile return NULL
 */


/* Tmpnam, tmpfile and, sometimes, _tempnam try to create
 * temp files in the root directory of the current drive
 * (not in pwd, as suggested by some older MS doc's).
 * Redefining these macros does not effect the CRT functions.
 */






/* The maximum size of name (including NUL) that will be put in the user
 * supplied buffer caName for tmpnam.
 * Inferred from the size of the static buffer returned by tmpnam
 * when passed a NULL argument. May actually be smaller.
 */
# 183 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* The buffer size as used by setbuf such that it is equivalent to
 * (void) setvbuf(fileSetBuffer, caBuffer, _IOFBF, BUFSIZ).
 */


/* Constants for nOrigin indicating the position relative to which fseek
 * sets the file position.  Defined unconditionally since ISO and POSIX
 * say they are defined here.
 */
# 224 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* Content to be exposed only when including <stdio.h> in its own right;
 * these will not be exposed when __WCHAR_H_SOURCE__ is defined, as will
 * be the case when <stdio.h> is included indirectly, by <wchar.h>
 *
 *
 * The standard file handles
 */
# 239 "c:\\vcast\\mingw\\include\\stdio.h" 3
extern __attribute__((__dllimport__)) FILE _iob[]; /* An array of FILE imported from DLL. */







/* Need to close the current _STDIO_H specific block here...
 */

/* ...because, we need this regardless of the inclusion mode...
 */
extern "C" {


/* ...then revert to _STDIO_H specific mode, to declare...
 *
 *
 * File Operations
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * fopen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * freopen (const char *, const char *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fflush (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fclose (FILE *);

/* Note: Microsoft also declares remove & rename (but not their wide char
 * variants) in <io.h>; since duplicate prototypes are acceptable, provided
 * they are consistent, we simply declare them here anyway, while allowing
 * the compiler to check consistency as appropriate.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int remove (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rename (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * tmpfile (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * tmpnam (char *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_tempnam (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _rmtmp (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _unlink (const char *);
# 289 "c:\\vcast\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * tempnam (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rmtmp (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int unlink (const char *);



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int setvbuf (FILE *, char *, int, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void setbuf (FILE *, char *);

/* Formatted Output
 *
 * MSVCRT implementations are not ANSI C99 conformant...
 * we offer conforming alternatives from libmingwex.a
 */





/* From GCC-6 onwards, we will provide customized -Wformat
 * handling, via our own mingw_printf format category...
 */
# 326 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* The following convenience macros specify the appropriate
 * -Wformat checking for MSVCRT.DLL replacement functions...
 */






/*
 * ...while this pair are specific to the two MinGW.org
 * only functions.
 */



extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,3))) __mingw_fprintf(FILE*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,1,2))) __mingw_printf(const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,3))) __mingw_sprintf(char*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,4))) __mingw_snprintf(char*, size_t, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,0))) __mingw_vfprintf(FILE*, const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,1,0))) __mingw_vprintf(const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,2,0))) __mingw_vsprintf(char*, const char*, __builtin_va_list);
extern int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,0))) __mingw_vsnprintf(char*, size_t, const char*, __builtin_va_list);

/* When using these C99 conforming alternatives, we may wish to support
 * some of Microsoft's quirky formatting options, even when they violate
 * strict C99 conformance.
 */





/* Those quirks which conflict with ANSI C99 specified behaviour are
 * disabled by default; use the following function, like this:
 *
 *   _mingw_output_format_control( _ENABLE_MSVC_PRINTF_QUIRKS );
 *
 * to enable them, like this:
 *
 *   state = _mingw_output_format_control( _QUERY_MSVC_PRINTF_QUIRKS )
 *		& _MSVC_PRINTF_QUIRKS;
 *
 * to ascertain the currently active enabled state, or like this:
 *
 *   _mingw_output_format_control( _DISABLE_MSVC_PRINTF_QUIRKS );
 *
 * to disable them again.
 */
extern unsigned int _mingw_output_format_control( unsigned int, unsigned int );
# 451 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* Default configuration: simply direct all calls to MSVCRT...
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fprintf (FILE *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int printf (const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int sprintf (char *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vfprintf (FILE *, const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vprintf (const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int vsprintf (char *, const char *, __builtin_va_list);


/* Regardless of user preference, always offer these alternative
 * entry points, for direct access to the MSVCRT implementations,
 * with ms_printf -Wformat checking in each case.
 */
# 478 "c:\\vcast\\mingw\\include\\stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,3))) __msvcrt_fprintf(FILE *, const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,1,2))) __msvcrt_printf(const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,3))) __msvcrt_sprintf(char *, const char *, ...);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,0))) __msvcrt_vfprintf(FILE *, const char *, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,1,0))) __msvcrt_vprintf(const char *, __builtin_va_list);
 int __attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__ms_printf__,2,0))) __msvcrt_vsprintf(char *, const char *, __builtin_va_list);




/* The following three ALWAYS refer to the MSVCRT implementations...
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _snprintf (char *, size_t, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vsnprintf (char *, size_t, const char *, __builtin_va_list);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _vscprintf (const char *, __builtin_va_list);


/* Microsoft does not provide implementations for the following,
 * which are required by C99.  Note in particular that Microsoft's
 * corresponding implementations of _snprintf() and _vsnprintf() are
 * NOT compatible with C99, but the following are; if you want the
 * MSVCRT behaviour, you MUST use the Microsoft "uglified" names.
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,4)))
int snprintf (char *, size_t, const char *, ...);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__format__(__mingw_printf__,3,0)))
int vsnprintf (char *, size_t, const char *, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vscanf (const char * __restrict__, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vfscanf (FILE * __restrict__, const char * __restrict__, __builtin_va_list);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
int vsscanf (const char * __restrict__, const char * __restrict__, __builtin_va_list);
# 641 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* Once again, back to <stdio.h> specific declarations.
 */

/* POSIX standard IEEE 1003.1-2008 added getdelim() and getline()
 */
__attribute__((__cdecl__)) __attribute__((__nothrow__)) ssize_t
getdelim (char ** __restrict__, size_t * __restrict__, int, FILE * __restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__)) ssize_t
getline (char ** __restrict__, size_t * __restrict__, FILE * __restrict__);
# 664 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* Formatted Input
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fscanf (FILE *, const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int scanf (const char *, ...);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int sscanf (const char *, const char *, ...);

/* Character Input and Output Functions
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetc (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * fgets (char *, int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputc (int, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputs (const char *, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char * gets (char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int puts (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ungetc (int, FILE *);

/* Traditionally, getc and putc are defined as macros. but the
 * standard doesn't say that they must be macros.  We use inline
 * functions here to allow the fast versions to be used in C++
 * with namespace qualification, eg., ::getc.
 *
 * NOTE: _filbuf and _flsbuf  are not thread-safe.
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _filbuf (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _flsbuf (int, FILE *);



inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getc (FILE *);
inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getc (FILE * __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) *__F->_ptr++
    : _filbuf (__F);
}

inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putc (int, FILE *);
inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putc (int __c, FILE * __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) (*__F->_ptr++ = (char)__c)
    : _flsbuf (__c, __F);
}

inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getchar (void);
inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getchar (void)
{
  return (--(&_iob[0])->_cnt >= 0)
    ? (int) (unsigned char) *(&_iob[0])->_ptr++
    : _filbuf ((&_iob[0]));
}

inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putchar(int);
inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putchar(int __c)
{
  return (--(&_iob[1])->_cnt >= 0)
    ? (int) (unsigned char) (*(&_iob[1])->_ptr++ = (char)__c)
    : _flsbuf (__c, (&_iob[1]));}
# 732 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* Direct Input and Output Functions
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t fread (void *, size_t, size_t, FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t fwrite (const void *, size_t, size_t, FILE *);

/* File Positioning Functions
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fseek (FILE *, long, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long ftell (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void rewind (FILE *);
# 778 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* An opaque data type used for storing file positions... The contents of
 * this type are unknown, but we (the compiler) need to know the size
 * because the programmer using fgetpos and fsetpos will be setting aside
 * storage for fpos_t structres. Actually I tested using a byte array and
 * it is fairly evident that the fpos_t type is a long (in CRTDLL.DLL).
 * Perhaps an unsigned long? TODO? It's definitely a 64-bit number in
 * MSVCRT however, and for now `long long' will do.
 */

typedef long long fpos_t;




 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetpos (FILE *, fpos_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fsetpos (FILE *, const fpos_t *);

/* Error Functions
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int feof (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ferror (FILE *);


inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int feof (FILE * __F){ return __F->_flag & 0x0010; }
inline __attribute__((__cdecl__)) __attribute__((__nothrow__)) int ferror (FILE * __F){ return __F->_flag & 0x0020; }





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void clearerr (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void perror (const char *);



/*
 * Pipes
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _popen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _pclose (FILE *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * popen (const char *, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int pclose (FILE *);


/* Other Non ANSI functions
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _flushall (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fgetchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fputchar (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _fdopen (int, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fileno (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _fcloseall (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * _fsopen (const char *, const char *, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _getmaxstdio (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _setmaxstdio (int);


/* Microsoft introduced a capability in MSVCR80.DLL and later, to
 * set the minimum number of digits to be displayed in a printf()
 * floating point exponent; they retro-fitted this in MSVCRT.DLL,
 * from Windows-Vista onwards, but we provide our own wrappers in
 * libmingwex.a, which make it possible for us to emulate the API
 * for any version of MSVCRT.DLL (including WinXP and earlier).
 */


/* While Microsoft define the preceding manifest constant, they
 * appear to neglect to define its complement, (for restoration
 * of their default exponent display format); for orthogonality,
 * we will provide this regardless of Microsoft's negligence.
 */


/* Once again, unspecified by Microsoft, (and mostly redundant),
 * it is convenient to specify a combining mask for these.
 */


unsigned int __attribute__((__cdecl__)) __mingw_get_output_format (void);
unsigned int __attribute__((__cdecl__)) __mingw_set_output_format (unsigned int);

/* Also appearing for the first time in MSVCR80.DLL, and then also
 * retro-fitted to MSVCRT.DLL from Windows-Vista onwards, was this
 * pair of functions to control availability of "%n" formatting in
 * the MSVCRT.DLL printf() family of functions, for which we also
 * provide our own DLL version agnostic wrappers:
 */
int __attribute__((__cdecl__)) __mingw_get_printf_count_output (void);
int __attribute__((__cdecl__)) __mingw_set_printf_count_output (int);
# 882 "c:\\vcast\\mingw\\include\\stdio.h" 3
/* ...otherwise, we emulate the APIs, in a DLL version agnostic
 * manner, using our own implementation wrappers.
 */
inline __attribute__((__always_inline__)) unsigned int __attribute__((__cdecl__)) _get_output_format (void)
{ return __mingw_get_output_format (); }

inline __attribute__((__always_inline__)) unsigned int __attribute__((__cdecl__)) _set_output_format (unsigned int __style)
{ return __mingw_set_output_format (__style); }

/* When using our own printf() implementation, "%n" format is ALWAYS
 * supported, so we make this API a no-op, reporting it to be so; for
 * the alternative case, when using MSVCRT.DLL's printf(), we delegate
 * to our wrapper API implementation, which will invoke the API function
 * calls within the DLL, if they are available, or persistently report
 * the state of "%n" formatting as DISABLED if they are not.
 */







/* ...and for the false.
 */



inline __attribute__((__always_inline__)) int __attribute__((__cdecl__)) _get_printf_count_output (void)
{ return 0 ? 1 : __mingw_get_printf_count_output (); }

inline __attribute__((__always_inline__)) int __attribute__((__cdecl__)) _set_printf_count_output (int __mode)
{ return 0 ? 1 : __mingw_set_printf_count_output (__mode); }



 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fgetchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fputchar (int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * fdopen (int, const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int fileno (FILE *);
# 930 "c:\\vcast\\mingw\\include\\stdio.h" 3
inline __attribute__((__always_inline__)) FILE * __attribute__((__cdecl__)) __attribute__((__nothrow__)) fopen64 (const char *, const char *);
inline __attribute__((__always_inline__))
FILE * __attribute__((__cdecl__)) __attribute__((__nothrow__)) fopen64 (const char * filename, const char * mode)
{ return fopen (filename, mode); }

int __attribute__((__cdecl__)) __attribute__((__nothrow__)) fseeko64 (FILE *, __off64_t, int);






inline __attribute__((__always_inline__)) __off64_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) ftello64 (FILE *);
inline __attribute__((__always_inline__))
__off64_t __attribute__((__cdecl__)) __attribute__((__nothrow__)) ftello64 (FILE * stream)
{ fpos_t __pos; return (fgetpos(stream, &__pos)) ? -1LL : (__off64_t)(__pos); }
# 1027 "c:\\vcast\\mingw\\include\\stdio.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) FILE * wpopen (const wchar_t *, const wchar_t *);


/* Other non-ANSI wide character functions...
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t _fgetwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t _fputwchar (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _getw (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putw (int, FILE *);


/* ...and their original names, before Microsoft uglification...
 */
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fgetwchar (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wint_t fputwchar (wint_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int getw (FILE *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putw (int, FILE *);




}
# 43 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdio" 2 3
# 51 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdio" 3
// Get rid of those macros defined in <stdio.h> in lieu of real functions.
# 96 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;




  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;

  using ::tmpnam;

  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
} // namespace
# 157 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdio" 3
namespace __gnu_cxx
{
# 175 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;

} // namespace __gnu_cxx

namespace std
{
  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;
} // namespace std
# 44 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cerrno" 1 3
// The -*- C++ -*- forwarding header.

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file cerrno
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c errno.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 19.3  Error numbers
//

       
# 40 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cerrno" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 42 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cerrno" 2 3
# 1 "c:\\vcast\\mingw\\include\\errno.h" 1 3
/*
 * errno.h
 *
 * Definition of error codes, and error code retrieval mechanism.
 *
 * $Id: errno.h,v 99ef1a520f95 2016/11/14 17:57:05 keithmarshall $
 *
 * Written by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
 * Copyright (C) 1997-1999, 2001, 2003-2005, 2007, 2016, MinGW.org Project.
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, this permission notice, and the following
 * disclaimer shall be included in all copies or substantial portions of
 * the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
# 43 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\cerrno" 2 3




// Adhere to section 17.4.1.2 clause 5 of ISO 14882:1998
# 45 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\ext\\string_conversions.h" 2 3

namespace __gnu_cxx
{


  // Helper for all the sto* functions.
  template<typename _TRet, typename _Ret = _TRet, typename _CharT,
    typename... _Base>
    _Ret
    __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
    const char* __name, const _CharT* __str, std::size_t* __idx,
    _Base... __base)
    {
      _Ret __ret;

      _CharT* __endptr;

      struct _Save_errno {
 _Save_errno() : _M_errno((*_errno())) { (*_errno()) = 0; }
 ~_Save_errno() { if ((*_errno()) == 0) (*_errno()) = _M_errno; }
 int _M_errno;
      } const __save_errno;

      const _TRet __tmp = __convf(__str, &__endptr, __base...);

      if (__endptr == __str)
 std::__throw_invalid_argument(__name);
      else if ((*_errno()) == 34
        || (std::__are_same<_Ret, int>::__value
     && (__tmp < __numeric_traits<int>::__min
         || __tmp > __numeric_traits<int>::__max)))
 std::__throw_out_of_range(__name);
      else
 __ret = __tmp;

      if (__idx)
 *__idx = __endptr - __str;

      return __ret;
    }

  // Helper for the to_string / to_wstring functions.
  template<typename _String, typename _CharT = typename _String::value_type>
    _String
    __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     __builtin_va_list), std::size_t __n,
   const _CharT* __fmt, ...)
    {
      // XXX Eventually the result will be constructed in place in
      // the C++0x string, likely with the help of internal hooks.
      _CharT* __s = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
         * __n));

      __builtin_va_list __args;
      __builtin_va_start(__args, __fmt);

      const int __len = __convf(__s, __n, __fmt, __args);

      __builtin_va_end(__args);

      return _String(__s, __s + __len);
    }


} // namespace
# 5403 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 2 3

namespace std
{

namespace __cxx11 {


  // 21.4 Numeric Conversions [string.conversions].
  inline int
  stoi(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::strtol, "stoi", __str.c_str(),
     __idx, __base); }

  inline long
  stol(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtol, "stol", __str.c_str(),
        __idx, __base); }

  inline unsigned long
  stoul(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoul, "stoul", __str.c_str(),
        __idx, __base); }

  inline long long
  stoll(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoll, "stoll", __str.c_str(),
        __idx, __base); }

  inline unsigned long long
  stoull(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoull, "stoull", __str.c_str(),
        __idx, __base); }

  // NB: strtof vs strtod.
  inline float
  stof(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }



  // NB: (v)snprintf vs sprintf.

  // DR 1261.
  inline string
  to_string(int __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, 4 * sizeof(int),
        "%d", __val); }

  inline string
  to_string(unsigned __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned),
        "%u", __val); }

  inline string
  to_string(long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, 4 * sizeof(long),
        "%ld", __val); }

  inline string
  to_string(unsigned long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned long),
        "%lu", __val); }

  inline string
  to_string(long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(long long),
        "%lld", __val); }

  inline string
  to_string(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned long long),
        "%llu", __val); }

  inline string
  to_string(float __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<float>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%f", __val);
  }

  inline string
  to_string(double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%f", __val);
  }

  inline string
  to_string(long double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%Lf", __val);
  }



  inline int
  stoi(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::wcstol, "stoi", __str.c_str(),
     __idx, __base); }

  inline long
  stol(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstol, "stol", __str.c_str(),
        __idx, __base); }

  inline unsigned long
  stoul(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoul, "stoul", __str.c_str(),
        __idx, __base); }

  inline long long
  stoll(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoll, "stoll", __str.c_str(),
        __idx, __base); }

  inline unsigned long long
  stoull(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoull, "stoull", __str.c_str(),
        __idx, __base); }

  // NB: wcstof vs wcstod.
  inline float
  stof(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }
# 5620 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 3
}

} // namespace





# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functional_hash.h" 1 3
// functional_hash.h header -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/functional_hash.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{functional}
 */




       
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functional_hash.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\hash_bytes.h" 1 3
// Declarations for hash functions. -*- C++ -*-

// Copyright (C) 2010-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/hash_bytes.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{functional}
 */




       
# 34 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\hash_bytes.h" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\mingw32\\bits\\c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\hash_bytes.h" 2 3

namespace std
{


  // Hash function implementation for the nontrivial specialization.
  // All of them are based on a primitive that hashes a pointer to a
  // byte array. The actual hash algorithm is not guaranteed to stay
  // the same from release to release -- it may be updated or tuned to
  // improve hash quality or speed.
  size_t
  _Hash_bytes(const void* __ptr, size_t __len, size_t __seed);

  // A similar hash primitive, using the FNV hash algorithm. This
  // algorithm is guaranteed to stay the same from release to release.
  // (although it might not produce the same values on different
  // machines.)
  size_t
  _Fnv_hash_bytes(const void* __ptr, size_t __len, size_t __seed);


} // namespace
# 36 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functional_hash.h" 2 3

namespace std
{


  /** @defgroup hashes Hashes
   *  @ingroup functors
   *
   *   Hashing functors taking a variable type and returning a @c std::size_t.
   *
   *  @{
   */

  template<typename _Result, typename _Arg>
    struct __hash_base
    {
      typedef _Result result_type;
      typedef _Arg argument_type;
    };

  /// Primary class template hash.
  template<typename _Tp>
    struct hash;

  // Helper struct for SFINAE-poisoning non-enum types.
  template<typename _Tp, bool = is_enum<_Tp>::value>
    struct __hash_enum
    {
    
# 64 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functional_hash.h"
   public
# 64 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functional_hash.h" 3
          :
      // Private rather than deleted to be non-trivially-copyable.
      __hash_enum(__hash_enum&&);
      ~__hash_enum();
    };

  // Helper struct for hash with enum types.
  template<typename _Tp>
    struct __hash_enum<_Tp, true> : public __hash_base<size_t, _Tp>
    {
      size_t
      operator()(_Tp __val) const noexcept
      {
       using __type = typename underlying_type<_Tp>::type;
       return hash<__type>{}(static_cast<__type>(__val));
      }
    };

  /// Primary class template hash, usable for enum types only.
  // Use with non-enum types still SFINAES.
  template<typename _Tp>
    struct hash : __hash_enum<_Tp>
    { };

  /// Partial specializations for pointer types.
  template<typename _Tp>
    struct hash<_Tp*> : public __hash_base<size_t, _Tp*>
    {
      size_t
      operator()(_Tp* __p) const noexcept
      { return reinterpret_cast<size_t>(__p); }
    };

  // Explicit specializations for integer types.
# 107 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functional_hash.h" 3
  /// Explicit specialization for bool.
  template<> struct hash<bool> : public __hash_base<size_t, bool> { size_t operator()(bool __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for char.
  template<> struct hash<char> : public __hash_base<size_t, char> { size_t operator()(char __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for signed char.
  template<> struct hash<signed char> : public __hash_base<size_t, signed char> { size_t operator()(signed char __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for unsigned char.
  template<> struct hash<unsigned char> : public __hash_base<size_t, unsigned char> { size_t operator()(unsigned char __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for wchar_t.
  template<> struct hash<wchar_t> : public __hash_base<size_t, wchar_t> { size_t operator()(wchar_t __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for char16_t.
  template<> struct hash<char16_t> : public __hash_base<size_t, char16_t> { size_t operator()(char16_t __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for char32_t.
  template<> struct hash<char32_t> : public __hash_base<size_t, char32_t> { size_t operator()(char32_t __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for short.
  template<> struct hash<short> : public __hash_base<size_t, short> { size_t operator()(short __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for int.
  template<> struct hash<int> : public __hash_base<size_t, int> { size_t operator()(int __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for long.
  template<> struct hash<long> : public __hash_base<size_t, long> { size_t operator()(long __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for long long.
  template<> struct hash<long long> : public __hash_base<size_t, long long> { size_t operator()(long long __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for unsigned short.
  template<> struct hash<unsigned short> : public __hash_base<size_t, unsigned short> { size_t operator()(unsigned short __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for unsigned int.
  template<> struct hash<unsigned int> : public __hash_base<size_t, unsigned int> { size_t operator()(unsigned int __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for unsigned long.
  template<> struct hash<unsigned long> : public __hash_base<size_t, unsigned long> { size_t operator()(unsigned long __val) const noexcept { return static_cast<size_t>(__val); } };

  /// Explicit specialization for unsigned long long.
  template<> struct hash<unsigned long long> : public __hash_base<size_t, unsigned long long> { size_t operator()(unsigned long long __val) const noexcept { return static_cast<size_t>(__val); } };
# 171 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\functional_hash.h" 3
  struct _Hash_impl
  {
    static size_t
    hash(const void* __ptr, size_t __clength,
  size_t __seed = static_cast<size_t>(0xc70f6907UL))
    { return _Hash_bytes(__ptr, __clength, __seed); }

    template<typename _Tp>
      static size_t
      hash(const _Tp& __val)
      { return hash(&__val, sizeof(__val)); }

    template<typename _Tp>
      static size_t
      __hash_combine(const _Tp& __val, size_t __hash)
      { return hash(&__val, sizeof(__val), __hash); }
  };

  struct _Fnv_hash_impl
  {
    static size_t
    hash(const void* __ptr, size_t __clength,
  size_t __seed = static_cast<size_t>(2166136261UL))
    { return _Fnv_hash_bytes(__ptr, __clength, __seed); }

    template<typename _Tp>
      static size_t
      hash(const _Tp& __val)
      { return hash(&__val, sizeof(__val)); }

    template<typename _Tp>
      static size_t
      __hash_combine(const _Tp& __val, size_t __hash)
      { return hash(&__val, sizeof(__val), __hash); }
  };

  /// Specialization for float.
  template<>
    struct hash<float> : public __hash_base<size_t, float>
    {
      size_t
      operator()(float __val) const noexcept
      {
 // 0 and -0 both hash to zero.
 return __val != 0.0f ? std::_Hash_impl::hash(__val) : 0;
      }
    };

  /// Specialization for double.
  template<>
    struct hash<double> : public __hash_base<size_t, double>
    {
      size_t
      operator()(double __val) const noexcept
      {
 // 0 and -0 both hash to zero.
 return __val != 0.0 ? std::_Hash_impl::hash(__val) : 0;
      }
    };

  /// Specialization for long double.
  template<>
    struct hash<long double>
    : public __hash_base<size_t, long double>
    {
      __attribute__ ((__pure__)) size_t
      operator()(long double __val) const noexcept;
    };

  // @} group hashes

  // Hint about performance of hash functor. If not fast the hash-based
  // containers will cache the hash code.
  // Default behavior is to consider that hashers are fast unless specified
  // otherwise.
  template<typename _Hash>
    struct __is_fast_hash : public std::true_type
    { };

  template<>
    struct __is_fast_hash<hash<long double>> : public std::false_type
    { };


} // namespace
# 5629 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.h" 2 3

namespace std
{


  // DR 1182.


  /// std::hash specialization for string.
  template<>
    struct hash<string>
    : public __hash_base<size_t, string>
    {
      size_t
      operator()(const string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(), __s.length()); }
    };

  template<>
    struct __is_fast_hash<hash<string>> : std::false_type
    { };


  /// std::hash specialization for wstring.
  template<>
    struct hash<wstring>
    : public __hash_base<size_t, wstring>
    {
      size_t
      operator()(const wstring& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(wchar_t)); }
    };

  template<>
    struct __is_fast_hash<hash<wstring>> : std::false_type
    { };




  /// std::hash specialization for u16string.
  template<>
    struct hash<u16string>
    : public __hash_base<size_t, u16string>
    {
      size_t
      operator()(const u16string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(char16_t)); }
    };

  template<>
    struct __is_fast_hash<hash<u16string>> : std::false_type
    { };

  /// std::hash specialization for u32string.
  template<>
    struct hash<u32string>
    : public __hash_base<size_t, u32string>
    {
      size_t
      operator()(const u32string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(char32_t)); }
    };

  template<>
    struct __is_fast_hash<hash<u32string>> : std::false_type
    { };








  inline namespace literals
  {
  inline namespace string_literals
  {


    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char>
    operator""s(const char* __str, size_t __len)
    { return basic_string<char>{__str, __len}; }


    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<wchar_t>
    operator""s(const wchar_t* __str, size_t __len)
    { return basic_string<wchar_t>{__str, __len}; }



    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char16_t>
    operator""s(const char16_t* __str, size_t __len)
    { return basic_string<char16_t>{__str, __len}; }

    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char32_t>
    operator""s(const char32_t* __str, size_t __len)
    { return basic_string<char32_t>{__str, __len}; }



  } // inline namespace string_literals
  } // inline namespace literals



} // namespace std
# 53 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.tcc" 1 3
// Components for manipulating sequences of characters -*- C++ -*-

// Copyright (C) 1997-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/basic_string.tcc
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{string}
 */

//
// ISO C++ 14882: 21  Strings library
//

// Written by Jason Merrill based upon the specification by Takanori Adachi
// in ANSI X3J16/94-0013R2.  Rewritten by Nathan Myers to ISO-14882.
// Non-reference-counted implementation written by Paolo Carlini and
// updated by Jonathan Wakely for ISO-14882-2011.




       
# 43 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.tcc" 3

# 1 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\cxxabi_forced.h" 1 3
// cxxabi.h subset for cancellation -*- C++ -*-

// Copyright (C) 2007-2016 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
// 
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cxxabi_forced.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{cxxabi.h}
 */
# 45 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.tcc" 2 3

namespace std
{




  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s) noexcept
    {
      if (this == &__s)
 return;

      _Alloc_traits::_S_on_swap(_M_get_allocator(), __s._M_get_allocator());

      if (_M_is_local())
 if (__s._M_is_local())
   {
     if (length() && __s.length())
       {
  _CharT __tmp_data[_S_local_capacity + 1];
  traits_type::copy(__tmp_data, __s._M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(_M_local_buf, __tmp_data,
      _S_local_capacity + 1);
       }
     else if (__s.length())
       {
  traits_type::copy(_M_local_buf, __s._M_local_buf,
      _S_local_capacity + 1);
  _M_length(__s.length());
  __s._M_set_length(0);
  return;
       }
     else if (length())
       {
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  __s._M_length(length());
  _M_set_length(0);
  return;
       }
   }
 else
   {
     const size_type __tmp_capacity = __s._M_allocated_capacity;
     traits_type::copy(__s._M_local_buf, _M_local_buf,
         _S_local_capacity + 1);
     _M_data(__s._M_data());
     __s._M_data(__s._M_local_buf);
     _M_capacity(__tmp_capacity);
   }
      else
 {
   const size_type __tmp_capacity = _M_allocated_capacity;
   if (__s._M_is_local())
     {
       traits_type::copy(_M_local_buf, __s._M_local_buf,
    _S_local_capacity + 1);
       __s._M_data(_M_data());
       _M_data(_M_local_buf);
     }
   else
     {
       pointer __tmp_ptr = _M_data();
       _M_data(__s._M_data());
       __s._M_data(__tmp_ptr);
       _M_capacity(__s._M_allocated_capacity);
     }
   __s._M_capacity(__tmp_capacity);
 }

      const size_type __tmp_length = length();
      _M_length(__s.length());
      __s._M_length(__tmp_length);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::pointer
    basic_string<_CharT, _Traits, _Alloc>::
    _M_create(size_type& __capacity, size_type __old_capacity)
    {
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 83.  String::npos vs. string::max_size()
      if (__capacity > max_size())
 std::__throw_length_error(("basic_string::_M_create"));

      // The below implements an exponential growth policy, necessary to
      // meet amortized linear time requirements of the library: see
      // http://gcc.gnu.org/ml/libstdc++/2001-07/msg00085.html.
      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 {
   __capacity = 2 * __old_capacity;
   // Never allocate a string bigger than max_size.
   if (__capacity > max_size())
     __capacity = max_size();
 }

      // NB: Need an array of char_type[__capacity], plus a terminating
      // null char_type() element.
      return _Alloc_traits::allocate(_M_get_allocator(), __capacity + 1);
    }

  // NB: This is the special case for Input Iterators, used in
  // istreambuf_iterators, etc.
  // Input Iterators have a cost structure very different from
  // pointers, calling for a different coding style.
  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::input_iterator_tag)
      {
 size_type __len = 0;
 size_type __capacity = size_type(_S_local_capacity);

 while (__beg != __end && __len < __capacity)
   {
     _M_data()[__len++] = *__beg;
     ++__beg;
   }

 try
   {
     while (__beg != __end)
       {
  if (__len == __capacity)
    {
      // Allocate more space.
      __capacity = __len + 1;
      pointer __another = _M_create(__capacity, __len);
      this->_S_copy(__another, _M_data(), __len);
      _M_dispose();
      _M_data(__another);
      _M_capacity(__capacity);
    }
  _M_data()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     _M_dispose();
     throw;
   }

 _M_set_length(__len);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::forward_iterator_tag)
      {
 // NB: Not required, but considered best practice.
 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   std::__throw_logic_error(("basic_string::" "_M_construct null not valid")
                                         );

 size_type __dnew = static_cast<size_type>(std::distance(__beg, __end));

 if (__dnew > size_type(_S_local_capacity))
   {
     _M_data(_M_create(__dnew, size_type(0)));
     _M_capacity(__dnew);
   }

 // Check for out_of_range and length_error exceptions.
 try
   { this->_S_copy_chars(_M_data(), __beg, __end); }
 catch(...)
   {
     _M_dispose();
     throw;
   }

 _M_set_length(__dnew);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_construct(size_type __n, _CharT __c)
    {
      if (__n > size_type(_S_local_capacity))
 {
   _M_data(_M_create(__n, size_type(0)));
   _M_capacity(__n);
 }

      if (__n)
 this->_S_assign(_M_data(), __n, __c);

      _M_set_length(__n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_assign(const basic_string& __str)
    {
      if (this != &__str)
 {
   const size_type __rsize = __str.length();
   const size_type __capacity = capacity();

   if (__rsize > __capacity)
     {
       size_type __new_capacity = __rsize;
       pointer __tmp = _M_create(__new_capacity, __capacity);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__new_capacity);
     }

   if (__rsize)
     this->_S_copy(_M_data(), __str._M_data(), __rsize);

   _M_set_length(__rsize);
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      // Make sure we don't shrink below the current size.
      if (__res < length())
 __res = length();

      const size_type __capacity = capacity();
      if (__res != __capacity)
 {
   if (__res > __capacity
       || __res > size_type(_S_local_capacity))
     {
       pointer __tmp = _M_create(__res, __capacity);
       this->_S_copy(__tmp, _M_data(), length() + 1);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__res);
     }
   else if (!_M_is_local())
     {
       this->_S_copy(_M_local_data(), _M_data(), length() + 1);
       _M_destroy(__capacity);
       _M_data(_M_local_data());
     }
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
       size_type __len2)
    {
      const size_type __how_much = length() - __pos - __len1;

      size_type __new_capacity = length() + __len2 - __len1;
      pointer __r = _M_create(__new_capacity, capacity());

      if (__pos)
 this->_S_copy(__r, _M_data(), __pos);
      if (__s && __len2)
 this->_S_copy(__r + __pos, __s, __len2);
      if (__how_much)
 this->_S_copy(__r + __pos + __len2,
        _M_data() + __pos + __len1, __how_much);

      _M_dispose();
      _M_data(__r);
      _M_capacity(__new_capacity);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_erase(size_type __pos, size_type __n)
    {
      const size_type __how_much = length() - __pos - __n;

      if (__how_much && __n)
 this->_S_move(_M_data() + __pos, _M_data() + __pos + __n, __how_much);

      _M_set_length(length() - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->_M_erase(__n, __size - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_append(const _CharT* __s, size_type __n)
    {
      const size_type __len = __n + this->size();

      if (__len <= this->capacity())
 {
   if (__n)
     this->_S_copy(this->_M_data() + this->size(), __s, __n);
 }
      else
 this->_M_mutate(this->size(), size_type(0), __s, __n);

      this->_M_set_length(__len);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
     _InputIterator __k1, _InputIterator __k2,
     std::__false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 return _M_replace(__i1 - begin(), __n1, __s._M_data(),
     __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __n2 - __n1;

      if (__new_size <= this->capacity())
 {
   pointer __p = this->_M_data() + __pos1;

   const size_type __how_much = __old_size - __pos1 - __n1;
   if (__how_much && __n1 != __n2)
     this->_S_move(__p + __n2, __p + __n1, __how_much);
 }
      else
 this->_M_mutate(__pos1, __n1, 0, __n2);

      if (__n2)
 this->_S_assign(this->_M_data() + __pos1, __n2, __c);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
        const size_type __len2)
    {
      _M_check_length(__len1, __len2, "basic_string::_M_replace");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;

      if (__new_size <= this->capacity())
 {
   pointer __p = this->_M_data() + __pos;

   const size_type __how_much = __old_size - __pos - __len1;
   if (_M_disjunct(__s))
     {
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2)
  this->_S_copy(__p, __s, __len2);
     }
   else
     {
       // Work in-place.
       if (__len2 && __len2 <= __len1)
  this->_S_move(__p, __s, __len2);
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2 > __len1)
  {
    if (__s + __len2 <= __p + __len1)
      this->_S_move(__p, __s, __len2);
    else if (__s >= __p + __len1)
      this->_S_copy(__p, __s + __len2 - __len1, __len2);
    else
      {
        const size_type __nleft = (__p + __len1) - __s;
        this->_S_move(__p, __s, __nleft);
        this->_S_copy(__p + __nleft, __p + __len2,
        __len2 - __nleft);
      }
  }
     }
 }
      else
 this->_M_mutate(__pos, __len1, __s, __len2);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
 _S_copy(__s, _M_data() + __pos, __n);
      // 21.3.5.7 par 3: do not append null.  (good.)
      return __n;
    }
# 1145 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\bits\\basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const noexcept
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const noexcept
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const noexcept
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const noexcept
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  // 21.3.7.9 basic_string::getline and operators
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {
       // Avoid reallocation for common case.
       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {
       // _GLIBCXX_RESOLVE_LIB_DEFECTS
       // 91. Description of operator>> and getline() for string<>
       // might cause endless loop
       __in._M_setstate(__ios_base::badbit);
     }
 }
      // 211.  operator>>(istream&, string&) doesn't set failbit
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {
       // _GLIBCXX_RESOLVE_LIB_DEFECTS
       // 91. Description of operator>> and getline() for string<>
       // might cause endless loop
       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  // Inhibit implicit instantiations for required instantiations,
  // which are defined via explicit instantiations elsewhere.

  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);




} // namespace std
# 54 "c:\\vcast\\mingw\\lib\\gcc\\mingw32\\6.3.0\\include\\c++\\string" 2 3
# 5 "C:\\VCAST\\ENVIRONMENTS\\GIT_TEST\\SOURCEFILES\\Shapes/shape.h" 2


# 6 "C:\\VCAST\\ENVIRONMENTS\\GIT_TEST\\SOURCEFILES\\Shapes/shape.h"
class Shape
{
  public:
    Shape();
    Shape(int x, int y);

    void setPosition(int x, int y);

    int getX() const;
    int getY() const;

    virtual std::string getName() const = 0;
    virtual float getArea() const = 0;

  public:
    int mX;
    int mY;
};
# 5 "C:\\VCAST\\ENVIRONMENTS\\GIT_TEST\\SOURCEFILES\\Shapes/rectangle.h" 2

class Rectangle : public Shape
{
  public:
    Rectangle();
    Rectangle(int x, int y, int height, int width);

    virtual float getArea() const;
    virtual std::string getName() const { return "Rectangle"; }

  public:
    int mHeight;
    int mWidth;
};
# 5 "vcast_preprocess.17964.8.cpp" 2
typedef int VECTORCAST_MARKER__UNIT_PREFIX_END;
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/Shapes/shape.cpp" 1
# 1 "C:/VCAST/Environments/Git_Test/SourceFiles/Shapes/shape.h" 1
# 2 "C:/VCAST/Environments/Git_Test/SourceFiles/Shapes/shape.cpp" 2

Shape::Shape()
{
}

Shape::Shape(int x, int y)
  : mX(x),
    mY(y)
{
}

void Shape::setPosition(int x, int y)
{
  mX = x;
  mY = y;
}

int Shape::getX() const
{
  return mX;
}

int Shape::getY() const
{
  return mY;
}
# 7 "vcast_preprocess.17964.8.cpp" 2

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_START;

typedef int VECTORCAST_MARKER__UNIT_APPENDIX_END;
# 4 "vcast_preprocess.17964.10.cpp" 2

                                               
