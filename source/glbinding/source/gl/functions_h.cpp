
#include "../Binding_pch.h"

#define GROUPED 
#define GROUP_H

#include <glbinding/gl/functions.h>

// #include <glbinding/Binding.h>


using namespace glbinding;

namespace gl
{

void glHint(GLenum target, GLenum mode)
{
    return Binding::Hint(target, mode);
}
    
void glHintPGI(GLenum target, GLint mode)
{
    return Binding::HintPGI(target, mode);
}
    
void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return Binding::Histogram(target, width, internalformat, sink);
}
    
void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
    return Binding::HistogramEXT(target, width, internalformat, sink);
}
    

} // namespace gl