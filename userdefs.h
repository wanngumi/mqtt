#include <stdbool.h>

typedef enum {
  MQTT_QOS_0 = 0,
  MQTT_QOS_1,
  MQTT_QOS_2
} mqtt_qos_t;

typedef struct __attribute__ ((__packed__)){
  char location[256];        /**< Location name. */
  double temperature;        /**< Temperature value. */
  double pressure;           /**< Pressure value. */
  double humidity;           /**< Humidity value. */
} ambient_t;

typedef struct {
  char broker_hostname[128];     /**< Hostname/IP of the MQTT broker host. */
  uint16_t broker_port;          /**< MQTT broker listens on this port for MQTT messages. */
  char location[64];             /**< MQTT location string. */
} start_arg_t;

extern int process_arguments(int argc, char *argv[], start_arg_t *start_arg);
