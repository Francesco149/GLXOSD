/*
 * Copyright (C) 2013-2016 Nick Guletskii
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef GLINJECT_GLX_EVENTS_H_
#define GLINJECT_GLX_EVENTS
#include "glinject.h"
typedef __GLXextFuncPtr (*gl_function_provider_type)(const GLubyte* name);

GLINJECT_DEFINE_REAL_SYMBOL_EXT(glXGetProcAddressARB, __GLXextFuncPtr, (const GLubyte*));

GLINJECT_DEFINE_REAL_SYMBOL_EXT(glXGetProcAddress, __GLXextFuncPtr, (const GLubyte*));

void glinject_load_glx_event_real_symbols(const char* path);

#endif
