#ifdef ENABLE_LTTNG_UST
#define TRACEPOINT_CREATE_PROBES
#include "libmcount/lttng-events.h"
#endif /* ENABLE_LTTNG_UST */