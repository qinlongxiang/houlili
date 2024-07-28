#include <assert.h>

#include "../json.h"
#include "reflection.h"
#include "reflection_register.h"
#include "../serializer/serializer.h"

// #include "_generated/reflection/all_reflection.h"
// #include "_generated/serializer/all_serializer.ipp"

namespace HouLili
{
    namespace Reflection
    {
        void TypeMetaRegister::metaUnregister() { TypeMetaRegisterinterface::unregisterAll(); }
    } // namespace Reflection
} // namespace HouLili
