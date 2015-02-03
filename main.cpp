#include "struct.h"
#include "log.h"

int main (int argc, char *argv[]) {
  
  struct_logger_t<Datum> logger ( "struct.log" );
  logger ( (Datum) { 1, 1.0 } );

}
