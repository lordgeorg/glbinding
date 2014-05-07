#pragma once

#include <glbinding/glbinding_api.h>

#include <cstddef>
#include <cstdint>

namespace gl {

using GLenum = unsigned int;
using GLbitfield = unsigned int;
using GLboolean = unsigned int;
using GLvoid = void;
using GLbyte = signed char;
using GLshort = short;
using GLint = int;
using GLclampx = int;
using GLubyte = unsigned char;
using GLushort = unsigned short;
using GLuint = unsigned int;
using GLsizei = int;
using GLfloat = float;
using GLclampf = float;
using GLdouble = double;
using GLclampd = double;
using GLeglImageOES = void *;
using GLhalfARB = unsigned short;
using GLchar = char;
using GLcharARB = char;

#ifdef __APPLE__
using GLhandleARB = void*;
#else
using GLhandleARB = unsigned int;
#endif

using GLhalf = unsigned short;
using GLfixed = GLint;
using GLintptr = ptrdiff_t;
using GLsizeiptr = ptrdiff_t;
using GLint64 = int64_t;
using GLuint64 = uint64_t;
using GLintptrARB = ptrdiff_t;
using GLsizeiptrARB = ptrdiff_t;
using GLint64EXT = int64_t;
using GLuint64EXT = uint64_t;
using GLsync = struct __GLsync *;

using GLDEBUGPROC = void (*)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * message, const void * userParam);
using GLDEBUGPROCARB = void (*)(GLenum source, GLenum type,GLuint id, GLenum severity, GLsizei length, const GLchar * message, const void * userParam);
using GLDEBUGPROCKHR = void (*)(GLenum source, GLenum type,GLuint id, GLenum severity, GLsizei length, const GLchar * message, const void * userParam);
using GLDEBUGPROCAMD =void (*)(GLuint id, GLenum category, GLenum severity, GLsizei length, const GLchar * message, void * userParam);

using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;

} // namespace gl
