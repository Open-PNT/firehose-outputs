
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead.
 */

#pragma once
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

#include "types.h"

#ifdef ASPN_NO_STDINT

typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

#	ifdef ASPN_LONG_LONG
typedef long long int64_t;
typedef unsigned long long uint64_t;
#	else
typedef long int64_t;
typedef unsigned long uint64_t;
#	endif

#else
#	include <stdint.h>
#endif

#ifndef __cplusplus
#	ifdef ASPN_NO_BOOL
#		define false 0
#		define true 1
#		define bool int
#	else
#		include <stdbool.h>
#	endif
#endif

#ifndef __has_feature
#	define __has_feature(x) 0
#endif

/**
 * Define a set of pragmas and attributes to instrument code to define whether or
 * not pointers may be null. This feature attempts to gracefully disable itself
 * if the current compiler is unable to support static analysis of nullability.
 * However, if this automatic disabling fails, the user may define ASPN_DISABLE_NULLABILITY
 * to force nullability checks off. In this case, the burden is
 * still on the user to not set NULL to pointers defined as not NULL.
 */
#if __has_feature(nullability) && defined(_Pragma) && !defined(ASPN_DISABLE_NULLABILITY)

/**
 * Indicates that pointers should be assumed to be not NULL unless
 * they are explicitly marked with ASPN_NULLABLE.
 *
 * All pointers in type and function definitions declared in the region between
 * ASPN_ASSUME_NONNULL_BEGIN and ASPN_ASSUME_NONNULL_END in a file are
 * by default not NULL-able. For example, consider the following code:
 *
 *  #include <aspn23/aspn.h>
 *
 *  // After this macro, all pointers are assumed to be not NULL-able unless
 *  // otherwise marked
 *  ASPN_ASSUME_NONNULL_BEGIN
 *
 *  // This function takes a int pointer parameter that must not be null
 *  int foo(int* a) { ... }
 *  // This function takes a int pointer parameter that may be null
 *  int bar(int* ASPN_NULLABLE a) { ... }
 *
 *  ...
 *
 *  // Invalid-- parameter a cannot be NULL
 *  foo(NULL);
 *  // OK-- Parameter explicitly marked as nullable
 *  bar(NULL);
 *
 *  ASPN_ASSUME_NONNULL_END
 *
 * Users of types within a ASPN_ASSUME_NONNULL region must ensure that pointer fields and
 * arguments are not populated with a NULL value when passing them across ASPN API
 * boundaries. Pointers explicitly annotated with ASPN_NULLABLE are still nullable,
 * even when within such a region.
 */
#	define ASPN_ASSUME_NONNULL_BEGIN _Pragma("clang assume_nonnull begin")

/**
 * Ending a default not NULL region started by ASPN_ASSUME_NONNULL_BEGIN. Definitions
 * after a ASPN_ASSUME_NONNULL_END return to ambiguous nullability unless otherwise
 * explicitly marked. */
#	define ASPN_ASSUME_NONNULL_END _Pragma("clang assume_nonnull end")

/**
 * Declare a pointer as NULL-able. This macro should follow the pointer asterisk for the
 * pointer that is being declared NULL. Thus, `int ** ASPN_NULLABLE foo` declares a
 * NULL-able pointer to a non-NULL pointer to int. */
#	define ASPN_NULLABLE _Nullable

#	pragma clang diagnostic ignored "-Wnullability-extension"

/**
 * This is needed due to a seeming bug in clang. Even with assume_nonnull, the compiler still
 * throws warnings for missing nullability attributes */
#	pragma clang diagnostic ignored "-Wnullability-completeness"

#else

/**
 * This macro does nothing. To enable compiler non-null checking, compile using a compiler
 * that has the "nullability" feature and do not define ASPN_DISABLE_NULLABILITY. */
#	define ASPN_ASSUME_NONNULL_BEGIN

/**
 * This macro does nothing. To enable compiler non-null checking, compile using a compiler
 * that has the "nullability" feature and do not define ASPN_DISABLE_NULLABILITY. */
#	define ASPN_ASSUME_NONNULL_END

/**
 * This macro does nothing. To enable compiler non-null checking, compile using a compiler
 * that has the "nullability" feature and do not define ASPN_DISABLE_NULLABILITY. */
#	define ASPN_NULLABLE

#endif
