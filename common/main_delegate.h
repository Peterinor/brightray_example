#ifndef BRIGHTRAY_EXAMPLE_COMMON_MAIN_DELEGATE_H_
#define BRIGHTRAY_EXAMPLE_COMMON_MAIN_DELEGATE_H_

#include "brightray/common/main_delegate.h"

namespace brightray_example {

class MainDelegate : public brightray::MainDelegate {
public:
  MainDelegate();
  ~MainDelegate();

private:
  content::ContentBrowserClient* CreateContentBrowserClient() override;
  content::ContentRendererClient* CreateContentRendererClient() override;

  scoped_ptr<content::ContentBrowserClient> browser_client_;
  scoped_ptr<content::ContentRendererClient> renderer_client_;

  DISALLOW_COPY_AND_ASSIGN(MainDelegate);
};

}

#endif
