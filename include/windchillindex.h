#ifndef WINDCHILLINDEX_H
#define WINDCHILLINDEX_H

namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv13 {
				double computeWindChillIndex(double temperature, double windVelocity);
			}
		}
	}
}

#endif