#include "pxt.h"

namespace ws2812b {
    //%
    void send_buffer(Buffer buf, int pin) {
        if (!buf || !buf->length)
            return;
#if MICROBIT_CODAL
        codal::neopixel_send_buffer(*pxt::getPin(pin), buf->data, buf->length);
#else
        neopixel_send_buffer(*pxt::getPin(pin), buf->data, buf->length);
#endif
    }

    //%
    void set_buffer_mode(int pin, int mode) {

    }
}
