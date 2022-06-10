/*
 *  linux/arch/arm/mach-nds/arch.c
 *
 *  Copyright (C) 2004 SAMSUNG ELECTRONICS Co.,Ltd.
 *			      Hyok S. Choi (hyok.choi@samsung.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
//#include <generated/autoconf.h>
#include <linux/types.h>
#include <linux/sched.h>
#include <linux/interrupt.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/list.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <linux/string.h>

//#include <linux/sysdev.h>

//#include <asm/hardware.h>
#include <asm/io.h>
#include <asm/irq.h>
#include <asm/setup.h>
#include <asm/mach-types.h>

#include <asm/mach/arch.h>
#include <asm/mach/irq.h>
#include <asm/mach/map.h>

#include <mach/power.h>


static const char *const nds_dt_match[] __initconst = {
	"nintendo,dsi",
	NULL,
};



static void nds_machine_init(void)
{
	POWER_CR = POWER_2D | POWER_2D_SUB | POWER_LCD | POWER_SWAP_LCDS ;


}
/*
static void __init
fixup_nds(struct machine_desc *desc, struct tag *tags,
	      char **cmdline, struct meminfo *mi)
{
	mi->bank[0].start = CONFIG_DRAM_BASE;
	mi->bank[0].size  = CONFIG_DRAM_SIZE;
	mi->bank[0].node  = 0;
	mi->nr_banks = 1;

}*/

MACHINE_START(NDS, "Nintendo DSi")
	//.phys_ram	= CONFIG_DRAM_BASE,
	//.phys_io	= 0x04000000,
	//.init_irq	= nds_init_irq,
	//.timer		= &nds_timer,
	.init_machine	= nds_machine_init,
	.dt_compat	= nds_dt_match,
	//.fixup		= fixup_nds,
MACHINE_END
