#include "ObScript.h"
#include "skse64_common\Relocation.h"

// 3FF8B913C886A91CB5E3914CFDDBA88B8E5DAE2C+36
RelocPtr <ObScriptCommand>	g_firstObScriptCommand(0x01FCEA10);
// B0061DDA35158B8956EF9CFBDD3D63C5B4C96A8D+F
RelocPtr <ObScriptCommand>	g_firstConsoleCommand(0x01FDD0B0);

// 42E5B9018CCF84B813403067F1D963D8C753ED8D+4C
RelocAddr <_ObScript_ExtractArgs> ObScript_ExtractArgs(0x0033E550);
