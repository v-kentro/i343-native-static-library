# i343-native-static-library

An example of and explanation for how to create a NuGet package containing a static library that can be linked into a C++ project.

## Quick-Start

```
Install-Package i343-native-static-library
```

```cpp
#include <i343/static_math/mathematics.h>

void foo()
{
    const double sum = i343::static_math::mathematics::add(42.0, 27.6);
}
```
