#include "pxt.h"

namespace ws2812b {
    //%
    void send_buffer(Buffer buf, int pin) {
        if (!buf || !buf->length)
            return;
#if MICROBIT_CODAL
        codal::neopixel_send_buffer(*pxt::getPin(pin), buf->data, buf->length);
#else
    #if CONFIG_ENABLED(DEVICE_BLE) && CONFIG_ENABLED(MICROBIT_BLE_ENABLED)
        if ( bleManager.getConnected())
        {
            return;
        }
    #endif
        // setup pin as digital
        pxt::getPin(pin)->setDigitalValue(0);
        wait_us(300); // initial reset
        __disable_irq();
        neopixel_send_buffer_core( pxt::getPin(pin), buf->data, buf->length);
        __enable_irq();

#endif
    }

    //%
    void set_buffer_mode(int pin, int mode) {

    }
}
