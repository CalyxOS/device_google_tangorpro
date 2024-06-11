# Inherit some common stuff.
TARGET_DISABLE_EPPE := true
$(call inherit-product, vendor/calyx/config/common_tablet_wifionly.mk)

# Inherit device configuration
$(call inherit-product, device/google/gs201/calyx_common.mk)
$(call inherit-product, device/google/tangorpro/device-calyx.mk)
$(call inherit-product, device/google/tangorpro/aosp_tangorpro.mk)

## Device identifier. This must come after all inclusions
PRODUCT_NAME := calyx_tangorpro
PRODUCT_MODEL := Pixel Tablet
PRODUCT_BRAND := google

PRODUCT_BUILD_PROP_OVERRIDES += \
    TARGET_PRODUCT=tangorpro \
    PRIVATE_BUILD_DESC="tangorpro-user 14 AP2A.240605.024 11860263 release-keys"

BUILD_FINGERPRINT := google/tangorpro/tangorpro:14/AP2A.240605.024/11860263:user/release-keys

PRODUCT_RESTRICT_VENDOR_FILES := false

$(call inherit-product, vendor/google/tangorpro/tangorpro-vendor.mk)
