#include <malloc.h>

#include <boost/thread.hpp>
#include <boost/asio.hpp>

namespace blink { namespace agents {
	class UpgradeViewerAgent
	{
	public:
		UpgradeViewerAgent();
		~UpgradeViewerAgent();
	private:
		boost::asio::io_service		m_ioService;
		boost::asio::deadline_timer	m_timer;
		boost::thread				m_backgroundThread;
	};
}}