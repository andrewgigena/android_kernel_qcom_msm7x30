#ifndef __UAPI_LINUX_LSM303DLH_H__
#define __UAPI_LINUX_LSM303DLH_H__

#include <linux/ioctl.h>  /* For IOCTL macros */

#define LSM303DLH_ACC_IOCTL_BASE 'a'
/* The following define the IOCTL command values via the ioctl macros */
#define LSM303DLH_ACC_IOCTL_SET_DELAY	_IOW(LSM303DLH_ACC_IOCTL_BASE, 0, int)
#define LSM303DLH_ACC_IOCTL_GET_DELAY	_IOR(LSM303DLH_ACC_IOCTL_BASE, 1, int)
#define LSM303DLH_ACC_IOCTL_SET_ENABLE	_IOW(LSM303DLH_ACC_IOCTL_BASE, 2, int)
#define LSM303DLH_ACC_IOCTL_GET_ENABLE	_IOR(LSM303DLH_ACC_IOCTL_BASE, 3, int)
#define LSM303DLH_ACC_IOCTL_SET_G_RANGE	_IOW(LSM303DLH_ACC_IOCTL_BASE, 4, int)

#define LSM303DLH_MAG_IOCTL_BASE 'm'
/* The following define the IOCTL command values via the ioctl macros */
#define LSM303DLH_MAG_IOCTL_SET_DELAY	_IOW(LSM303DLH_MAG_IOCTL_BASE, 0, int)
#define LSM303DLH_MAG_IOCTL_GET_DELAY	_IOR(LSM303DLH_MAG_IOCTL_BASE, 1, int)
#define LSM303DLH_MAG_IOCTL_SET_ENABLE	_IOW(LSM303DLH_MAG_IOCTL_BASE, 2, int)
#define LSM303DLH_MAG_IOCTL_GET_ENABLE	_IOR(LSM303DLH_MAG_IOCTL_BASE, 3, int)
#define LSM303DLH_MAG_IOCTL_SET_H_RANGE	_IOW(LSM303DLH_MAG_IOCTL_BASE, 4, int)

/* Accelerometer Sensor Full Scale */
#define LSM303DLH_G_2G 			0x00
#define LSM303DLH_G_4G 			0x10
#define LSM303DLH_G_8G 			0x30

/* Magnetometer Sensor Full Scale */
#define LSM303DLH_H_1_3G		0x20
#define LSM303DLH_H_1_9G		0x40
#define LSM303DLH_H_2_5G		0x60
#define LSM303DLH_H_4_0G		0x80
#define LSM303DLH_H_4_7G		0xA0
#define LSM303DLH_H_5_6G		0xC0
#define LSM303DLH_H_8_1G		0xE0

#endif /* __UAPI_LINUX_LSM303DLH_H__ */
