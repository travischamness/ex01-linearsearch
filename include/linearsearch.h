#include <cstdint>

namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {
				template <class T>
				int64_t find(const T& value, T array[], size_t size) {
					if (array == NULL) return -1;
					for (int64_t i = 0; i < size; i++) {
						if (value == array[i]) return i;
						//The return is only here because we are making a generic code.
					} return -1;
				}	

			}
		}
	}
}
