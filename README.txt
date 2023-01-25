To use the AMMCLib functions, include the corresponding library header(s) in your source files:
#include "mlib.h"
#include "gflib.h"
#include "gdflib.h"
#include "gmclib.h"
#include "amclib.h"

The AMMCLib supports simplified API calls based on predefined default data type.
Please refer to chapter "Multiple Implementation Support" in the AMMCLib User's Guide.
To use this feature, set the SWLIBS_DEFAULT_IMPLEMENTATION macro in the SWLIBS_Config.h
file (located in the "include_ammclib" folder) to one of the available presets:
#define SWLIBS_DEFAULT_IMPLEMENTATION SWLIBS_DEFAULT_IMPLEMENTATION_F32
or
#define SWLIBS_DEFAULT_IMPLEMENTATION SWLIBS_DEFAULT_IMPLEMENTATION_F16
or
#define SWLIBS_DEFAULT_IMPLEMENTATION SWLIBS_DEFAULT_IMPLEMENTATION_FLT

The AMMCLib User's Guide and Release Notes can be found
at the "Getting Started"/"Extensions" page in the Help menu.

In order to build your project with the Green Hills compiler plugin for the S32 Design Studio, two
steps are needed:
1) Import the Green Hills plugin:
  Help->Install New Software->Add->Local, navigate to the "eclipse" subfolder in your Green Hills
  installation folder. Note that some older version of the Green Hills plugin are not compatible
  with the S32 Design Studio.
2) Add the compiler path variable to your workspace settings:
  Window->Preferences->C/C++->Build->Build Variables->Add, set Variable name to "S32DS_GHS_PATH",
  set Value to the folder of your Green Hills compiler installation (e.g. C:\ghs\comp_xxxx).
