#include "config.h"
#include <Watchy.h>

watchySettings settings {
    .cityID = CITY_ID,
    .weatherAPIKey = OPENWEATHERMAP_APIKEY,
    .weatherURL = OPENWEATHERMAP_URL,
    .weatherUnit = TEMP_UNIT,
    .weatherLang = TEMP_LANG,
    .weatherUpdateInterval = WEATHER_UPDATE_INTERVAL,
    .ntpServer = NTP_SERVER,
    .gmtOffset = GMT_OFFSET_SEC,
    .vibrateOClock = true,
};

class CantRead : public Watchy {
public:
	CantRead(const watchySettings& s) : Watchy(s) {}
	void drawWatchface() {
		display.setCursor(10, 10);
		display.print("Hello, world!");
	}
};

CantRead watchface(settings);

void setup() {
	watchface.init();
}

void loop() {}
