#include <string>
#include "base/logging.h"

namespace brightray {

// TODO: move these to brightway and derive them from the running binary if possible
std::string GetApplicationName() { return "Brightray Example"; }
std::string GetApplicationVersion() { return "0.0.0.1"; }

}
