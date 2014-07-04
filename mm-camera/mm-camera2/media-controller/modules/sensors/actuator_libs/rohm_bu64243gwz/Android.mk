LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE_TAGS := optional

LOCAL_CFLAGS:= -DAMSS_VERSION=$(AMSS_VERSION) \
        $(mmcamera_debug_defines) \
        $(mmcamera_debug_cflags)

MCTL_PATH := $(LOCAL_PATH)/../../../../../media-controller/

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../../module/
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../../../../../../common/
LOCAL_C_INCLUDES += $(MCTL_PATH)/mct/tools/
LOCAL_C_INCLUDES += $(MCTL_PATH)/modules/sensors/actuators/
LOCAL_C_INCLUDES += rohm_bu64243gwz_actuator.h

LOCAL_SRC_FILES:= rohm_bu64243gwz_actuator.c

LOCAL_MODULE           := libactuator_rohm_bu64243gwz
LOCAL_SHARED_LIBRARIES := libcutils
include $(LOCAL_PATH)/../../../../../../local_additional_dependency.mk

ifeq ($(MM_DEBUG),true)
LOCAL_SHARED_LIBRARIES += liblog
endif

LOCAL_MODULE_OWNER := qcom
LOCAL_PROPRIETARY_MODULE := true

include $(BUILD_SHARED_LIBRARY)
