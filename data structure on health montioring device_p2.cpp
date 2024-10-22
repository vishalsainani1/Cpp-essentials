class VitalMonitorCoordinator {
private:
    // Encapsulated data (private)
    float heartRate;
    float oxygenLevel;
    float glucoseLevel;
    float bloodPressure;

    // Notification mechanisms
    bool beepEnabled;
    bool vibrateEnabled;
    bool clusterEnabled;

public:
    // Constructor to initialize vitals and notification settings
    VitalMonitorCoordinator()
        : heartRate(0.0), oxygenLevel(0.0), glucoseLevel(0.0), bloodPressure(0.0),
          beepEnabled(false), vibrateEnabled(false), clusterEnabled(false) {}

    // Setters (mutators)
    void setHeartRate(float hr) {
        heartRate = hr;
    }

    void setOxygenLevel(float ox) {
        oxygenLevel = ox;
    }

    void setGlucoseLevel(float glucose) {
        glucoseLevel = glucose;
    }

    void setBloodPressure(float bp) {
        bloodPressure = bp;
    }

    // Enable/Disable notification mechanisms
    void enableBeep(bool enable) {
        beepEnabled = enable;
    }

    void enableVibrate(bool enable) {
        vibrateEnabled = enable;
    }

    void enableCluster(bool enable) {
        clusterEnabled = enable;
    }

    // Getters (accessors)
    float getHeartRate() const {
        return heartRate;
    }

    float getOxygenLevel() const {
        return oxygenLevel;
    }

    float getGlucoseLevel() const {
        return glucoseLevel;
    }

    float getBloodPressure() const {
        return bloodPressure;
    }

    // Functions to process data, trigger notifications, etc.
    void processVitals();
    void notify();
};















