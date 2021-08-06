/* Bar functionality */
#include "bar_indicators.c"
#include "bar_tagicons.c"

#include "bar_alpha.c"
#include "bar_ltsymbol.c"
#include "bar_status.c"
#include "bar_tags.c"
#include "bar_wintitle.c"
#include "bar_systray.c"

/* Other patches */
#include "cfacts.c"
#include "cool_autostart.c"
#include "ipc.c"
#ifdef VERSION
#include "ipc/IPCClient.c"
#include "ipc/yajl_dumps.c"
#include "ipc/ipc.c"
#include "ipc/util.c"
#endif
#include "movestack.c"
#include "pertag.c"
#include "restartsig.c"
#include "sticky.c"
#include "tagswapmon.c"
#include "vanitygaps.c"
#include "xkb.c"
/* Layouts */
#include "layout_facts.c"
#include "layout_monocle.c"
#include "layout_tile.c"

