#ifndef __ISP_DDR_MAP_H__
#define __ISP_DDR_MAP_H__ 
#include <global_ddr_map.h>
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
#define ISP_PTABLE_1LEVEL_BASEADDR (0x00000000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_PTABLE_2LEVEL_BASEADDR (0x00002000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_PARAMETERS_BASEADDR (0x0000C000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_SMMU_ERRRD_BASEADDR (0x0000F000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_SMMU_ERRWR_BASEADDR (0x0000F800 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_BOOTLOADER_BASEADDR (0x00010000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_BOOTLOADER_SIZE (0x4000)
#define ISP_RSCTABLE_BASEADDR (0x00014000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_RSCTABLE_SIZE (0x4000)
#define ISP_OS_SPACE_BASEADDR (0x00018000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_OS_TEXT_BASEADDR (0x00018000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_OS_TEXT_SIZE (0x300000)
#define ISP_OS_DATA_BASEADDR (0x00318000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_OS_DATA_SIZE (0x500000 - 0x8000)
#define ISP_PTABLE_3LEVEL_BASEADDR (0x00810000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define ISP_OS_HEAP_BASEADDR (0x00A10000 + HISI_RESERVED_ISP_BOOT_PHYMEM_BASE)
#define SECISP_LOAD_BASE (ISP_BOOTLOADER_BASEADDR)
#define SECISP_LOAD_SIZE (ISP_BOOTLOADER_SIZE + ISP_RSCTABLE_SIZE + ISP_OS_TEXT_SIZE + ISP_OS_DATA_SIZE)
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif
#endif