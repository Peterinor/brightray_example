#ifndef BRIGHTRAY_EXAMPLE_BROWSER_VIEWS_WINDOW_VIEWS_H_
#define BRIGHTRAY_EXAMPLE_BROWSER_VIEWS_WINDOW_VIEWS_H_

#include "browser/window.h"

namespace views {
class Widget;
}

namespace brightray_example {

class WindowViews : public Window {
 public:
  WindowViews(brightray::BrowserContext*);
  ~WindowViews();

  virtual void Show() OVERRIDE;

 private:
  views::Widget* widget_;

  DISALLOW_COPY_AND_ASSIGN(WindowViews);
};

}

#endif
