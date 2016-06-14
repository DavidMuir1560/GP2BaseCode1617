#ifndef OPENGLRENDERER_H
#define OPENGLRENDERER_H

#include "../../include/graphics/Renderer.h"
#include "../../include/utils/NonCopyable.h"
#include "../../include/utils/Log.h"

//Structure for holding the version
struct OpenGLVersion
{
	int major;
	int minor;
	//this will be used to print the structure to an output stream
	friend ostream& operator<<(ostream& os, const OpenGLVersion& version);
};

const OpenGLVersion SupportedOGLVersions[] = {
  { 4, 5 },
  { 4, 4 },
  { 4, 3 },
  { 4, 2 },
  { 4, 1 },
  { 4, 0 },
  { 3, 3 },
  { 3, 2 },
  { 3, 1 },
  { 3, 0 }
};

class OpenGLRenderer:public NonCopyable, public IRenderer
{
public:
  OpenGLRenderer();
  ~OpenGLRenderer();

  bool create(ProgramOptions &options,int windowID);
  void begin(const vec4& clearColour);
  void end();
  void destroy();

  OpenGLVersion getBestGLVersion();

  string getCapsAsString();
private:
  SDL_GLContext m_Context;
  SDL_Window *m_CachedWindow;
};

#endif