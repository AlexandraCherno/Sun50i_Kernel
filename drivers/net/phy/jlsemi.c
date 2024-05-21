#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/errno.h>
#include <linux/unistd.h>
#include <linux/slab.h>
#include <linux/interrupt.h>
#include <linux/init.h>
#include <linux/delay.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/skbuff.h>
#include <linux/mm.h>
#include <linux/module.h>
#include <linux/mii.h>
#include <linux/ethtool.h>
#include <linux/phy.h>
#include <linux/mdio.h>
#include <linux/io.h>
#include <linux/uaccess.h>
#include <linux/of.h>

#include <asm/irq.h>


#define JLSemi_F1_PHY_ID      0x937c4023
#define JLSemi_F2_PHY_ID      0x937c4024
#define JLSemi_F3_PHY_ID      0x937c4025
#define JLSemi_F4_PHY_ID      0x937c4026
#define JLSemi_F5_PHY_ID      0x937c4027

#define JLSEMI_PHY_ID_MASK		0x00000fff

static int jl11x1_config_init(struct phy_device *phydev)
{
        int ret;
        int val;

        ret = genphy_config_init(phydev);
        if (ret < 0)
                return ret;

        ret = phy_write(phydev, 0x1f, 0x7);
	ret = phy_write(phydev, 0xf3, 0x10);
       
        return ret;
}

static struct phy_driver jlsemi_phy_driver[] = {
 {
	.phy_id		= JLSemi_F1_PHY_ID,
	.name		= "JLSemi11x1",
	.phy_id_mask	= JLSEMI_PHY_ID_MASK,
	.soft_reset	= genphy_no_soft_reset,
	.config_init	= jl11x1_config_init,
	.features	= PHY_GBIT_FEATURES | SUPPORTED_MII |
			  SUPPORTED_AUI | SUPPORTED_FIBRE |
			  SUPPORTED_BNC,
	.config_aneg	= genphy_config_aneg,
	.aneg_done	= genphy_aneg_done,
	.read_status	= genphy_read_status,
	.suspend	= genphy_suspend,
	.resume		= genphy_resume,
} };


module_phy_driver(jlsemi_phy_driver);

static struct mdio_device_id __maybe_unused jlsemi_tbl[] = {
	{JLSemi_F1_PHY_ID, JLSEMI_PHY_ID_MASK },
	{JLSemi_F2_PHY_ID, JLSEMI_PHY_ID_MASK },
	{JLSemi_F3_PHY_ID, JLSEMI_PHY_ID_MASK },
	{JLSemi_F4_PHY_ID, JLSEMI_PHY_ID_MASK },
	{JLSemi_F5_PHY_ID, JLSEMI_PHY_ID_MASK },
	{ },
};
MODULE_DEVICE_TABLE(mdio, jlsemi_tbl);

MODULE_DESCRIPTION("JLSemi PHY driver");
MODULE_LICENSE("GPL");
