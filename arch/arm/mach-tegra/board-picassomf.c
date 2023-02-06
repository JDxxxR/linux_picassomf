#include <linux/interrupt.h>
#include <linux/spinlock.h>
#include <linux/gpio.h>
#include <linux/clk.h>
#include <linux/err.h>
#include <linux/skbuff.h>
#include <linux/delay.h>
#include <linux/uaccess.h>
#include <linux/syscalls.h>
#include <linux/syscore_ops.h>
#include <linux/reboot.h>
#include <linux/platform_device.h>
#include <linux/highmem.h>
#include <linux/memblock.h>
#include <linux/regulator/consumer.h>
#include <linux/of_platform.h>
#include <linux/mmc/host.h>
#include <linux/file.h>
#include <linux/input.h>
#include <linux/gpio/machine.h>
#include <linux/of_address.h>
#include <linux/version.h>
#include "board.h"

void __init tegra_picassomf_init(void) {
	pr_info("Initializing picassomf\n", __func__);
}
