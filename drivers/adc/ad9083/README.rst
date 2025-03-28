AD9083 no-OS Driver
===================

Supported Devices
-----------------

- :adi:`AD9083`

Overview
--------

The AD9083 is a 16-channel, 125MHz bandwidth continuous-time sigma-delta (CTSD)
analog-to-digital converter (ADC) that incorporates an integrated programmable
single-pole antialiasing filter and termination resistor. It is designed to
offer low power consumption and a compact form factor, ensuring ease of use
for a wide range of applications. Each ADC core is composed of a first-order
CTSD modulator, embedded background nonlinearity correction, and self-cancelling
dither to accommodate wide bandwidth differential inputs. The device features
a built-in voltage reference, cascaded integrator comb (CIC) filter, and a
quadrature digital downconverter (DDC) with FIR decimation filters. It delivers
high-speed Subclass 1 JESD204B serialized output, configurable in various lane
arrangements, and supports synchronization across multiple devices. Additionally,
the AD9083 provides flexible power-down options and is programmable via a 1.8V
compatible 3-wire SPI interface. It operates within a temperature range of −40°C
to +85°C and is available in a 100-ball CSP_BGA package.

Applications
------------

- Millimeter wave imaging
- Electronic beam forming and phased arrays
- Multichannel wireless receivers
- Electronic support measures

Operation Modes
---------------

+--------------------------+-----------------+-----------------+
| Mode Name                | Description     | Typical Use     |
|                          |                 | Case            |                 
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | Disable Test    | Use when no     |
| _MODE_DISABLED           | Mode for the    | test mode is    |
|                          | JESD            | necessary.      |
|                          | transmitter.    |                 |
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | Checkerboard    | Testing of data |
| _MODE_CHECKER_BOARD      | Test Mode for   | integrity in    |
|                          | sending         | JESD interface. |
|                          | checkerboard    |                 |
|                          | pattern data.   |                 |
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | Word Toggle     | Verification of |
| _MODE_WORD_TOGGLE        | Test Mode for   | JESD interface  |
|                          | toggling word   | by toggling     |
|                          | patterns.       | words.          |
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | PN31 Test Mode  | Performance     |
| _MODE_PN31               | for sending     | testing using   |
|                          | pseudo-random   | pseudo-random   |
|                          | binary sequence | data.           |
|                          | data.           |                 |
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | PN15 Test Mode  | Used in         |
| _MODE_PN15               | based on        | scenarios       |
|                          | pseudo-random   | requiring less  |
|                          | patterns.       | complexity than |
|                          |                 | PN31.           |
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | PN7 Test Mode   | For less        |
| _MODE_PN7                | operating with  | extensive       |
|                          | simplified      | testing         |
|                          | pseudo-random   | environments.   |
|                          | patterns.       |                 |
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | Ramp Test Mode  | Simulation of   |
| _MODE_RAMP               | simulating      | continuous      |
|                          | ramping data    | increase in     | 
|                          | stream.         | data which aids |
|                          |                 | in buffer       |
|                          |                 | testing.        |
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | Repeated User   | Validation with |
| _MODE_USER_REPEAT        | Data Test       | known static    |
|                          | sending same    | patterns        |
|                          | data patterns.  | repeated over   | 
|                          |                 | time.           |
+--------------------------+-----------------+-----------------+
| AD9083_JESD_TX_TEST      | Single Time     | Used for        |
| _MODE_USER_SINGLE        | User Data Test  | transient data  |
|                          | Mode for        | verification.   |
|                          | one-off pattern |                 |
|                          | testing.        |                 |
+--------------------------+-----------------+-----------------+

Device Configuration
--------------------

Initialization and Configuration
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The ``ad9083.c`` file encompasses critical functions necessary for the
initialization and configuration of the AD9083 device. The
``ad9083_init`` function facilitates device preparation by allocating
required resources, configuring GPIOs and SPI communication, and
validating the chip ID against expected values. Subsequently, it invokes
the ``ad9083_setup`` function to establish parameters such as clock
settings and ADC configurations based on a specified configuration
index. During the setup process, the function executes a software reset
and device initialization, while also adjusting JESD204 subclass
settings as required. The ``ad9083_remove`` function ensures proper
resource deallocation by releasing memory and removing SPI and GPIO
descriptors when the device is no longer in use.

Register and SPI Communication
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

SPI communication is facilitated through functions like
``ad9083_reg_get`` and ``ad9083_reg_set``, which handle reading and
writing to device registers. ``ad9083_reg_get`` uses the device’s SPI
descriptor to read a specified register, while ``ad9083_reg_set`` writes
a value to a register. Both ensure valid addresses and handle errors.
The ``ad9083_spi_xfer`` function manages data flow during SPI transfers,
checking data sizes and ensuring communication success.

Utility
~~~~~~~

Utility functions in the file support the AD9083’s management and
operation. ``ad9083_log_write`` logs messages by severity levels,
including warnings and errors. ``ad9083_udelay`` provides
microsecond-level delays for synchronizing operations, and
``ad9083_reset_pin_ctrl`` manages the device’s reset state via GPIOs,
enabling programmatic resets. These utilities support robust operation
and debugging.

Driver Initialization Example
-----------------------------

.. code-block:: C

   #include "ad9083.h"
   #include "no_os_spi.h"
   #include "no_os_gpio.h"

   // Define the initialization parameters
   struct ad9083_init_param init_param = {
       .spi_init = {
           .max_speed_hz = 1000000,
           .chip_select = 0,
           .mode = NO_OS_SPI_MODE_0,
           .extra = NULL,
       },
       .gpio_reset = {
           .number = 0,
           .extra = NULL,
       },
       .some_settings = 0, // Add any device-specific settings here
   };

   int main(void) {
       struct ad9083_dev *dev;
       int ret;

       // Initialize the device
       ret = ad9083_init(&dev, &init_param);
       if (ret) {
           printf("Initialization failed!\n");
           return ret;
       }

       // Use the device (e.g., read data, configure settings)
       // ...

       // Clean up
       ad9083_remove(dev);

       return 0;
   }
