/*
 * Host1x init for Tegra210 SoCs
 *
 * Copyright (c) 2015 NVIDIA Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HOST1X_HOST1X05_H
#define HOST1X_HOST1X05_H

#ifdef CONFIG_TEGRA_HOST1X05
struct host1x;

int host1x05_init(struct host1x *host);
#else
#define host1x05_init	NULL
#endif

#endif
