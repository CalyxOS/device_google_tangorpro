#ifndef CASTKEY_VENDOR_VTS_MODULE
#define CASTKEY_VENDOR_VTS_MODULE

#include <utils/Log.h>

#include "drm_hal_vendor_module_api.h"

using std::vector;

/**
 * Define the DrmHalVTSVendorModule_V1 for Castkey. Refer to
 * drm_hal_vendor_module_api.h for more details.
 */
namespace castkey_vts {

    class CastkeyVTSVendorModule_V1 : public DrmHalVTSVendorModule_V1 {
    public:
        CastkeyVTSVendorModule_V1() {}
        virtual ~CastkeyVTSVendorModule_V1() {}

        virtual vector<uint8_t> getUUID() const;

        virtual vector<uint8_t> handleProvisioningRequest(const vector<uint8_t>&
                provisioningRequest, const std::string& url);

        virtual vector<uint8_t> handleKeyRequest(const vector<uint8_t>&
                keyRequest, const std::string& serverUrl);

        virtual std::vector<ContentConfiguration>
                getContentConfigurations() const;

        virtual std::string getServiceName() const {return "castkey";}

    private:
        CastkeyVTSVendorModule_V1(const CastkeyVTSVendorModule_V1&) = delete;
        void operator=(const CastkeyVTSVendorModule_V1&) = delete;

        std::string toString(std::vector<uint8_t> vector) {
            return std::string(vector.begin(), vector.end());
        }
    };
}; // namespace castkey_vts

#endif //CASTKEY_VENDOR_VTS_MODULE
