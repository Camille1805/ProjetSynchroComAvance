#include "direction.c"

struct voiture{
  pid_t PID;
  enum direction depart;
  enum direction arrive;
};
