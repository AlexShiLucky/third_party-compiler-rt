/* ===-- dso_handle.c - Provide __dso_handle -------------------------------===
 *
 *               The LLVM Compiler Infrastructure
 *
 * This file is dual licensed under the MIT and the University of Illinois Open
 * Source Licenses. See LICENSE.TXT for details.
 *
 * ===----------------------------------------------------------------------===
 */

/* __dso_handle symbol is mandated by C++ ABI with a value which is an address
 * in one of the object's segments, and as such this symbol has to be included
 * statically and cannot be a part of a shared library. Traditionally, it has
 * been defined in crtbegin.o but there's no principled reason for it to be
 * there. We defined this symbol in the builtin library which is built as a
 * static library and always included in the final link.
 */
__attribute__((visibility("hidden"))) void *const __dso_handle;
