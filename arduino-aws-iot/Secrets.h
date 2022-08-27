#include <pgmspace.h>
 
#define SECRET
 
const char WIFI_SSID[] = "";               //Wifi Name
const char WIFI_PASSWORD[] = "";           //Password
 
#define THINGNAME ""
 
int8_t TIME_ZONE = -3; //Brasilia(Brazil): -3 UTC
 
const char MQTT_HOST[] = "";

const char AWS_IOT_ENDPOINT[] = "";  

// Copy contents from AmazonRootCA1.pem.crt here ▼
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";
 
 
// Copy contents from XXXXXXXX-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
 
)KEY";
 
 
// Copy contents from  XXXXXXXX-private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----

-----END RSA PRIVATE KEY-----
 
)KEY";
