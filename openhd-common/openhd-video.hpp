#ifndef OPENHD_VIDEO_H
#define OPENHD_VIDEO_H


#include <string>
#include <vector>

#include "openhd-util.hpp"

typedef enum RecordingStorage {
    RecordingStorageMemory,
    RecordingStorageSD,
    RecordingStorageUSB
} RecordingStorage;


inline RecordingStorage string_to_recording_type(std::string recording_type) {
    if (to_uppercase(recording_type).find(to_uppercase("memory")) != std::string::npos) {
        return RecordingStorageMemory;
    } else if (to_uppercase(recording_type).find(to_uppercase("sd")) != std::string::npos) {
        return RecordingStorageSD;
    } else if (to_uppercase(recording_type).find(to_uppercase("usb")) != std::string::npos) {
        return RecordingStorageUSB;
    }

    return RecordingStorageMemory;
}


typedef enum RecordingTriggerType {
    RecordingTriggerTypeAlways,
    RecordingTriggerTypeRC,
    RecordingTriggerTypeArm
} RecordingTriggerType;


inline RecordingTriggerType string_to_recording_trigger_type(std::string trigger_type) {
    if (to_uppercase(trigger_type).find(to_uppercase("rc")) != std::string::npos) {
        return RecordingTriggerTypeRC;
    } else if (to_uppercase(trigger_type).find(to_uppercase("arm")) != std::string::npos) {
        return RecordingTriggerTypeArm;
    }

    return RecordingTriggerTypeAlways;
}


typedef enum RecordingLocation {
    RecordingLocationNone,
    RecordingLocationGround,
    RecordingLocationAir,
    RecordingLocationBoth
} RecordingLocation;


inline RecordingLocation string_to_recording_location(std::string recording_location) {
    if (to_uppercase(recording_location).find(to_uppercase("ground")) != std::string::npos) {
        return RecordingLocationGround;
    } else if (to_uppercase(recording_location).find(to_uppercase("air")) != std::string::npos) {
        return RecordingLocationAir;
    } else if (to_uppercase(recording_location).find(to_uppercase("both")) != std::string::npos) {
        return RecordingLocationAir;
    }

    return RecordingLocationNone;
}

#endif
