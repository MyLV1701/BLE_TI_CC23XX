#include <ti/log/LogSinkTrc.h>


#ifndef _DBGCH_SUPPORTED
#define _DBGCH_SUPPORTED 0x07
#endif

#if (_DBGCH_SUPPORTED & 1)
Log_MODULE_DEFINE(LogShortCh1, Log_MODULE_INIT_SINK_TRC_SHORT(Log_ALL | Log_ENABLED));
Log_MODULE_DEFINE(LogLongCh1, Log_MODULE_INIT_SINK_TRC_LONG(Log_ALL | Log_ENABLED));
Log_MODULE_DEFINE(TestCaseShortCh1, Log_MODULE_INIT_SINK_TRC_SHORT(Log_ALL | Log_ENABLED));
Log_MODULE_DEFINE(TestCaseLongCh1, Log_MODULE_INIT_SINK_TRC_LONG(Log_ALL | Log_ENABLED));
Log_MODULE_DEFINE(RclCoreShortCh1, Log_MODULE_INIT_SINK_TRC_SHORT(Log_ALL | Log_ENABLED));
Log_MODULE_DEFINE(RclCoreLongCh1, Log_MODULE_INIT_SINK_TRC_LONG(Log_ALL | Log_ENABLED));
#endif
#if (_DBGCH_SUPPORTED & 2)
Log_MODULE_DEFINE(LogShortCh2, Log_MODULE_INIT_SINK_TRC_SHORT(Log_ALL | Log_ENABLED));
Log_MODULE_DEFINE(LogLongCh2, Log_MODULE_INIT_SINK_TRC_LONG(Log_ALL | Log_ENABLED));
#endif
#if (_DBGCH_SUPPORTED & 4)
Log_MODULE_DEFINE(LogShortCh3, Log_MODULE_INIT_SINK_TRC_SHORT(Log_ALL | Log_ENABLED));
Log_MODULE_DEFINE(LogLongCh3, Log_MODULE_INIT_SINK_TRC_LONG(Log_ALL | Log_ENABLED));
#endif
