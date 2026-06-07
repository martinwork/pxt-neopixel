namespace ws2812b {
    //% shim=ws2812b::send_buffer
    export function sendBuffer(buf: Buffer, pin: DigitalPin) {
        basic.pause(0)
    }

    //% shim=ws2812b::set_buffer_mode
    export function setBufferMode(pin: DigitalPin, mode: number) {
        basic.pause(0)
    }

    export const BUFFER_MODE_RGB = 1
    export const BUFFER_MODE_RGBW = 2
    export const BUFFER_MODE_RGB_RGB = 3
    export const BUFFER_MODE_AP102 = 4
}
