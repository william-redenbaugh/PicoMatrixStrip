#include "networking_module.h"
#include "global_includes.h"

const char ssid[] = "GoogleWatchesUsAll";
const char password[] = "rapidpiano738";

os_udp_server_t *udp;
void networking_module_init(void *params){
    int ret = os_wifi_connect_sta((char*)ssid, (char*)password);

    if(ret != OS_RET_OK){
        println("Couldn't connect to the internet");
    }

    udp = os_wifi_setup_udp_server(8080);

    if(udp == NULL){
        println("UDP server couldn't be initialized");
    }
}

void networking_module_thread(void *params){
    
    for(;;){
        os_thread_sleep_ms(10);
    }
}