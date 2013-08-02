#pragma once
#include "platfrom.h"
#if PLATFORM == PLATFORM_WIN32
	#include "iocp/IocpPool.h"
#elif PLATFORM == PLATFORM_APPLE
	#include "kqueue/KqueuePool.h"
#else
	#include "epoll/EpollPool.h"
#endif