#ifndef BRIGHTRAY_EXAMPLE_RENDERER_RENDERER_CLIENT_H_
#define BRIGHTRAY_EXAMPLE_RENDERER_RENDERER_CLIENT_H_

#include "content/public/renderer/content_renderer_client.h"

namespace brightray_example {

class RendererClient : public content::ContentRendererClient {
public:
  RendererClient();
  ~RendererClient();

private:
  virtual void RenderViewCreated(content::RenderView*) OVERRIDE;

  DISALLOW_COPY_AND_ASSIGN(RendererClient);
};

}

#endif
