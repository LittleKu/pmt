/**
 * @file      : shared_library.h
 * @author    : LittleKu<kklvzl@gmail.com>
 * @date      : 2024-06-07 16:33:52
 * @brief     :
 */
#ifndef SHARED_LIBRARY_H_
#define SHARED_LIBRARY_H_

#if defined(_WIN32)

#if defined(SHARED_IMPLEMENTATION)
#define SHARED_EXPORT __declspec(dllexport)
#define SHARED_EXPORT_PRIVATE __declspec(dllexport)
#else
#define SHARED_EXPORT __declspec(dllimport)
#define SHARED_EXPORT_PRIVATE __declspec(dllimport)
#endif  // defined(SHARED_IMPLEMENTATION)

#else

#if defined(SHARED_IMPLEMENTATION)
#define SHARED_EXPORT __attribute__((visibility("default")))
#define SHARED_EXPORT_PRIVATE __attribute__((visibility("default")))
#else
#define SHARED_EXPORT
#define SHARED_EXPORT_PRIVATE
#endif  // defined(HELLO_SHARED_IMPLEMENTATION)

#endif

#ifdef __cplusplus
extern "C" {
#endif

SHARED_EXPORT int get_shared_value(int a, int b);

#ifdef __cplusplus
}
#endif

#endif  // !SHARED_LIBRARY_H_