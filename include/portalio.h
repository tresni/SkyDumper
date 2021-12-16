#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <unistd.h>
#include <string.h>

// unix io functions
#include <fcntl.h>


#include <hidapi.h>
#include <libusb.h>
#include "skylander.h"

#define rw_buf_size  0x21
#define TIMEOUT 30000
#define SKYLANDER_SIZE 1024
#define MAX_STR 255

#define DEBUG 1

struct hid_device_head {
    /* Handle to the actual device. */
    libusb_device_handle *device_handle;

    /* Endpoint information */
    int input_endpoint;
    int output_endpoint;
    int input_ep_max_packet_size;
};

typedef struct {
    unsigned char buf[rw_buf_size];
    int dwBytesTransferred;
} RWBlock;

class PortalIO {

    hid_device *hPortalHandle;

public:
    PortalIO();

    ~PortalIO();

    bool ReadBlock(unsigned int, unsigned char [0x10], int);

    void SetPortalColor(unsigned char, unsigned char, unsigned char);

    bool WriteBlock(unsigned int, unsigned char [0x10], int);

    void flash(void);

    unsigned char PortalStatus();

protected:
    void OpenPortalHandle();

    void Write(RWBlock *);

    void RestartPortal(void);

    void ActivatePortal(int);

    bool CheckResponse(RWBlock *, char);
};
